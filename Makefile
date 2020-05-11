
CC    = gcc   
CFLAGS = -Wall 
TARGET = test
OBJFILES = main.o list.o
  
$(TARGET): $(OBJFILES)
   $(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES)

main.o: main.c list.c 
   gcc -c main.c list.c 
   
list.o: list.c list.h 
   gcc -c list.c
   
clean:
   rm -f $(OBJFILES) $(TARGET)