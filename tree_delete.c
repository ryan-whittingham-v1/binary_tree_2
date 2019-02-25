#include<stdio.h>
#include"PA4.h"

struct bstNode * tree_delete(struct bstNode *root, int deleteNum){
	
	struct bstNode *temp;//create temp pointer for place-holding

	if(root==NULL){//Once root is equal to NULL
		return root;//Return root for assignment in recursive calls
	}
	if(deleteNum<root->data){//If number to delete is less than root
		root->left=tree_delete(root->left, deleteNum);
	}
	else if(deleteNum>root->data){//Number to delete is greater than root
		root->right=tree_delete(root->right, deleteNum);
	}
	else{//Root is equal to number to delete
		if(root->left==NULL){//If root left doesn't have a branch
			temp=root->right;//Assign root right to temp
			free(root);
			return temp;
		}
		else if(root->right==NULL){//Else if root right doesn't have a branch
			temp=root->left; 
			free(root);
			return temp;  
		}
		else{//root has a right or left branch
			temp=root->right;
			while(temp->left!=NULL){//Traverse left subtree
				temp=temp->left;
			}
		}
		
		root->data=temp->data;
		root->right=tree_delete(root->right, temp->data);
		 
		return root;
	}	
}

