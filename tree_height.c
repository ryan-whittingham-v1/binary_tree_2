#include<stdio.h>
#include"PA4.h"

int tree_height(struct bstNode *root){
	int leftHeight=-1;
	int rightHeight=-1;

	if(root==NULL){//If at bottom of tree
		return -1;
	}
	
	leftHeight=1+(tree_height(root->left));//find height of left
	rightHeight=1+(tree_height(root->right));//find height of right
	
	if(leftHeight>rightHeight){//If left is the highest
		return leftHeight;
	}
	else{//Right is higher
		return rightHeight;
	}
}
