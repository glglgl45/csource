#include <stdio.h> // C의 표준입출력
#include <stdlib.h>
#include <iostream>
#include <iomanip> 
using namespace std;
// 배열 기본 실습1
//int main()
//{
//	char c[6] = { "C&C++" };
//	char ch[][4] = { {'A','B','C'},{'D','E','F'},{'G','H','I'} };
//	//char ch[][4] = { {"ABC"},{"DEF"},{"GHI"} };
//	cout << "1차원 배열 : " << c << endl;
//	cout << "***** 2차원 배열(3행3열) *****" << endl;
//	cout << ch[0] << endl;
//	cout << ch[1] << endl;
//	cout << ch[2] << endl;
//}

// 배열 기본 실습2

//int a[5] = { 1,2,3,4,5 };
//void main() {
//	for (int i = 0; i < 5; i++) {
//		//a[i] = i + 1;
//		cout << a[i] << ", ";
//	}
//}

//int b[3][3], i, j, cnt;
//void main() {
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 3; j++) {
//			b[i][j] = ++cnt;
//			cout << b[i][j] << " ";
//		}
//		cout << endl;
//	}
//}

//int i, tab[10];
//void print() {
//	for (i = 0; i < 10; i++) {
//		cout << tab[i] << " ";
//	}
//	cout << endl;
//}
//void main() {
//	for (i = 0; i < 10; i++)
//		tab[i] = i + 1;
//	print();
//}

//int i, j;
//int tab[4][4] = { {1,2,3},{4,5,6},{7,8,9} };
//void sum() {
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 3; j++) {
//			tab[i][3] += tab[i][j];
//			tab[3][j] += tab[i][j];
//			tab[3][3] += tab[i][j];
//		}
//	}
//}
//void print() {
//	for (i = 0; i < 4; i++) {
//		for (j = 0; j < 4; j++) {
//			cout << setw(3) << tab[i][j];
//		}
//		cout << endl;
//	}
//}
//void main() {
//	sum();
//	print();
//}
