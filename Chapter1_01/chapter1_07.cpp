#include "1.h"

//int max(int a, int b) {
//	if (a > b)
//		return a;
//	else
//		return b;
//}
//
//void main() {
//	int m, n, res;
//	cout << "���� �� ���� �Է��ϼ���. : ";
//	cin >> m >> n;
//	res = max(m, n);
//	cout << "MAX : " << res << endl;
//	cout << "m = " 
//}

//// Call by Value
//void value(int *a, int *b) {
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "a = " << *a << endl;
//	cout << "b = " << *b << endl;
//	int tem;
//	tem = *a;
//	*a = *b;
//	*b = tem;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "a = " << *a << endl;
//	cout << "b = " << *b << endl;
//}
//
//void main() {
//	int n1, n2;
//	n1 = 10;
//	n2 = 20;
//	value(&n1, &n2);
//	cout << "n1 = " << n1 << endl;
//	cout << "n2 = " << n2 << endl;
//}

//// ���μ�, ���μ�, return���� ��� ���� ���
//char mun; // ��������
//
//void dae() {
//	mun = mun - 32;
//	cout << mun << endl;
//}
//void main() {
//	cout << "���ĺ��� �Է��ϼ���";
//	cin >> mun;
//	dae(mun);
//	cout << "mun = " << mun << endl;
//}


//// ���μ�, ���μ�, return���� ��� �ִ� ���
//char mun, alp; // ��������
//
//char dae(char alp) {
//	alp = alp - 32;
//	cout << "&mun3 = " << &mun << endl;
//	cout << "&alp3 = " << &alp << endl;
//	return alp;
//}
//void main() {
//	cout << "&mun1 = " << &mun << endl;
//	cout << "&alp1 = " << &alp << endl;
//	cout << "���ĺ��� �Է��ϼ���";
//	cin >> mun;
//	cout << "&mun1 = " << &mun << endl;
//	cout << "&alp1 = " << &alp << endl;
//	mun = dae(mun);
//	cout << "mun = " << mun << endl;
//	cout << "&mun2 = " << &mun << endl;
//	cout << "&alp2 = " << &alp << endl;
//}