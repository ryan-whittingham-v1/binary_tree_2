pa4: main.o tree_search.o init.o tree_insert.o lnr.o show_options.o tree_delete.o nlr.o lrn.o
	gcc -o pa4 main.o tree_search.o init.o tree_insert.o lnr.o show_options.o tree_delete.o nlr.o lrn.o
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
show_options.o: show_options.c
	gcc -c show_options.c
tree_delete.o: tree_delete.c PA4.h
	gcc -c tree_delete.c 
clean: 
	rm pa4 main.o tree_search.o init.o tree_insert.o lnr.o show_options.o tree_delete.o nlr.o lrn.o
