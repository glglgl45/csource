#include <stdio.h>
#include <iostream>
#include <iomanip> // setw()
using namespace std;

//int main() {
//	int ary1[4] = { 1,2,3,4 }; // 1차원 배열의 선언과 초기값 설정
//	int ary2[4] = { 11,12,13,14 };
//	int ary3[4] = { 21,22,23,24 };
//
//	int *pary[3] = { ary1,ary2,ary3 };
//	int i, j;
//
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 4; j++) {
//			cout << setw(4) << pary[i][j];
//		}
//		cout << endl;
//	}
//
//	return 0;
//}

//void swap_ptr(char**ppa, char **ppb); // 프로토타입이므로 함수 선언
//
//
//int main(void) {
//
//	char a[] = "success";
//	char b[] = "failuer";
//	char *pa = a;
//	char *pb = b;
//
//	cout << "pa -> " << pa << ", pb -> " << pb << endl;
//	cout << "&pa -> " << &pa << ", &pb -> " << &pb << endl;
//	swap_ptr(&pa, &pb);
//	cout << "pa -> " << pa << ", pb -> " << pb << endl;
//	cout << "&pa -> " << &pa << ", &pb -> " << &pb << endl;
//
//	return 0;
//}
//// char *ppr
//// char a[];
//// ppr = a --> *ppr
//void swap_ptr(char **ppa, char **ppb) {
//	char *pt;
//	pt = *ppa;
//	*ppa = *ppb;
//	*ppb = pt;
//}