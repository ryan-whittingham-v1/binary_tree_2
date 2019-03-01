pa4: main.o tree_search.o init.o tree_insert.o lnr.o show_options.o tree_delete.o nlr.o lrn.o tree_height.o is_balanced.o add_queue.o bfs.o pop_queue.o get_node.o
	gcc -o pa4 main.o tree_search.o init.o tree_insert.o lnr.o show_options.o tree_delete.o nlr.o lrn.o tree_height.o is_balanced.o add_queue.o bfs.o pop_queue.o get_node.o
main.o: main.c PA4.h
	gcc -c main.c
tree_search.o: tree_search.c PA4.h
	gcc -c tree_search.c
init.o: init.c PA4.h
	gcc -c init.c
tree_insert.o: tree_insert.c PA4.h
	gcc -c tree_insert.c
lnr.o: lnr.c PA4.h
	gcc -c lnr.c
nlr.o: nlr.c PA4.h
	gcc -c nlr.c
lrn.o: lrn.c PA4.h
	gcc -c lrn.c
bfs.o: bfs.c PA4.h
	gcc -c bfs.c
add_queue.o: add_queue.c PA4.h
	gcc -c add_queue.c
pop_queue.o: pop_queue.c PA4.h
	gcc -c pop_queue.c
show_options.o: show_options.c
	gcc -c show_options.c
tree_delete.o: tree_delete.c PA4.h
	gcc -c tree_delete.c 
tree_height.o: tree_height.c PA4.h
	gcc -c tree_height.c
is_balanced.o: is_balanced.c PA4.h
	gcc -c is_balanced.c
get_node.o: get_node.c PA4.h
	gcc -c get_node.c
clean: 
	rm pa4 main.o tree_search.o init.o tree_insert.o lnr.o show_options.o tree_delete.o nlr.o lrn.o tree_height.o is_balanced.o add_queue.o bfs.o pop_queue.o get_node.o
