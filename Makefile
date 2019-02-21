pa4: main.o tree_search.o init.o tree_insert.o lnr.o
	gcc -o pa4 main.o tree_search.o init.o tree_insert.o lnr.o
main.o: main.c PA4.h
	gcc -c main.c
tree_search.o: tree_search.c PA4.h
	gcc -c tree_search.c
init.o: init.c PA4.h
	gcc -c init.c
tree_insert.o: tree_insert.c PA4.h
	gcc -c tree_insert.c
lnr.o:	lnr.c PA4.h
	gcc -c lnr.c
clean: 
	rm pa4 main.o tree_search.o init.o tree_insert.o lnr.o
