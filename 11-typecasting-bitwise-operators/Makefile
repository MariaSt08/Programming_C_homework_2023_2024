all: main.exe
main.exe: quadraticroots.o main.c
	gcc main.c quadraticroots.o -o main.exe

quadraticroots.o: quadraticroots.c quadraticroots.h
	gcc -c quadraticroots.c -lm -o quadraticroots.o

clean:
	del *.exe *.o