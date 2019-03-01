#include<stdio.h>
#include"PA4.h"

void free_mem(struct bstNode *root){

	if(root==NULL){
		return;
	}

	free_mem(root->left);
	free(root);
	free_mem(root->right);
}
