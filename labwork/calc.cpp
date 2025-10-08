#include <iostream>
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
		cout << "Invalid input";
	}
}

void miku();
void teto();
void neru();
void kaito();
void pain();
void hero();
void gayline();

int main(){
	string type;
	cout << "{ Please input your OS: }" << "\n\n";
	cout << "1. Windows \n2. Linux \n\nInput: ";
	cin >> type;
	
	cls(type);
	getchar();
	string mode;

	cout << "--- MINI CALCULATOR v0.1.1 ---" << "\n\n";
	cout << "1. Arithmetic \n2. Formulas \n3. Exit \n\nInput: ";
	cin >> mode;

	cls(type);
	getchar();

	if(mode == "1"){
		cout << "-- Functions --- \n\n";
		cout << "1. Addition \n2. Subtraction \n3. Multiplication \n4. Division \n\nInput: ";
		char armode;
		cin >> armode;

		cls(type);
		getchar();

		switch(armode){
			case '1':
				//miku();
				break;
			case '2':
				//teto();
				break;
			case '3':
				//neru();
				break;
			case '4':
				//kaito();
				break;
		
			default:
				cout << "Invalid option";	
		
		}
	}
	else if(mode == "2"){
		cout << "--- Formulas --- \n\n";
		cout << "1. Quadratic Formula \n2. Heron's Formula \n3. Equation of Straight Line \n\nInput: ";
		char fomode;
		cin >> fomode;
		
		cls(type);
		getchar();
		switch(fomode){
			case '1':
				//pain();
				break;
			case '2':
				//hero();
				break;
			case '3':
				//gayline();
				break;
			default:
				cout << "Invalid Option: Cry Harder";
		}
	
	}
	cout << "--- Good Riddance --- \n\n";
	getchar();

	return 0;
}

void miku(){
	float diva, float idol;
	cout << "Enter #1: ";
	cin >> diva;
	cout << "Enter #2: ";
	cin >> idol;



}
