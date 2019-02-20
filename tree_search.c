#include<stdio.h>
#include"PA4.h"

int tree_search(struct bstNode *root, int userNum){
	
	if(userNum==root->data){//Found
		return 0;
	}
	else if(userNum<root->data){//If number is smaller that root
		if(root->left != NULL){
			tree_search(root->left, userNum);
		}
			return 1;//Not found
	}
	else if(userNum>root->data){//Number is larger than root
		if(root->right != NULL){//
			tree_search(root->right, userNum);
		}
			return 1;//Not found
	}
}
