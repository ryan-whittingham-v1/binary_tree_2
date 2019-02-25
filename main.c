#include<stdio.h>
#include"PA4.h"

/* 
Ryan Whittingham
CSE 222
February 18, 2019
Programming Assignment 4

-----------------------------------------------
PA4 is a C program that allows the user to store
integers into a binary search tree and displays 
information about it. 
-----------------------------------------------
*/


void main(){
	
	char buffer[100];
	char userLetter[100];
	int userNum;
	int ret;
	struct bstNode *root=NULL;
	struct bstNode *newNode=NULL;	

	printf("\nBuild a BST (Binary Search Tree)\n");
	printf("-----------------------------------\n");
	show_options();
	
//	root=init();
	
	newNode=init();//Create new BST node
	newNode->data=50;//Assign input number to newNode
	if(root==NULL){
		root=newNode;
	}
	//tree_insert(root, newNode);//Add newNode to the BST

	newNode=init();//Create new BST node
	newNode->data=30;//Assign input number to newNode
	tree_insert(root, newNode);//Add newNode to the BST

	newNode=init();//Create new BST node
	newNode->data=20;//Assign input number to newNode
	tree_insert(root, newNode);//Add newNode to the BST

	newNode=init();//Create new BST node
	newNode->data=40;//Assign input number to newNode
	tree_insert(root, newNode);//Add newNode to the BST

	newNode=init();//Create new BST node
	newNode->data=70;//Assign input number to newNode
	tree_insert(root, newNode);//Add newNode to the BST
	
	newNode=init();//Create new BST node
	newNode->data=60;//Assign input number to newNode
	tree_insert(root, newNode);//Add newNode to the BST

	newNode=init();//Create new BST node
	newNode->data=80;//Assign input number to newNode
	tree_insert(root, newNode);//Add newNode to the BST
	
	while(1==1){
		
		printf("\n>");
		fgets(buffer, 100, stdin);//Get user input
		ret=sscanf(buffer, "%9d", &userNum);//Scan for number to add to tree
		
		if(ret!=1){//If user input was not a single number
			ret=sscanf(buffer, "%s" "%d", userLetter, &userNum);//Rescan input to check for valid command
			if(ret==2){//If user input a character and a number
				if(strcmp(userLetter, "s")==0){//Search for number
					printf("Search for %d\n", userNum);
					ret=tree_search(root, userNum);
					if(ret==0){//If number is found
						printf("Found\n");
					}
					else{//If number is not found
						printf("Not found\n");
					}
				}
				else if(strcmp(userLetter, "d")==0){//Delete number
					printf("Delete %d\n", userNum);
					ret=tree_search(root, userNum);
					if(ret==0){
						tree_delete(root, userNum);
					}
					else{
						printf("%d is not in the tree.\n", userNum);
					}
				}
			}
			else if(ret!=2){//Input not number or character and number
				sscanf(buffer, "%s", userLetter);//Rescan input for character only
				if(strcmp(userLetter, "X")==0){//If X, display tree information
					printf("Display tree information.\n");
					printf("LNR: ");
					lnr(root);
					printf("\nNLR: ");
					nlr(root);
					printf("\nLRN: ");
					lrn(root);
				}
				else if(strcmp(userLetter, "?")==0){//If ?, display help
					show_options();
				}
				else if(strcmp(userLetter, "Q")==0){//If Q, quit
					printf("Goodbye.\n");
					//free_mem(root);
					return;
				}
			}
		}
		else{//User input just a single number to add to the BST
			printf("Add %d to the tree.\n", userNum);
			ret=tree_search(root, userNum);//Search if number already in list
			if(ret==0){//Number is in the list
				printf("%d is already in the tree.\n", userNum);
			}
			else{//Number is not in the list
				printf("%d is not in the list.\n", userNum);
				newNode=init();//Create new BST node
				newNode->data=userNum;//Assign input number to newNode
				if(root==NULL){//If tree is empty
					root=newNode;
				}
				else{
				tree_insert(root, newNode);//Add newNode to the BST
				}
			}
		}
		strcpy(userLetter, "x");//Reset user input to unused command character
	}

}
