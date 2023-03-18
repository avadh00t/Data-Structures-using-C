#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<complex.h>

void main(){
	complex ans;
	complex c1, c2;
	int ch;
	clrscr();
	cout << "\nEnter Complex Number 1 (Real): ";
	cin >> c1.real;
	cout << "\nEnter Complex Number 1 (Imaginary): ";
	cin >> c1.img;
	cout << "\nEnter Complex Number 2 (Real): ";
	cin >> c2.real;
	cout << "\nEnter Complex Number 2 (Imaginary): ";
	cin >> c2.img;
	cout << "\n\nReal Number 1: ";
	displayComplex(c1);
	cout << "\nReal Number 2: ";
	displayComplex(c2);
	cout << "\n\n\nWhich arithmetic operation do you want to perform?";
	cout << "\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n\n";
	cout << "\nEnter Choice:";
	cin >> ch;
	switch(ch){
		case 1:
			cout << "\n\nAddition:\n";
			ans = addComplex(c1, c2);
			displayComplex(ans);
			break;
		case 2:
			cout << "\n\nSubtraction:\n";
			ans = subComplex(c1, c2);
			displayComplex(ans);
			break;
		case 3:
			cout << "\n\nMultiplication:\n";
			ans = mulComplex(c1, c2);
			displayComplex(ans);
			break;
		case 4:
			cout << "\n\nDivision:\n";
			ans = divComplex(c1, c2);
			displayComplex(ans);
			break;
		default:
			cout << "\nInvalid Choice!!!";
	}
	getch();
}