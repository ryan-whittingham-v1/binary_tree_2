pa3: main.o init.o print.o add_stack.o pop_stack.o get_node.o
	gcc -o pa3 main.o init.o print.o add_stack.o pop_stack.o get_node.o
main.o: main.c PA3.h
	gcc -c main.c
init.o: init.c PA3.h
	gcc -c init.c
print.o: print.c PA3.h
	gcc -c print.c
add_stack.o: add_stack.c PA3.h
	gcc -c add_stack.c
pop_stack.o: pop_stack.c PA3.h
	gcc -c pop_stack.c
get_node.o: get_node.c PA3.h
	gcc -c get_node.c
clean: 
	rm pa3 main.o init.o print.o add_stack.o pop_stack.o get_node.o
