
#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<rational.h>


void main(){
	clrscr();
	rational r1,r2,r3,r4,r5,r6;
	r1 = getrational();
	r2 = getrational();
	fflush(stdin);
	//printrational(r1);
	r3 = addrational(r1,r2);
	cout << "\nAddition:";
	printrational(r3);
	r4 = multirational(r1,r2);
	cout << "\nMultiplication:";
	printrational(r4);
	cout << "\nSubtraction:";
	r5 = subrational(r1,r2);
	printrational(r5);
	cout << "\nDivision:";
	r6 = divrational(r1,r2);
	printrational(r6);
	getch();
}