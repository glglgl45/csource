#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>

using namespace std;

//char tab[100], a, temp;
//int i, L, n;
//
//// r�� ������(getch) ���������� �з����� ��ȯ
//void right() {
//	temp = tab[L-1];
//	for (i = L-1; i >=0 ; i--) {
//		tab[i+1] = tab[i];
//	}
//	tab[0] = temp;
//	for (i = 0; i < L; i++)
//		cout << setw(4) << tab[i];
//	cout << endl;
//}
//
//// l�� ������ �ݴ�� ��ȯ
//void left() {
//	temp = tab[0];
//	for (i = 0; i <L; i++) {
//		tab[i] = tab[i+1];
//	}
//	tab[L-1] = temp;
//	for (i = 0; i < L; i++)
//		cout << setw(4) << tab[i];
//	cout << endl;
//}
//
//void main() {
//	cout << "���ڿ��� �Է��ϼ��� : ";
//	cin.getline(tab, 100);
//	L = strlen(tab);
//	for (i = 0; i < L; i++)
//		cout << setw(4) << tab[i];
//	cout << endl;
//	while (1) {
//		char lr = _getch();
//		if (lr == 'R' || lr == 'r')
//			right();
//		else if (lr == 'L' || lr == 'l')
//			left();
//		else
//			break;
//	}
//}

//void main() {
//	int n;
//	int arr[100][100] = {};
//	int cnt=0;
//	int i, j;
//	cout << "���� �Է��ϼ��� : ";
//	cin >> n;
//	
//	for (i = 0; i < n; i++) {
//		arr[0][i] = ++cnt;
//	}
//	for (j = 1; j < n; j++) {
//		arr[j][i-1] = ++cnt;
//	}
//	for (i = n - 1; i >= 0; i--) {
//		arr[j-1][i-1] = ++cnt;
//	}
//	for (j = n - 1; j >= 1; j--) {
//		arr[j-1][i+1] = ++cnt;
//	}
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n; j++) {
//			cout << setw(3) << arr[i][j];
//		}
//		cout << endl;
//	}
//}

//// ������ ������ �迭
//int main() {
//	int A[5][5] = {}, N = 0, S = 1, i = 0, J = -1, K = 5;
//	while (1) {
//		//�� �߽� 0��
//		for (int P = 0; P < K; P++) {
//			N += 1;
//			J = J + S; // S�� ����ġ ����
//			A[i][J] = N;
//		}
//		K = K - 1; //K�� 5���� 4�� ����...
//		if (K > 0) {
//			// ���߽� 4��
//			for (int P = 0; P < K; P++) {
//				N += 1;
//				i = i + S;
//				A[i][J] = N;//J�� 4��
//			}
//			S *= -1;
//		}
//		else
//			break;
//	}
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			cout << setw(3) << A[i][j] << " ";
//		}
//		cout << endl;
//	}
//}