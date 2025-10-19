#include <iostream>
#include <cmath>
using namespace std;

/**
 *The only great programming language is Holy C... fight me
 */

void cls(string OS){
	if (OS == "1"){
		system("cls");
	}
	else if (OS == "2"){
		system("clear");
	}
	else{
		cout << "\033[1;31mInvalid input \n\n\033[0m";
	}
}

void bokaru(int mode){
	float a;
	float b;
	float output;
	cout << "\033[1;34mEnter #1: ";
	cin >> a;
	cout << "Enter #2: ";
	cin >> b;
	cout << "\033[0m";
	cout << "\n" << "\033[1;33m---\033[0m" << "\n";

	switch(mode){
		case 1:
			output = a + b;
			cout << "\033[1;33mOutput: " << output << "\n\n\033[0m";
			break;
		
		case 2:
			output = a - b;
			cout << "\033[1;33mOutput: " << output << "\n\n\033[0m";
			break;
		
		case 3:
			output = a * b;
			cout << "\033[1;33mOutput: " << output << "\n\n\033[0m";
			break;

		case 4:
			output = a / b;
			cout << "\033[1;33mOutput: " << output << "\n\n\033[0m";
			break;
	}
}

void pain(){
	double a;
	double b;
	double c;

	cout << "\033[1;34mEnter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "Enter c: ";
	cin >> c;
	cout << "\033[0m";

	double x1 = (-b + sqrt(pow(b,2) - (4 * a * c)))/(2 * a);
	double x2 = (-b - sqrt(pow(b,2) - (4 * a * c)))/(2 * a);
	
	cout << "\033[1;33m\n\n" << "--- \n\n";
	cout << "x = " << x1 << " , " << x2 << "\n\n\033[0m";
}

void hero(){
	double a;
	double b;
	double c;

	cout << "\033[1;34mEnter side A: ";
	cin >> a;
	cout << "Enter side B: ";
	cin >> b;
	cout << "Enter side C: ";
	cin >> c;
	cout << "\033[0m";

	double s = ((a+b+c)/2);
	double Area = (sqrt(s * (s-a) * (s-b) * (s-c)));

	cout << "\033[1;33m\n\n" << "--- \n\n";
	cout << "Area = " << Area << "\n\n\033[0m";
}

void gayline(){
	double x1;
	double y1;
	double x2;
	double y2;

	cout << "\033[1;34mEnter x-coordinate 1: ";
	cin >> x1;
	cout << "Enter y-coordinate 1: ";
	cin >> y1;
	cout << "Enter x-coordinate 2: ";
	cin >> x2;
	cout << "Enter y-coordinate 2: ";
	cin >> y2;
	cout << "\033[0m";

	double difx = x1 - x2;
	double dify = y1 - y2;
 	double	d = sqrt(pow(difx,2) + pow(dify,2));
	double  m = dify / difx;

	cout << "\033[1;33m\n\n" << "--- \n\n";
	cout << "Distance = " << d << ", Slope = " << m << "\n\n\033[0m";
}

void binconv(){
	int i;
	int ipt;
	int nimput;
	int digits[16];

	cout << "\033[1;34mInput: ";
	cin >> ipt;
	
	nimput = ipt / 2;
	int rem = ipt % 2;

	cout << ipt << "\033[1;33m as in base2 = ";

	for (i = 0; i < 16; i++){
		digits[15-i] = rem;
		rem = nimput % 2;
		nimput = nimput / 2;
	}

	for (i = 0; i < 16; i++){
		cout << digits[i];
	}

	cout << "\n\n\033[0m";
}

void exif(string OS){
	cout << "\033[1;31m Press Enter to continue...\n\n\033[0m";
	getchar();
	getchar();
	cls(OS);
}

int main(){
	string type;
	cout << "\033[1;3;31m{ Please input your OS: }" << "\n\n\033[0m";
	cout << "\033[1m1. Windows \n2. Linux \n\nInput: ";
	cout << "\033[0m";
	cin >> type;
	
	cls(type);
	getchar();
	string mode;
	char eqit = '0';

	while (eqit == '0'){

	cout << "\033[1;34m--- MINI CALCULATOR v0.1.1 ---\033[0m" << "\n\n";
	cout << "\033[1;32m1. Arithmetic \033[0m\n\033[1;35m2. Functions \033[0m\n\033[1;33m3. Exit \033[0m\n\n\033[1mInput: \033[0m";
	cin >> mode;

	cls(type);
	getchar();

	if(mode == "1"){
		cout << "\033[1;34m--- Functions --- \n\n\033[0m";
		cout << "\033[1;36m1. Addition \n2. Subtraction \n3. Multiplication \n4. Division \n\nInput: \033[0m";
		char armode;
		cin >> armode;

		cls(type);
		getchar();

		switch(armode){
			case '1':
				bokaru(1);
				exif(type);
				break;
			case '2':
				bokaru(2);
				exif(type);
				break;
			case '3':
				bokaru(3);
				exif(type);
				break;
			case '4':
				bokaru(4);
				exif(type);
				break;
		
			default:
				cout << "\033[1;31mInvalid option \n\n\033[0m";	
		
		}
	}
	else if(mode == "2"){
		cout << "\033[1;34m--- Functions --- \n\n\033[0m";
		cout << "\033[1;36m1. Quadratic Formula \n2. Heron's Formula \n3. Distance & Slope formula \n4. base10 -> base2 converter\n\n\033[1mInput: \033[0m";
		char fomode;
		cin >> fomode;
		
		cls(type);
		getchar();
		switch(fomode){
			case '1':
				pain();
				exif(type);
				break;
			case '2':
				hero();
				exif(type);
				break;
			case '3':
				gayline();
				exif(type);
				break;
			case '4':
				binconv();
				exif(type);
				break;
			default:
				cout << "\033[1;31mInvalid Option \n\n\033[0m";
		}
	
	}else{
		eqit = '1';
	}
	}
	cout << "\033[1;31m--- Goodbye --- \n\n\033[0m";

	return 0;
}

/*
 Why are my limbs slack?
 Why can't I move my eyes?
 Why can't my mouth move?
 Is this an internal monolouge?
 I can't see the end of this horizon?
 HATSUNE MIKU?!!?!?!?!?!?
 */

