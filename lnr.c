#include<stdio.h>
#include"PA4.h"

void lnr(struct bstNode *root){
	if(root==NULL){
		return;
	}
	lnr(root->left);
	printf("%d, ",root->data);
	lnr(root->right);
}

