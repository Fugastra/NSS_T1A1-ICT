#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int cls(char OS){
	if (OS == '1'){
		system("cls");
	}
	if(OS == '2'){
		system("clear");
	}
}


int main(){
	printf("Please Input your Operating System: \n\n");
	printf("1. Windows \n2. Linux \n\nInput: ");
	char type;
	scanf("%c", &type);
	
	cls(type);
	
	getchar();
	char mode;
	printf("--- MINI CALCULATOR v0.0.1 --- \n");
	printf("\n\n");
	printf("1. Arithmetic \n2. Formula\n3. Exit \n\nInput: ");
	scanf("%c", &mode);
	
	cls(type);
	getchar();
	
	//If the paper didn't ask us to modularize this, I woulda just used one single Switch here. lmao
	if(mode == '1'){
		printf("--- Functions ---\n\n");
		printf("1. Addition \n2. Subtraction \n3. Multiplication \n4. Division \n\nInput: ");
		char art;
		scanf("%c", &art);

		cls(type);
		getchar();
		switch(art){
			case '1':
				//addition();
				break;
			case '2':
				//subtraction();
				break;
			case '3':
				//multiplication();
				break;
			case '4':
				//division();
				break;
			default:
				printf("Invalid option. Use your eyes to READ");
		}
	}
	if(mode == '2'){
	
	
	}

	return(0);
}
