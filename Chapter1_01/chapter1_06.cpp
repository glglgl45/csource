#include <iostream>
using namespace std;

void main() {
	/*int kor, eng, tot, mok;
	double avg;

	cout << "국어 점수 : ";
	cin >> kor;
	cout << "영어 점수 : ";
	cin >> eng;

	tot = kor + eng;
	avg = tot / 2.0;
	mok = avg / 10;

	cout << "당신의 학점은 ";
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
	cout << " 입니다." << endl;*/

	/*int a, b, res;
	char op;
	cout << "두 수를 입력하세요. : ";
	cin >> a >> b;
	cout << "연산자를 입력하세요(+,-,*,/,%) : " << endl;
	cin >> op;
	cout << "연산결과 " << a ;
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
	cout << b << "는 " << res << "입니다," << endl;*/

	/*int year;
	cout << "년도를 입력하세요. : ";
	cin >> year;
	cout << "해당 년도는 ";
	if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0)
		cout << "윤년";
	else
		cout << "평년";
	cout << " 입니다." << endl;*/

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