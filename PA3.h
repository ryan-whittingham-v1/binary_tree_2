#include<string.h>
#include<stdlib.h>

struct node {
        int data;
        struct node *next;
};

struct node * init(void);
int add_stack(struct node *, int);
int pop_stack(struct node *, int *);
int add_queue(struct node *, int);
int pop_queue(struct node *, int *);
int print(struct node *, int);
struct node * get_node(void);
int free_mem(struct node *);
void show_options();

