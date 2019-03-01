#include<stdio.h>
#include"PA4.h"

struct bstNode * tree_insert(struct bstNode *root, struct bstNode *newNode){
	if(root==NULL){
		return newNode;
	}
	
	if(newNode->data<root->data){//If number is less than root
			root->left=tree_insert(root->left, newNode);//Check left tree of root 
	}
	else if(newNode->data>root->data){//If number is bigger than root
			root->right=tree_insert(root->right, newNode);//Check right tree of root
	}
	return root;
}

