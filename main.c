#include<stdio.h>
#include"PA3.h"

/* 
Ryan Whittingham
CSE 222
February 2, 2019
Programming Assignment 3

-----------------------------------------------
PA3 is a C program that allows the user to dynamically store
a list of integers in either a stack or queue data structure.
-----------------------------------------------
*/


void main(){
	
	char buffer[100];
	char userLetter[100];
	int userNum;
	int ret;
	int popNum;
	int mode=0;//Stack==0, Queue==1
	struct node *stack;
	struct node *queue;

        stack=init();//Creates sentinel node for stack list
	queue=init();//Creates sentinel node for queue list

	while(1==1){
		
		printf(">");
		fgets(buffer, 100, stdin);//Get user input
		ret=sscanf(buffer, "%9d", &userNum);//Scan for number to add to list
		
		if(ret!=1){//If not a number
			sscanf(buffer, "%s", userLetter);//Rescan for valid character
			if(strcmp(userLetter, "s")==0){//Switch to stack mode
				printf("\nStack mode\n");
				print(stack);
				mode=0;
			}
			else if(strcmp(userLetter, "q")==0){//Swich to queue mode
				printf("Queue Mode\n");
				mode=1;
			}
			else if(strcmp(userLetter, "p")==0){//remove next in list
				if(mode==0){//In stack mode
					ret=pop_stack(stack, &popNum);
					if (ret==0){//If list is not empty
						printf("%d\n\n", popNum);
					}
					else{//List is empty
						printf("Stack is empty.\n\n");
					}
				}
			}
			else if(strcmp(userLetter, "Q")==0){//Exit
				return;
			}
			else{
				printf("Invalid input\n\n");//Display help
			}
		}
		else if(mode==0){//In Stack mode
			printf("Add %d to the stack.\n\n", userNum);
			add_stack(stack, userNum);
		}
		else{//In Queue mode	
			printf("Add %d to the queue.\n\n", userNum);
		}
		strcpy(userLetter, "x");//Reset user input
	}

	return;
}
