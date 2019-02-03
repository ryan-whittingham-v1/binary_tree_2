#include<stdio.h>
#include"PA3.h"

int add_stack(struct node *sentinel, int nodeData){
	
	struct node *newNode=get_node();//Allocate memory for a new node and assign address to newNode
	if(newNode != NULL){//If space available
                newNode->data=nodeData;//Assign user number to node
                newNode->next=sentinel->next;//newNode point previous top of stack
		sentinel->next = newNode;//New node becomes first in the list
                return 1;//Success
	}
	
	return 0;//Fail
}


