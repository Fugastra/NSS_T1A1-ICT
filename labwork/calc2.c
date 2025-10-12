#include <stdio.h>
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

void addition(){
	float a;
	float b;
	printf("Enter number 1: ");
	scanf("%f", &a);
	getchar();
	printf("Enter number 2: ");
	scanf("%f", &b);
	float output = a + b;
	printf("Output = %f \n\n", output);

}

void subtraction(){
	float a;
	float b;
	printf("Enter number 1: ");
	scanf("%f", &a);
	getchar();
	printf("Enter number 2: ");
	scanf("%f", &b);
	float output = a - b;
	printf("Output = %f \n\n", output);

}

void multiplication(){
	float a;
	float b;
	printf("Enter number 1: ");
	scanf("%f", &a);
	getchar();
	printf("Enter number 2: ");
	scanf("%f", &b);
	float output = a * b;
	printf("Output = %f \n\n", output);

}

void division(){
	float a;
	float b;
	printf("Enter number 1: ");
	scanf("%f", &a);
	getchar();
	printf("Enter number 2: ");
	scanf("%f", &b);
	float output = a / b;
	printf("Output = %f \n\n", output);

}

void Quad(){
	double a;
	double b;
	double c;
	printf("Enter a: ");
	scanf("%lf", &a);
	getchar();

	printf("Enter b: ");
	scanf("%lf", &b);
	getchar();

	printf("Enter c: ");
	scanf("%lf", &c);

	double x1 = (-b + sqrt(pow(b,2) - (4 * a * c )))/(2 * a);
	double x2 = (-b - sqrt(pow(b,2) - (4 * a * c )))/(2 * a);

	printf("%.5lf , %.5lf \n\n", x1, x2);
}

void Hform(){
	double a;
	double b;
	double c;
	printf("Enter a: ");
	scanf("%lf", &a);
	getchar();

	printf("Enter b: ");
	scanf("%lf", &b);
	getchar();

	printf("Enter c: ");
	scanf("%lf", &c);

	double s = ((a+b+c)/2);
	double A = (sqrt(s * (s-a) * (s-b) * (s-c)));

	printf("Area = %.5lf \n\n", A);
}

int main(){
	printf("{ Please Input your Operating System: }\n\n");
	printf("1. Windows \n2. Linux \n\nInput: ");
	char type;
	scanf("%c", &type);
	
	cls(type);
	
	getchar();
	char mode;
	printf("--- MINI CALCULATOR v0.0.1 --- \n");
	printf("\n");
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
				addition();
				break;
			case '2':
				subtraction();
				break;
			case '3':
				multiplication();
				break;
			case '4':
				division();
				break;
			default:
				printf("Invalid option. Use your eyes to READ");
		}
	}
	if(mode == '2'){
		printf("--- Formulas ---\n\n");	
		printf("1. Quadratic Formula \n2. Heron's Formula \n3. ??? \n4. ??? \n\nInput: ");
		char form;
		scanf("%c", &form);

		cls(type);
		getchar();
		switch(form){

			case '1':
				Quad();
				break;
			case '2':
				Hform();
				break;
			default: 
				printf("Invalid Option. Enter a VALID option");
		}

	}
	printf("--- Goodbye --- \n\n");
	getchar();

	return(0);
}
