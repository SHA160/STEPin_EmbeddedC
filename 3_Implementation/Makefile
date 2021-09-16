PROJ_NAME = HeatedSeats

BUILD_DIR = Build

SRC = SeatHeatingApp.c\
src/a1.c\
src/a2.c\
src/a3.c\


OBJCOPY = avr-objcopy.exe

AVRDUDE := avrdude

HFLAGS = -j .text -j .data -O ihex

INC = -I inc

ifdef OS
    
   RM = del /q
   FixPath = $(subst /,\,$1)
   CC = avr-gcc.exe
   AVR_OBJ_CPY = avr-objcopy.exe
else
   ifeq ($(shell uname), Linux)
   	
      RM = rm -rf				
      FixPath = $1				
	  CC = avr-gcc
	  AVR_OBJ_CPY = avr-objcopy 
   endif
endif

.PHONY:all analysis clean doc

all:$(BUILD_DIR)
	$(CC) -g -Wall -Os -mmcu=atmega328 -DF_CPU=16000000UL $(INC) $(SRC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).elf)
	
hex: $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).elf)
	$(OBJCOPY) $(HFLAGS) $< $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).hex)

$(BUILD_DIR):
	mkdir $(BUILD_DIR)

analysis: $(SRC)
	cppcheck --enable=all $^

doc:
	make -C documentation

clean:
	$(RM) $(call FixPath,$(BUILD_DIR)/*)
	make -C documentation clean
	rmdir $(BUILD_DIR)