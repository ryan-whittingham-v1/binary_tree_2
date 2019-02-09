#include<stdio.h>
#include"PA3.h"

int add_queue(struct node *node, int nodeData){
	
	struct node *newNode=get_node();//Allocate memory for a new node and assign address to newNode

	if(newNode != NULL){//If space available
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
