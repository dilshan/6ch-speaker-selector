# SDCC compiler name and path.
SDCC=sdcc
# MCU part number.
MCU_NUMBER=STC15W201S
# MCU clock frequency
FREQ=11069000

# STC programming utility name and path.
FLASH=stcgal
# Device path of the programmer.
FLASHDEV=/dev/ttyUSB0

# Compiler parameters.
CFLAGS=-D $(MCU_NUMBER) -D F_CPU=$(FREQ)UL
# Name of the object files.
OBJ=utils.rel eeprom.rel main.rel
# Name of the output file.
TARGET=spk-selector.ihx

# Common object files for STC MCU series.
STD_OBJECTS=

OBJECTS= $(STD_OBJECTS) $(OBJ)

MAP=$(TARGET:.ihx=.map)
LK=$(TARGET:.ihx=.lk)
MEM=$(TARGET:.ihx=.mem)

SYMBOLS=$(notdir $(OBJECTS:.rel=.sym))
ASMS=$(notdir $(OBJECTS:.rel=.asm))
LISTS=$(notdir $(OBJECTS:.rel=.lst))
RSTS=$(notdir $(OBJECTS:.rel=.rst))

MCUOPT_FREQ=$(shell echo $$(($(FREQ) / 1000)))

all: $(TARGET)

%.rel: %.c
	$(SDCC) -mmcs51 $(CFLAGS) -c $<

$(TARGET): $(OBJECTS)
	$(SDCC) -mmcs51 -o $@ $(notdir $(OBJECTS))

clean:
	rm -f $(notdir $(OBJECTS))
	rm -f $(MAP)
	rm -f $(LK)
	rm -f $(MEM)
	rm -f $(SYMBOLS)
	rm -f $(ASMS)
	rm -f $(LISTS)
	rm -f $(RSTS)
	rm -f $(TARGET)

flash: $(TARGET)
	$(FLASH) -P stc15 -p $(FLASHDEV) -t $(MCUOPT_FREQ) $(TARGET)