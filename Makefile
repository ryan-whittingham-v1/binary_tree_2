main: main.o
	gcc -o main main.o
main.o: main.c PA3.h
	gcc -c main.c
clean: 
	rm main main.o
