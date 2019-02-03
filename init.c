#include<stdio.h>
#include"PA3.h"

struct node * init(void){
        struct node *sentinel;
        sentinel=get_node();//Allocate memmory and assign address to sentinel
        sentinel->data=42;
        sentinel->next=NULL;
        return sentinel;
}

