#include <iostream>
#include <iomanip>
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

	/*int i, sum = 0;
	i = 0;
	while (i < 100) {
		i = i + 1;
		sum = sum + i;
	}
	cout << "while = : " << sum << endl;*/
	// =========================================================================
	/*int i, sum = 0;
	i = 1;
	do
	{
		sum += i;
		i++;
	} while (i <= 100);
	cout << "do~while : " << sum << endl;*/

	/*int i, sum = 0;
	for (i = 1; i <= 100; i++)
		sum += i;
	cout << "for : " << sum << endl;*/

	/*int a, b;
	cout << "다중 for문" << endl;
	for (a = 1; a <= 2; a++)
		for (b = 1; b <= 3; b++)
			cout << "a = " << a << setw(5) << "b = " << b << endl;
	cout << "끝!!!";*/

	/*for (int a = 2; a <= 9; a++)
		for (int b = 1; b <= 9; b++)
			cout << a << "*" << b << "=" << a * b << endl;*/

	//int num;
	//cout << "원하는 단을 입력하세요 : " , cin >> num;
	//for (int i = 1; i <= 9; i++)
	//	cout << num << "*" << i << "=" << num * i << endl;
	/*char mun;
	while (1) {
		cout << "문자를 입력하세요 : ";
		cin >> mun;
		if (mun >= 'A' && mun <= 'Z') {
			cout << "정상입력입니다." << endl;
			break;
		}
		else {
			cout << "잘못 입력하셨습니다. 대문자를 입력하세요" << endl;
			continue;
		}
	}*/

	//int k;
	//while (1) {
	//	cout << "숫자를 입력하세요. : ";
	//	cin >> k;

	//	if (k == EOF) { // -1
	//		cout << "종료됩니다," << endl;
	//		break;
	//	}
	//	else
	//		continue;
	//}

	/*for (int b = 1; b <= 9; b++) {
		for (int a = 2; a <= 9; a++) {
			cout << setw(4) << a << "*" << b << "=" << setw(2) << a * b;
		}
		cout << endl;
	}*/

	/*int n = 1, sum = 0, sw = 1;
	do
	{
		sum = sum + sw * n;
		n = n + 1;
		sw = -sw;
	} while (n<100);
	cout << sum << endl;*/

	int i = 0, asum = 0, bsum = 0, sw = 0;
	do
	{
		i += 1;
		if (sw == 0) {
			asum += i;
			sw = 1;
		}
		else {
			bsum += i;
			sw = 0;
		}
	} while (i<100);
	cout << "asum = " << asum << ", bsum = " << bsum << ", sum = " << asum + bsum << endl;
}