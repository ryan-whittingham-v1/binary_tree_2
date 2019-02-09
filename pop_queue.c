#include<stdio.h>
#include"PA3.h"

int pop_queue(struct node *sentinel, int *dataPop){
	if(sentinel->next != NULL){//If list is not empty
		struct node *nodePop;
		nodePop=sentinel->next;
		*dataPop=nodePop->data;//Popped number
		sentinel->next=nodePop->next;//Set sentinel to point to node after popped node
		free(nodePop);//Release memory of popped node 
		return 0;//Success
	}
	return 1;//Fail
}
