all: bcmp 

bcmp: bcmp.o
	gcc -o bcmp bcmp.o


bcmp.o: bcmp.c
	gcc -Wall -c -o bcmp.o bcmp.c


clean:
	rm -f bcmp *.o
