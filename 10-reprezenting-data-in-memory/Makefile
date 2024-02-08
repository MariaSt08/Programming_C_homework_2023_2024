all: safeadd.exe safesubtract.exe safemultiply.exe safedivide.exe

safeadd.exe: safeint.o util.o safeadd.c
	gcc safeint.o util.o safeadd.c -o safeadd.exe

safesubtract.exe: safeint.o util.o safesubtract.c
	gcc safeint.o util.o safesubtract.c -o safesubtract.exe

safemultiply.exe: safeint.o util.o safemultiply.c
	gcc safeint.o util.o safemultiply.c -o safemultiply.exe

safedivide.exe: safeint.o util.o safedivide.c
	gcc safeint.o util.o safedivide.c -o safedivide.exe

util.o: util.c util.h
	gcc -c util.c

safeint.o: safeint.c safeint.h
	gcc -c safeint.c

clean:
	del *.exe *.o
