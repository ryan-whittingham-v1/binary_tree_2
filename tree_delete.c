#include<stdio.h>
#include"PA4.h"

//**WARNING**This function assumes the number to delete is in fact in the tree. Use in conjuction with a search function to ensure proper results.

struct bstNode * tree_delete(struct bstNode *root, int deleteNum){
	
	struct bstNode *temp, *parentRoot;//create pointers for ease of assignments

	if(deleteNum<root->data){//If number to delete is less than root
		root->left=tree_delete(root->left, deleteNum);
	}
	else if(deleteNum>root->data){//Number to delete is greater than root
		root->right=tree_delete(root->right, deleteNum);
	}
	else{//Root is equal to number to delete
		if(root->left!=NULL){//If root has left node
			temp=root->left;//Assign new root to root's left child
			if(temp->right!=NULL){//If new root contains larger data in it's sub-tree
				while(temp->right!=NULL){//Traverse sub-tree to find the largest value
					parentRoot=temp;
					temp=temp->right;
				}
				parentRoot->right=temp->left;
				temp->left=root->left;
				temp->right=root->right;
			}
			else if(root->right==NULL){//first left node is largest
				temp->right=root->right;
			}
		}
		else{//root doesn't have a left subtree
			temp=root->right;
		}
		free(root);
		return temp;
	}
}
