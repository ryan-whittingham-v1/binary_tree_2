#include<stdio.h>
#include"PA4.h"

int tree_search(struct bstNode *root, int userNum){
	
	if(userNum==root->data){//If number is found
		return 0;
	}
	else if(userNum<root->data){//If number is smaller that root
		if(root->left==NULL){//Number not in left tree
			return 1;
		}
		else{
			tree_search(root->left, userNum);
		}
	}
	else if(userNum>root->data){//Number is larger than root
		if(root->right==NULL){//Number not in right tree
			return 1;
		}
		else{
			tree_search(root->right, userNum);
		}
	}
}
