
CFLAGS = -Wall
OBJS = func1.o main.o
TARGET = main

$(TARGET): $(OBJS)
	gcc -o main main.c func1.c
%.o : %.c
	gcc -c $< 


