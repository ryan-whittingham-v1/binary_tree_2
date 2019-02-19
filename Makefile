pa4: main.o 
	gcc -o pa4 main.o 
main.o: main.c PA4.h
	gcc -c main.c
clean: 
	rm pa4 main.o
