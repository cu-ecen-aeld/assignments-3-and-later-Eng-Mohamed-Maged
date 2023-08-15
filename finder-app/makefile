CROSS_COMPILE ?=
CC =$(CROSS_COMPILE)gcc
CFLAGS = 
SRC = writer.c
OBJ = $(SRC:.c=.o)
OUT =*.out  
TARGET = writer

$(TARGET) : $(SRC) 
	$(CC) -o $(TARGET) $(SRC)   


clean:
	rm -f $(OUT) $(TARGET) $(OBJ)
