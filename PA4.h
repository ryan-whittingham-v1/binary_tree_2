#include<string.h>
#include<stdlib.h>

struct bstNode {
        int data;
        struct bstNode *left;
	struct bstNode *right;
};
struct queueNode {
	struct bstNode *data;
	struct queueNode *next;
};
	
struct bstNode * init(void);
void free_mem(struct bstNode *);
void show_options();
int tree_search(struct bstNode *, int);
struct bstNode * tree_insert(struct bstNode *, struct bstNode *);
struct bstNode * tree_delete(struct bstNode *, int);
void lnr(struct bstNode *);
void nlr(struct bstNode *);
void lrn(struct bstNode *);
void bfs(struct bstNode *);
int tree_height(struct bstNode *);
int is_balanced(struct bstNode *);
int add_queue(struct queueNode *, struct bstNode *);
struct bstNode * pop_queue(struct queueNode *);
struct queueNode * get_node(void);
