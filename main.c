#include<stdio.h>
#include"PA3.h"

void main(){
	
	char buffer[100];
	char userLetter[100];
	int userNum;
	int ret;
	int mode=0;
	
	while(1==1){
		printf(">");
		fgets(buffer, 100, stdin);
		ret=sscanf(buffer, "%9d", &userNum);
		if(ret!=1){//Not a number
			sscanf(buffer, "%s", userLetter);//rescan buffer for valid character
			if(strcmp(userLetter, "s")==0){//Stack mode
				printf("Stack mode\n");
				mode=0;
			}
			else if(strcmp(userLetter, "q")==0){//Queue mode
				printf("Queue Mode\n");
				mode=1;
			}
			else if(strcmp(userLetter, "x")==0){
				return;
			}
			else{
				printf("Invalid input\n");
			}
		}
		else if(mode==0){//Stack mode
			printf("Add %d to the stack.\n", userNum);
		}
		else{//Queue mode	
			printf("Add %d to the queue.\n", userNum);
		} 
	}

	return;
}
