# komenda buildujaca wszystkie targety w projekcie
all : \
main_program \

clean : \
main_program_clean \

# komenda do buildowania docelowego programu na docelowa platforme
main_program :
	@make -f conf.mk

# czyszczenie plikow powstalych przy buildzie docelowego programu
main_program_clean :
	@make -f conf.mk clean

#
###############################################################################

.PHONY: all clean

.PHONY: main_program main_program_clean