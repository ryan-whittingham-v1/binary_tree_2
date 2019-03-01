#include<stdio.h>
#include"PA4.h"

struct bstNode * pop_queue(struct queueNode *sentinel){
	if(sentinel->next != NULL){//If list is not empty
		struct queueNode *nodePop=sentinel->next;//Create nodePop pointer to first in queue
		sentinel->next=nodePop->next;//Set sentinel to point to node after popped node
		return nodePop->data;//Success
	}
	return NULL;//Fail
}
