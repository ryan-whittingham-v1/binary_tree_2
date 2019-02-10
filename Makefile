pa3: main.o init.o print.o add_stack.o pop_stack.o get_node.o pop_queue.o add_queue.o show_options.o
	gcc -o pa3 main.o init.o print.o add_stack.o pop_stack.o get_node.o pop_queue.o add_queue.o show_options.o
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
pop_queue.o: pop_queue.c PA3.h
	gcc -c pop_queue.c 
add_queue.o: add_queue.c PA3.h
	gcc -c add_queue.c
show_options.o: show_options.c
	gcc -c show_options.c
clean: 
	rm pa3 main.o init.o print.o add_stack.o pop_stack.o get_node.o pop_queue.o add_queue.o show_options.o 
