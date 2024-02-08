all: taskmanager.exe

taskmanager.exe: processed.o taskmanager.c
	gcc taskmanager.c processed.o -o taskmanager.exe

processed.o: processed.h processed.c
	gcc -c processed.c -o processed.o
clean:
	del *.exe *.o