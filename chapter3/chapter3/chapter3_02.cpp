// Stack Memory ±¸Çö
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>
#define MAX 5

using namespace std;

int stack[MAX], top = -1, k;

int push(int t) {
	if (top >= MAX - 1) {
		cout << "overFlow!!!" << t << endl;
		return(1);
	}
	else
		return(stack[++top] = t);
}

void st_print() {
	for (int i = top; i >= 0; i--) {
		cout << setw(3) << stack[i];
	}
	cout << endl;
}

int pop() {
	if (top < 0) {
		cout << "UnderFlow!!! Stack Empty" << endl;
		return(-1);
	}
	else
		return(stack[top --]);
}

void main() {
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	push(6);
}