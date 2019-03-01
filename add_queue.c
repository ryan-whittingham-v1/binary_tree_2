#include<stdio.h>
#include"PA4.h"

int add_queue(struct queueNode *sentinel, struct bstNode *treeNode){
	
	struct queueNode *newNode=get_node();//Allocate memory for a new queue node and assign address to newNode
	newNode->data=treeNode;//Attach incoming tree node to new node's current pointer 
	if(newNode != NULL){//If space available
		while(sentinel->next != NULL){//crawl through list till end
			sentinel=sentinel->next;
		}
		sentinel->next=newNode;//Last node points to newNode
                newNode->next=NULL;//newNode points to NULL
                return 1;//Success
	}
	return 0;//Fail
}
