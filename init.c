#include<stdio.h>
#include"PA4.h"

struct bstNode * init(void){
        struct bstNode *root=malloc(sizeof(struct bstNode));
	root->data=0;
        root->left=NULL;
	root->right=NULL;
        return root;
}

