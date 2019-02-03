#include<string.h>
#include<stdlib.h>

struct node {
        int data;
        struct node *next;
};

struct node * init(void);
int addStack(struct node *, int);
void print(struct node *);
struct node * get_node(void);
void release_node(struct node *);
int freeMem(struct node *);

