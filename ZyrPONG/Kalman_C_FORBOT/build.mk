################################################################################
# Skrypt build na STM32F4
#
################################################################################

###############################################################################
# Definicje dotyczace toolchaina

TOOLCHAIN := arm-none-eabi-

CC := $(TOOLCHAIN)gcc
AS := $(TOOLCHAIN)gcc -x assembler-with-cpp
OBJCOPY := $(TOOLCHAIN)objcopy
OBJDUMP := $(TOOLCHAIN)objdump
SIZE := $(TOOLCHAIN)size
RM := rm -f

#
###############################################################################

# funkcja przeszukujaca rekursywnie podfoldery w poszukiwaniu patternu
rwildcard=$(wildcard $(addsuffix $2, $1))\
$(foreach d,$(wildcard $(addsuffix *, $1)),$(call rwildcard,$d/,$2))

###############################################################################
# Definicje dotyczace plikow i sciezek

# rozszerzenia dla plikow C i ASM
C_EXT := c
ASM_EXT := S

# wyszukiwanie plikow zrodlowych C i ASM
C_SRCS := $(call rwildcard,$(SRC_DIRS),*.$(C_EXT))
ASM_SRCS := $(call rwildcard,$(SRC_DIRS),*.$(ASM_EXT))

# dodanie pojedynczych plikow
C_SRCS += $(C_SRC_FILES)

# zmienna przechowujaca wszystkie sciezki gdzie moga znajdowac sie zaleznosci
VPATH := $(sort $(dir $(C_SRCS) $(ASM_SRCS)) $(INC_DIRS))

#
################################################################################

################################################################################
# Definicje dotyczace kompilatora i linkera

# flagi kompilacji wykorzystywane przy plikach C i ASM
CORE_FLAGS := -mcpu=cortex-m4 -mthumb

# flaga debugowa, wykomentowac jesli niepotrzebne
# dodatkowy kod ulatwiajacy debugowanie, w wersji release mozemy nie uzywac
CORE_FLAGS += -g

# wsparcie hardware dla float, wykomentowac jesli niepotrzebne
#CORE_FLAGS += -mfloat-abi=hard -mfpu=fpv4-sp-d16 -ffast-math

# flagi kompilacji specyficzne dla plikow C
# -std - standard jezyka C, do wyboru: c89, c99, gnu89, gnu99 iso9899:199409
# -O0 - stopien optymalizacji, do wyboru: -O0, -O1, -O2, -O3, -Os
C_FLAGS := -std=gnu89 -O0 -ffunction-sections -fdata-sections

# flagi warningow dla C
# -Wall - podstawowy zestaw warningow
# -Wextra - dodatkowe warningi
# -Wstrict-prototypes - dodatkowe warningi dotyczace prototypow funkcji
C_WARNINGS := -Wall -Wextra -Wstrict-prototypes

# flagi linkera
# -Wl,-Map - plik map do utworzenia
# -T - plik ze skryptem linkera
# -g - opcje debugowe
# -Wl,--gc-sections - usuniecie nieuzywanych funkcji
LD_FLAGS := -Wl,-Map=$(OUT_DIR)bin/$(BIN_NAME).map,--cref -T$(LD_SCRIPT) -g -Wl,--gc-sections

# dodanie globalnych definicji
GLOBAL_DEFS_F = $(patsubst %, -D%, $(GLOBAL_DEFS))
CORE_FLAGS += $(GLOBAL_DEFS_F)

# dodanie sciezek do headerow dla kompilatora
INC_DIRS_F = -I. $(patsubst %, -I%, $(INC_DIRS))

# dodanie sciezek do bibliotek prekompilowanych
LIB_DIRS_F = $(patsubst %, -L%, $(LIB_DIRS))

# dodanie bibliotek prekompilowanych
LIBS_F = $(patsubst %, -l%, $(LIBS))

# ostateczne wersje flag dla C, ASM i linkera
C_FLAGS += $(CORE_FLAGS) $(C_WARNINGS) $(INC_DIRS_F)
ASM_FLAGS := $(CORE_FLAGS) $(INC_DIRS_F)
LD_FLAGS += $(CORE_FLAGS)

#
################################################################################

###############################################################################
# Definicje dotyczace plikow do utworzenia w procesie kompilacji

ELF := $(OUT_DIR)bin/$(BIN_NAME).elf
HEX := $(OUT_DIR)bin/$(BIN_NAME).hex
BIN := $(OUT_DIR)bin/$(BIN_NAME).bin
LSS := $(OUT_DIR)bin/$(BIN_NAME).lss
DMP := $(OUT_DIR)bin/$(BIN_NAME).dmp

C_OBJS := $(addprefix $(OUT_DIR), $(notdir $(C_SRCS:.$(C_EXT)=.o)))
ASM_OBJS := $(addprefix $(OUT_DIR), $(notdir $(ASM_SRCS:.$(ASM_EXT)=.o)))
OBJS := $(ASM_OBJS) $(C_OBJS)

GENERATED := $(OBJS) $(ELF) $(HEX) $(BIN) $(LSS) $(DMP)

#
###############################################################################

################################################################################
# Lista targetow

all : make_out_dir $(ELF) $(LSS) $(DMP) $(HEX) $(BIN) print_size

# tworzenie wsadow
$(HEX) : $(ELF)
	@echo 'Creating HEX image: $(HEX)'
	$(OBJCOPY) -O ihex $< $@
	@echo ' '

$(BIN) : $(ELF)
	@echo 'Creating binary image: $(BIN)'
	$(OBJCOPY) -O binary $< $@
	@echo ' '

# tworzenie memory dumpa
$(DMP) : $(ELF)
	@echo 'Creating memory dump: $(DMP)'
	$(OBJDUMP) -x --syms $< > $@
	@echo ' '

# tworzenie rozszerzonego listingu
$(LSS) : $(ELF)
	@echo 'Creating extended listing: $(LSS)'
	$(OBJDUMP) -S $< > $@
	@echo ' '

#linkowanie
$(ELF) : $(OBJS)
	@echo 'Linking target: $(ELF)'
	$(CC) $(LD_FLAGS) $(OBJS) -o $@ $(LIB_DIRS_F) $(LIBS_F)
	@echo ' '

# kompilacja plikow c
$(OUT_DIR)%.o : %.$(C_EXT)
	@echo 'Compiling file: $<'
	$(CC) -c $(C_FLAGS) $< -o $@
	@echo ' '

# kompilacja plikow asemblera
$(OUT_DIR)%.o : %.$(ASM_EXT)
	@echo 'Assembling file: $<'
	$(AS) -c $(ASM_FLAGS) $< -o $@
	@echo ' '

make_out_dir :
	@echo $(OBJS)
	@mkdir -p $(subst /,,$(OUT_DIR))
	@mkdir -p $(OUT_DIR)bin
	
print_size :
	@echo 'Size of modules:'
	$(SIZE) -B -t --common $(OBJS) $(USER_OBJS)
	@echo ' '
	@echo 'Size of target .elf file:'
	$(SIZE) -B $(ELF)
	@echo ' '

clean:
	@rm -rf $(subst /,,$(OUT_DIR))

# Targety PHONY to takie, ktore nie tworza zadnych plikow wynikowych
.PHONY: all clean print_size make_out_dir

#
################################################################################