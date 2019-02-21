#include<stdio.h>
#include"PA4.h"

int tree_insert(struct bstNode *root, struct bstNode *newNode){
	
	if(newNode->data>root->data){//If number is larger than root
		if(root->right==NULL){
			root->right=newNode;
			return 0;
		}
		printf("recurse right\n");
		tree_insert(root->right, newNode);
	}
	else if(newNode->data<root->data){//If number is less than root
		if(root->left==NULL){
			root->left=newNode;
			return 0;
		}
			printf("recurse left\n");
			tree_insert(root->left, newNode);
	}
	
}

