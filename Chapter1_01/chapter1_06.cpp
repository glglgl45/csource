#include <iostream>
using namespace std;

void main() {
	/*int kor, eng, tot, mok;
	double avg;

	cout << "���� ���� : ";
	cin >> kor;
	cout << "���� ���� : ";
	cin >> eng;

	tot = kor + eng;
	avg = tot / 2.0;
	mok = avg / 10;

	cout << "����� ������ ";
	switch (mok) {
	case 10: cout << "A+";
		break;
	case 9: cout << "A";
		break;
	case 8: cout << "B";
		break;
	case 7: cout << "C";
		break;
	case 6: cout << "D";
		break;
	default:
		cout << "F";
		break;
	}
	cout << " �Դϴ�." << endl;*/

	/*int a, b, res;
	char op;
	cout << "�� ���� �Է��ϼ���. : ";
	cin >> a >> b;
	cout << "�����ڸ� �Է��ϼ���(+,-,*,/,%) : " << endl;
	cin >> op;
	cout << "������ " << a ;
	switch (op) {
	case '+':
		res = a + b;
		cout << " + ";
		break;
	case '-':
		res = a - b;
		cout << " - ";
		break;
	case '*':
		res = a * b;
		cout << " * ";
		break;
	case '/':
		res = a / b;
		cout << " - ";
		break;
	case '%':
		res = a % b;
		cout << " % ";
		break;
	default:
		break;
	}
	cout << b << "�� " << res << "�Դϴ�," << endl;*/

	/*int year;
	cout << "�⵵�� �Է��ϼ���. : ";
	cin >> year;
	cout << "�ش� �⵵�� ";
	if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0)
		cout << "����";
	else
		cout << "���";
	cout << " �Դϴ�." << endl;*/

	/*int han;
	han = 1;
	while (han < 5) {
		cout << "Good" << endl;
		han++;
	}*/

	int i, sum = 0;
	i = 0;
	while (i < 100) {
		i = i + 1;
		sum = sum + i;
	}
	cout << "while = : " << sum << endl;
	// =========================================================================
	int i, sum = 0;
	i = 1;
	do
	{
		sum += i;
		i++;
	} while (i < 100);
	cout << "do~while : " << sum << endl;

}