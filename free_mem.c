#include<stdio.h>
#include"PA3.h"

int free_mem(struct node *ll){
        struct node *temp;
        while(ll != NULL){//While not the end of the list
                temp=ll->next;//Temp holds next location before freeing
                free(ll);//Free the memmory 
                ll=temp;//Jump to next node to be freed
        }
        return 0;
}

