#include<stdio.h>
#include<conio.h>
#include<iostream.h>

#define SIZE 20

int st[SIZE];
int top = -1;

void push(int item) {
	if(top >= SIZE - 1) {
		cout << "\nStack is full!";
	}
	top++;
	st[top] = item;
	cout << "\nPushed " << item << " to stack";
}

int pop() {
	if(top < 0) {
		cout << "\nStack is empty!";
		return -1;
	}
	int item = st[top];
	top--;
	return item;
}

void display() {
	if(top < 0) {
		cout << "\nStack is empty!";
	}
	cout << "\nStack elements are:\n";
	for (int i = top; i >= 0; i--) {
		cout << " -> " << st[i];
	}

}

void main() {
	int ch, item;
	clrscr();
	do {
		cout << "\nWhich operation do you want to perform on Stack?:\n";
		cout << "\n1.Push\n2.Pop\n3.Display\n4.Exit\n";
		cout << "\nEnter choice: ";
		cin >> ch;
		switch(ch) {
			case 1:
				cout << "\nEnter item to push:";
				cin >> item;
				push(item);
				break;
			case 2:
				item = pop();
				if(item != -1){
					cout << "\nPopped " << item << " from stack.";
				}
				break;
			case 3:
				display();
				break;
			case 4:
				cout << "\nExiting..!";
				break;
			default:
				cout << "Invalid Choice !";
		}
	} while (ch != 4);
	getch();
}