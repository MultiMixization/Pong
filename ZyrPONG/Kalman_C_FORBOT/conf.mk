# Skrypt do buildowania projektu na docelowa platforme.
#
# W tym pliku ustawiamy opcje, ktore sa nastepnie przekazywane do wlasciwego
# pliku z buildem.

# Nazwa plikow hex bin itp wygenerowanych w procesie kompilacji.
BIN_NAME := main_program

# Folder zawierajacy wynik kompilacji.
OUT_DIR := obj/

# Symbole define dodawane jako argumenty dla kompilatora
GLOBAL_DEFS := \
STM32F4XX \

# Sciezki do folderow z headerami (.h).
# Od podanego folderu nalezy w kodzie podac pozostala czesc sciezki do pliku.
INC_DIRS := \
./code \
./hw_layer \
./utils \
./external/stm32_headers \
./external/FreeRTOS/include \

# Sciezki do folderow z plikami Ÿród³owymi (.c) i (.S).
# W podanych folderach pliki Ÿród³owe s¹ wyszukiwane rekursywnie w podfolderach.
SRC_DIRS := \
./code \
./hw_layer \
./utils \
./external/FreeRTOS \

# Dodatkowe pliki Ÿród³owe C
C_SRC_FILES := \
./main.c

# Sciezki do bibliotek skompilowanych (.a).
LIB_DIRS := \

# Biblioteki skompilowane wykorzystywane w projekcie.
# Podajemy tutaj nazwê biblioteki. Plik ma jeszcze przedrostek lib i
# rozszerzenie .a czyli dla biblioteki matematycznej dodajemy nazwe "m",
# a rzeczywisty plik nazywa sie "libm.a"
LIBS := \
m \

# Glowny skrypt linkera podawany jako argument przy linkowaniu ld.
LD_SCRIPT := stm32f4.ld

include build.mk