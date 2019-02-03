#include<stdio.h>
#include"PA3.h"

int pop_stack(struct node *sentinel, int *dataPop){
	struct node *firstNode=sentinel->next;
	if(firstNode != NULL){//If list is not empty
		*dataPop=firstNode->data;//Popped number
		sentinel->next=firstNode->next;//Set sentinel to point to node after popped node
		free(firstNode);//Release memory 
		return 0;//Success
	}
	return 1;//Fail
}
