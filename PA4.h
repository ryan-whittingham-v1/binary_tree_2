#include<string.h>
#include<stdlib.h>

struct bstNode {
        int data;
        struct bstNode *left;
	struct bstNode *right;
};

struct bstNode * init(void);
//int add_queue(struct node *, int);
//int free_mem(struct node *);
//void show_options();
int tree_search(struct bstNode *, int);
int tree_insert(struct bstNode *, struct bstNode *);
void lnr(struct bstNode *);
