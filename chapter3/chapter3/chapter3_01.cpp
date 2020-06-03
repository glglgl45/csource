/*
	주소를 저장하는 변수 : 포인터
	int a=4cffa3 --> *a
	값을 저장하는 변수
	int a = 10 --> a

	char* a,b ==> char *a; char *b;
	char *a,b ==> char *a; char b;

	int* A : 4바이트 10ffc4
	A++ : 8바이트 10ffc8

	int* B : 4바이트 55fc48
	B-- : 0바이트 55fc44
*/

#include <iostream>

using namespace std;

//int *p, *q, a = 10, b = 20, tmp;

//void main() {
//	p = &a;// p는 a의 주소를 받음
//	q = &b;
//
//	tmp = *p; //*p는 주소에 있는 값
//	*p = *q;
//	*q = tmp;
//	cout << a << ", " << b;
//}

//int main() {
	//#1.
	//int a;
	//a = 10;
	//cout << "변수 a의 값은 : " << a << endl;
	//cout << "변수 a의 주소는 : " << &a << endl;

	//#2.
	//int a;
	//int* pA;
	//a = 10;
	//pA = &a;
	//cout << "변수 a의 값은 : " << a << endl;
	//cout << "변수 a의 주소는 : " << &a << endl;

	//cout << "포인터 a의 값은 : " << pA << endl;
	//cout << "pA의 값는 : " << *pA << endl;

	//#3.
	//int a = 10;
	//int *pa;
	//// a변수방을 이용하여 출력
	//cout << "변수 a의 값은 : " << a << endl;
	//cout << "변수 a의 주소는 : " << &a << endl;

	//// pa를 이용하여 출력
	//pa = &a;

	//cout << "변수 pa의 주소는 : " << pa << endl;
	//cout << "변수 pa의 값은 : " << *pa << endl;

	//*pa = 50;
	//cout << "변수 pa의 주소는 : " << pa << endl;
	//cout << "변수 pa의 값은 : " << *pa << endl;
//}


void sw(int *p,int *q) {
	int tmp;
	tmp = *p;
	*p = *q;
	*q = tmp;
}

int main() {
	int a = 10;
	int b = 100;

	cout << "변수 a의 값 : " << a << endl;
	cout << "변수 b의 값 : " << b << endl;
	sw(&a, &b);
	cout << "교환 후 변수 a의 값 : " << a << endl;
	cout << "교환 후 변수 b의 값 : " << b << endl;
}