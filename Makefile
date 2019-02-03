pa3: main.o init.o print.o addStack.o get_node.o
	gcc -o pa3 main.o init.o print.o addStack.o get_node.o
main.o: main.c PA3.h
	gcc -c main.c
init.o: init.c PA3.h
	gcc -c init.c
print.o: print.c PA3.h
	gcc -c print.c
addStack.o: addStack.c PA3.h
	gcc -c addStack.c
get_node.o: get_node.c PA3.h
	gcc -c get_node.c
clean: 
	rm pa3 main.o inti.o print.o addStack.o get_node.o
