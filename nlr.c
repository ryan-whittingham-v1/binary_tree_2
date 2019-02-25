#include<stdio.h>
#include"PA4.h"

void nlr(struct bstNode *root){
	if(root==NULL){
		return;
	}
	printf("%d, ",root->data);
	nlr(root->left);
	nlr(root->right);
}

