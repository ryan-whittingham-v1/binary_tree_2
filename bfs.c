#include<stdio.h>
#include"PA4.h"

void bfs(struct bstNode *root){
	struct bstNode *nextNode;
	struct queueNode *sentinel=get_node();//Create sentinel queue pointer
	sentinel->next=NULL;//Init sentinel to point to NULL
	if(root!=NULL){//If root of tree is not null
		add_queue(sentinel, root);//Add root node to the queue list
	}
	while(sentinel->next!=NULL){//While the queue is not empty
		nextNode=pop_queue(sentinel);//Set nextNode to next tree node in queue
		printf("%d, ", nextNode->data);//Print next tree node
		if(nextNode->left != NULL){//If left of tree node is not null
			add_queue(sentinel, nextNode->left);//Add that left node to queue
		}
		if(nextNode->right != NULL){//If right of tree node is not null
			add_queue(sentinel, nextNode->right);//Add that right node to queue
		}
	}
}
