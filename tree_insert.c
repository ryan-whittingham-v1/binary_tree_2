#include<stdio.h>
#include"PA4.h"

struct bstNode * tree_insert(struct bstNode *root, struct bstNode *newNode){
	if(root==NULL){//Once root becomes NULL (base case) 
		return newNode;//Return newNode to be either assigned to root->left or root->right in recursive calls
	}
	
	else if(newNode->data<root->data){
			root->left=tree_insert(root->left, newNode); 
	}
	else if(newNode->data>root->data){
			root->right=tree_insert(root->right, newNode);
	}
}

