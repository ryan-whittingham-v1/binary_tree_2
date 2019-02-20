#include<stdio.h>
#include"PA4.h"

int add_node(struct bstNode *root, int nodeData){
	
	struct bstNode *newNode=malloc(sizeof(struct bstNode));//Allocate memory for a new node and assign address to newNode

	if(newNode != NULL){//If space available
		if(root->data==NULL){
			
		}
		while(node->next != NULL){//crawl through list till end
			node=node->next;
		}
		node->next=newNode;//Last node points to newNode
		newNode->data=nodeData;//Assign user number to node
                newNode->next=NULL;//newNode points to NULL
                return 1;//Success
	}
	return 0;//Fail
}
