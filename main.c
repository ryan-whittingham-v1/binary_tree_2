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
	printf("\n Welcome. This program demonstrates the use of a stack and a queue.\n");
	printf("------------------------------------------------------------------\n");
	show_options();
	while(1==1){
		
		printf("\n>");
		fgets(buffer, 100, stdin);//Get user input
		ret=sscanf(buffer, "%9d", &userNum);//Scan for number to add to list
		
		if(ret!=1){//If uesr input not a number
			sscanf(buffer, "%s", userLetter);//Rescan to check for valid option
			if(strcmp(userLetter, "s")==0){//Switch to stack mode
				if(mode==1){
					printf("Switching to stack mode.\n");
				}
				mode=0;//Set mode to stack
				ret=print(stack, mode);
				if(ret==0){//If stack is empty
					printf("Stack is empty.\n");
				}
			}
			else if(strcmp(userLetter, "q")==0){//Swich to queue mode
				if(mode==0){
					printf("Switching to queue mode.\n");
				}
				mode=1;//Set mode to queue
				ret=print(queue, mode);
				if(ret==0){//If queue is empty
					printf("Queue is empty.\n");
				}
			}
			else if(strcmp(userLetter, "p")==0){//remove next in list
				if(mode==0){//In stack mode
					ret=pop_stack(stack, &popNum);
				}
				else{//In queue mode
					ret=pop_queue(queue, &popNum);
				}
				if (ret==0){//If list is not empty
					printf("%d\n", popNum);
				}
				else{//List is empty
					if(mode==0){
					printf("Error: Stack is empty.\n");
					}
					else{
					printf("Error: Queue is empty.\n");
					}
				}
				
			}
			else if(strcmp(userLetter, "Q")==0){//Exit
				return;
			}
			else{
				show_options();//Display help
			}
		}
		else if(mode==0){//In Stack mode
			add_stack(stack, userNum);
		}
		else{//In Queue mode	
			add_queue(queue, userNum);
		}
		strcpy(userLetter, "x");//Reset user input
	}

	return;
}
