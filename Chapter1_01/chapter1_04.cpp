#include <iostream>

using namespace std;

void main() {
	/*int a, b;
	cout << "ù��° ���ڸ� �Է��ϼ��� : ";
	cin >> a;
	cout << "�ι�° ���ڸ� �Է��ϼ��� : ";
	cin >> b;
	cout << "a = " << a << endl << "b = " << b << endl;
	cout << "Large Number = ";
	a > b ? cout << a << "��(��) �� ũ��" << endl : cout << b << "(��)�� �� ũ��" << endl;*/

	//int i, j, k, MAX, MIN;
	//cout << "���� 3���� �Է��ϼ��� : ";
	//cin >> i >> j >> k;
	///*MAX = i > j && i > k ? i : j > k ? j : k;
	//MIN = i < j && i < k ? i : j < k ? j : k;*/
	//MAX = (i > j) ? ((i > k) ? i : k) : ((j > k) ? j : k);
	//MIN = (i < j) ? ((i < k) ? i : k) : ((j < k) ? j : k);
	//cout << "MAX = " << MAX << endl; 
	//cout << "MIN = " << MIN << endl;

	/*int n, n1, n2, n3, n4, n5;
	cout << "�ټ��ڸ� ���� �Է� �ϼ��� : ";
	cin >> n;
	cout << n << "��" << endl;
	n1 = n / 10000;
	n2 = n % 10000 / 1000;
	n3 = n % 1000 / 100;
	n4 = n % 100 / 10;
	n5 = n % 10 / 1;
	cout << "����¥�� : " << n1 << "��" << endl;
	cout << "õ��¥�� : " << n2 << "��" << endl;
	cout << "���¥�� : " << n3 << "��" << endl;
	cout << "�ʿ�¥�� : " << n4 << "��" << endl;
	cout << "�Ͽ�¥�� : " << n5 << "�� �Դϴ�." << endl;*/
	int n, n1, n2, n3, n4, n5, n6, n7, n8, n9;
	cout << "�ټ��ڸ� ���� �Է� �ϼ��� : ";
	cin >> n;
	cout << n << "��" << endl;
	n1 = n / 10000;
	n = n % 10000;
	n2 = n / 5000;
	n = n % 5000;
	n3 = n / 1000;
	n = n % 1000;
	n4 = n / 500;
	n = n % 500;
	n5 = n / 100;
	n = n % 100;
	n6 = n / 50;
	n = n % 50;
	n7 = n / 10;
	n = n % 10;
	n8 = n / 5;
	n = n % 5;
	n9 = n / 1;
	n = n % 1;
	cout << "����¥�� : "	<< n1 << "��" << endl;
	cout << "��õ��¥�� : " << n2 << "��" << endl;
	cout << "õ��¥�� : "	<< n3 << "��" << endl;
	cout << "�����¥�� : " << n4 << "��" << endl;
	cout << "���¥�� : "	<< n5 << "��" << endl;
	cout << "���ʿ�¥�� : " << n6 << "��" << endl;
	cout << "�ʿ�¥�� : "	<< n7 << "��" << endl;
	cout << "����¥�� : "	<< n8 << "��" << endl;
	cout << "�Ͽ�¥�� : "	<< n9 << "��" << endl;
}