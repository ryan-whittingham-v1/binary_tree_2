#include<stdio.h>
#include"PA4.h"

int tree_insert(struct bstNode *root, struct bstNode *newNode){
	
	if(newNode->data>root->data){//If number is larger than root
		if(root->right!=NULL){
			tree_insert(root->right, newNode);
		}
		else{
			root->right=newNode;
			return 0;
		}
	}
	else if(newNode->data<root->data){
		if(root->left!=NULL){
			tree_insert(root->left, newNode);
		}
		else{
			root->left=newNode;
			return 0;
		}
	}
	
}

