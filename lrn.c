#include<stdio.h>
#include"PA4.h"

void lrn(struct bstNode *root){
	if(root==NULL){
		return;
	}

	lrn(root->left);
	lrn(root->right);
	printf("%d, ",root->data);
}

