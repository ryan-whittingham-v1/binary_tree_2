#include<stdio.h>
#include"PA3.h"

int print(struct node *sentinel, int mode){
        struct node *node=sentinel->next;//Set node to first node
	if(node==NULL){//If list is empty
		return 0;//Fail
	}
	if(mode==0){//In stack mode
		printf("TOS--> ");
	}
	else{//In queue mode
		printf("HEAD-> ");
	}
        while(node != NULL){//While not the end of the list
                printf("%d ", node->data);//Display data
                node=node->next;//Move to next node in list
        }
	if(mode==1){//If in queue mode
		printf("<-TAIL");
	}
        printf("\n");
	return 1;//Success
}

