#include <stdio.h> // C�� ǥ�������
#include <stdlib.h>
#include <iostream>
#include <iomanip> 
#include <conio.h>

using namespace std;

//int i, j, cnt, sw=1;
//int arr[5][5];
//char k;
//void arr1() {
//	for (i = 0; i < 5; i++) {
//		for (j = 0; j < 5; j++) {
//			arr[i][j] = ++cnt;
//		}
//	}
//}
//void arr2() {
//	for (i = 4; i >= 0; i--) {
//		for (j = 0; j < 5; j++) {
//			arr[i][j] = ++cnt;
//		}
//	}
//}
//void arr3() {
//	for (j = 0; j < 5; j++) {
//		for (i = 4; i >= 0; i--) {
//			arr[i][j] = ++cnt;
//		}
//	}
//}
//void arr4() {
//	for (j = 4; j >= 0; j--) {
//		for (i = 0; i < 5; i++) {
//			arr[i][j] = ++cnt;
//		}
//	}
//}
//
//void print() {
//	for (i = 0; i < 5; i++) {
//		for (j = 0; j < 5; j++) {
//			cout << setw(3) << arr[i][j];
//		}
//		cout << endl;
//	}
//}
//
//void main() {
//	while (sw) {
//		cout << "The Four Type of Matrix <1> <2> <3> <4>" << endl;
//		cout << "���α׷��� ���� �Ͻ÷��� 0�� ��������" << endl;
//		cnt = 0;
//		k = _getch();
//		switch (k) {
//		case '1':
//			arr1();
//			break;
//		case '2':
//			arr2();
//			break;
//		case '3':
//			arr3();
//			break;
//		case '4':
//			arr4();
//			break;
//		case '0':
//			sw = 0;
//			break;
//		}
//		if (sw != 0) {
//			print();
//		}
//	}
//}

//int i, j, cnt, k;
//int arr[100][100];
//void arr1() {
//	for (i = 0; i < k;i++) {
//		if (i % 2 == 0) {
//			for (j = 0; j < k; j++) {
//				arr[i][j] = ++cnt;
//			}
//		}
//		else {
//			for (j = k-1; j >= 0; j--) {
//				arr[i][j] = ++cnt;
//			}
//		}
//	}
//}
//
//void print() {
//	for (i = 0; i < k; i++) {
//		for (j = 0; j < k; j++) {
//			cout << setw(3) << arr[i][j];
//		}
//		cout << endl;
//	}
//}
//
//void main() {
//	while (1) {
//		cout << "���ڸ� �Է��ϼ��� : ";
//		cin >> k;
//		if (k == 0) break;
//		cnt = 0;
//		arr1();
//		print();
//	}
//}

//// ����
//// 1.��������
//int i, j, temp;
//int tab[5] = { 9,5,10,3,2 };
//
//void print() {
//	cout << "���ڸ��Է��ϼ��� : ";
//	for (i = 0; i < 5; i++)
//		cout << setw(5) << tab[i];
//	cout << endl;
//}
//void main() {
//	for (i = 0; i < 5 - 1; i++) {
//		for (j = i + 1; j < 5; j++) {
//			if (tab[i] >= tab[j]) {
//				temp = tab[i];
//				tab[i] = tab[j];
//				tab[j] = temp;
//			}
//		}
//	}
//	print();
//}
//
//// 2. ���� ����
//
//int i, j, temp;
//int tab[5] = { 9,5,10,3,2 };
//
//void print() {
//	cout << "���ڸ��Է��ϼ��� : ";
//	for (i = 0; i < 5; i++)
//		cout << setw(5) << tab[i];
//	cout << endl;
//}
//void main() {
//	for (i = 0; i < 5 - 1; i++) {
//		for (j = i+1; j < 5; j++) {
//			if (tab[i] >= tab[j]) {
//				temp = tab[i];
//				tab[i] = tab[j];
//				tab[j] = temp;
//			}
//		}
//	}
//	print();
//}

// //3. ��������
//int i, j, temp;
//int tab[5] = { 5,4,3,2,1 };
//
//void print() {
//	for (i = 0; i < 5; i++)
//		cout << setw(5) << tab[i];
//	cout << endl;
//}
//void main() {
//	for (i = 1; i < 5;i++) { // 2��° ������ ���� ���� key �� ����
//		temp = tab[i];
//		j = i - 1; // key ���� �ٷ� �տ����� ��
//		while(j >= 0 && tab[j] > temp) {
//			tab[j + 1] = tab[j];
//			j--;
//			tab[j + 1] = temp;
//		}
//	}
//	print();
//}

//// 4.��������
//void main() {
//	int E[5] = { 95,75,85,100,50 };
//	int i;
//	int j, KEY;
//	for (i = 1; i < 5; i++) {
//		// Ű�� ��ġ�� �ι�°���� �����ؾ� ù��°���� �񱳰� ���۵�
//		KEY = E[i];
//		for (j = i - 1; j >= 0; j--) {
//			if (E[j] <= KEY)
//				break;
//			E[j + 1] = E[j];
//		}
//		E[j + 1] = KEY;
//	}
//	for (i = 0; i < 5; i++)
//		cout << setw(5) << E[i];
//	cout << endl;
//}

//// BS�� function
//int BS(int E[], int L, int H, int K) {
//	int M;
//	for (;;) { // true ���ѷ����� ���� while(1)
//		if (L > H) {
//			return -99;
//		}
//		M = (L + H) / 2;
//		if (E[M] > K) {
//			H = M - 1;
//			continue;
//		}
//		else if (E[M] < K) {
//			L = M + 1;
//			continue;
//		}
//		else
//			return M + 1; // 0���� �����ؼ� 1 ������
//	}
//}
//void printarr(int E[],int l){
//	for (int i = 0; i < l; i++) {
//		cout << E[i]  << ", ";
//	}
//	cout << endl;
//}
//void main() {
//	int L, H, K,l;
//	int E[] = { 11,15,20,22,35,38,39,42,43,45,100 };
//	l = 11;
//	printarr(E, l);
//	cout << "ã�°� : ";
//	cin >> K;
//	cout << K << "�� ";
//	cout << BS(E, 0, 10, K); // ���� 0 ���� 10 Ű�� 20
//	cout << "��° �ֽ��ϴ�.";
//}
