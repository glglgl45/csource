#include <stdio.h>
#include <iostream>
#include <iomanip> // setw()
using namespace std;

int main(void) {
	int a = 10; // int�� ������ ����� �ʱ�ȭ
	int *pi; // ������ ����
	int **ppi; // 2�� ������ ����

	pi = &a; // int �� ������ �ּҸ� �����ͷ� ����
	ppi = &pi;
	cout << "------------------------------" << endl;

	cout << "����" << setw(12) << "&����" 
		<< setw(10) << "*����" << setw(10) << "**����" << endl;
	cout << "------------------------------" << endl;
	cout << "a" << setw(16) << &a << endl;
	cout << "pi" << setw(15) << &pi << setw(10) << *pi << endl;
	cout << "ppi" << setw(14) << &ppi << setw(10) << *ppi << setw(10) << **ppi << endl;

	return 0;
}