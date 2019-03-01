#include<stdio.h>
#include"PA4.h"

int is_balanced(struct bstNode *root){
	int leftHeight=-1;
	int rightHeight=-1;

	if(root==NULL){//If at bottom of tree
		return -1;
	}
	
	leftHeight=1+(tree_height(root->left));//find total height of left
	rightHeight=1+(tree_height(root->right));//find total height of right
	
	if(abs(leftHeight-rightHeight)<=1){//If height difference of left and right is no more than 1
		return 0;//Tree is balanced
	}
	else{//The tree is not balanced
		return 1;
	}
}
