#include<stdio.h>
#include"PA3.h"

void print(struct node *sentinel){
        struct node *node=sentinel->next;//Set node to first node
        while(node != NULL){//While not the end of the list
                printf("%d ", node->data);//Display data
                node=node->next;//Move to next node in list
        }
        printf("\n\n");
}

