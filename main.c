#include<stdio.h>
#include"PA4.h"

/* 
Ryan Whittingham
CSE 222
February 18, 2019
Programming Assignment 4

-----------------------------------------------
PA4 is a C program that allows the user to store
integers into a binary search tree structure.
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

	printf("\nLet's build a binary search tree.\n");
	printf("-------------------------------------\n");
	while(1==1){
		
		printf("\n>");
		fgets(buffer, 100, stdin);//Get user input
		ret=sscanf(buffer, "%9d", &userNum);//Scan for number to add to tree
		
		if(ret!=1){//If user input was not a single number
			ret=sscanf(buffer, "%s" "%d", userLetter, &userNum);//Rescan to check for valid option
			if(ret==2){//If user input a character and number
				if(strcmp(userLetter, "s")==0){//If search for number
					printf("Search for %d\n", userNum);
				}
				else if(strcmp(userLetter, "d")==0){//If d, delete number
					printf("Delete %d\n", userNum);
				}
			}
			else if(ret!=2){//User input only characters
				sscanf(buffer, "%s", userLetter);
				if(strcmp(userLetter, "X")==0){//If X, display tree information
					printf("Display tree information.\n");
				}
				else if(strcmp(userLetter, "?")==0){//If ?, display help
					printf("Display help.\n");
				}
				else if(strcmp(userLetter, "Q")==0){//If Q, quit
					printf("Goodbye.\n");
					return;
				}
			
			}
		}
		else{//User input a number to add to the tree
			printf("Add %d to the tree.\n", userNum);
		}
		strcpy(userLetter, "x");//Reset user input
	}

}
