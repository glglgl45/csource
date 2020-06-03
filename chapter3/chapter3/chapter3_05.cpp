#include <stdio.h>
#include <iostream>
#include <iomanip> // setw()
using namespace std;

int main(void) {
	int a = 10; // int형 변수의 선언과 초기화
	int *pi; // 포인터 선언
	int **ppi; // 2중 포인터 선언

	pi = &a; // int 형 변수의 주소를 포인터로 저장
	ppi = &pi;
	cout << "------------------------------" << endl;

	cout << "변수" << setw(12) << "&연산" 
		<< setw(10) << "*연산" << setw(10) << "**연산" << endl;
	cout << "------------------------------" << endl;
	cout << "a" << setw(16) << &a << endl;
	cout << "pi" << setw(15) << &pi << setw(10) << *pi << endl;
	cout << "ppi" << setw(14) << &ppi << setw(10) << *ppi << setw(10) << **ppi << endl;

	return 0;
}