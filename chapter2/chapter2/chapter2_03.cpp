#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>

//using namespace std;
//
//char tab[100], a;
//int i, L, n;
//
//int main() {
//	// ���ڿ��� ����
//	//char tab[] = "abcde";
//	//int L;
//	//L = strlen(tab);
//	//cout << "���ڿ� : " << tab << " �� ���� : " << L << endl;
//
//	// ���ڿ��� ����
//	//char tab[] = "abcde";
//	//cout << "strcpy ����� ���� �� ���ڿ� tab�� ������ : " << tab << " �Դϴ�." << endl;
//	//strcpy_s(tab, "XYZ");
//	//cout << "strcpy ����� ���� �� ���ڿ� tab�� ������ : " << tab << " �Դϴ�." << endl;
//
//	// ���ڿ� �̾��ֱ�
//	//char tab[7] = "abc";
//	//cout << "strcat ����� ����Ǳ� �� ���ڿ��� ������ : " << tab << endl;
//
//	//strcat_s(tab, "XYZ");
//	//cout << "strcat ����� ����� ���ڿ��� ������ : " << tab << endl;
//
//	// ���ڿ� ��
//
//	//char tab[] = "abc", tab1[] = "xyz", tab2[] = "abc";
//	//int n;
//	//n = strcmp(tab, tab1);
//	//cout << "���ڿ� tab�� ������ : " << tab << " �Դϴ�, " << endl;
//	//cout << "���ڿ� tab1�� ������ : " << tab1 << " �Դϴ�, " << endl;
//	//cout << "�� ��� ���� : " << n << endl << " tab�� tab1�� ���� �ʴ�, " << endl;
//	//n = strcmp(tab, tab2);
//	//cout << "���ڿ� tab�� ������ : " << tab << " �Դϴ�, " << endl;
//	//cout << "���ڿ� tab2�� ������ : " << tab2 << " �Դϴ�, " << endl;
//	//cout << "�� ��� ���� : " << n << endl << " tab�� tab2�� ���� " << endl;
//
//	// ���ڿ� �Ųٷ� ����ϱ�
//	//cout << "���ڿ��� �Է��ϼ��� : ";
//	//cin.getline(tab, 100);
//	//L = strlen(tab);
//	//for (i = 0; i < L; i++)
//	//	cout<< setw(4) << tab[i];
//	//cout << endl;
//
//	//for(i = L-1;i>=0;i--)
//	//	cout << setw(4) << tab[i];
//	//cout << endl;
//
//	// ���ڿ� �����ϱ�
//	//cout << "���ڿ��� �Է��ϼ��� : ";
//	//cin.getline(tab, 100);
//	//cout << "���� ��ġ�� ���ڸ� �Է��ϼ��� : ";
//	//cin >> n >> a;
//	//L = strlen(tab)+1;
//	//for (i = L + 1; i >= n; i--)
//	//	tab[i] = tab[i - 1];
//	//tab[n-1] = a;
//	//for (i = 0; i < L; i++)
//	//	cout << setw(4) << tab[i];
//	//cout << endl;
//
//	// ���ڿ� ġȯ�ϱ�
//	//cout << "���ڿ��� �Է��ϼ��� : ";
//	//cin.getline(tab, 100);
//	//cout << "���� ��ġ�� ���ڸ� �Է��ϼ��� : ";
//	//cin >> n >> a;
//	//L = strlen(tab)+1;
//	//tab[n - 1] = a;
//	//for (i = 0; i < L; i++)
//	//cout << setw(4) << tab[i];
//	//cout << endl;
//
//	// ���ڿ��� ����
//	//cout << "���ڿ��� �Է��ϼ��� : ";
//	//cin.getline(tab, 100);
//	//cout << "������ ���ڿ��� ��ġ�� �Է��ϼ��� : ";
//	//cin >> n;
//	//L = strlen(tab);
//	//for (i = n-1; i < L; i++)
//	//	tab[i] = tab[i + 1];
//	//for(i=0;i<L;i++)
//	//	cout << setw(4) << tab[i];
//	//cout << endl;
//}