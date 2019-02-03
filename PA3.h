#include<string.h>
#include<stdlib.h>

struct node {
        int data;
        struct node *next;
};

struct node * init(void);
int add_stack(struct node *, int);
int pop_stack(struct node *, int *);
void print(struct node *);
struct node * get_node(void);
int freeMem(struct node *);

