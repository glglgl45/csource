#include <iostream>

using namespace std;

void main() {
	//// ¦��
	//int n;
	//cout << "���� �Է��ϼ��� : ";
	//cin >> n;
	////n % 2 == 0 ? cout << n << "�� ¦���Դϴ�." << endl : cout << n << "�� Ȧ���Դϴ�.";
	//if (n % 2 == 0) 
	//	cout << n << "�� ¦���Դϴ�." << endl;
	//else
	//	cout << n << "�� Ȧ���Դϴ�" << endl;
	//
	//// 10�� ���
	//int dat;
	//cout << "���ڸ� �Է��ϼ��� : ";
	//cin >> dat;
	//if (dat % 10 == 0)
	//	cout << dat << " : 10�� ����Դϴ�." << endl;
	//else
	//	cout << dat << " : 10�� ����� �ƴմϴ�." << endl;

	//int a;
	//cout << "���ڸ� �Է��ϼ��� : ";
	//cin >> a;
	//if (a > 10)
	//	cout << a << " : 10���� ū �� �Դϴ�." << endl;
	//else
	//	cout << a << " : 10���� ���� �� �Դϴ�." << endl;

	/*int num1, num2;
	cout << "ù��° ���� �Է� : ";
	cin >> num1;
	cout << "�ι�° ���� �Է� : ";
	cin >> num2;
	cout << "�� ���� �� �м� ����� ";
	if(num1 >= num2){
		if (num1 == num2)
			cout << num1 << "�� " << num2 << "��(��) ���� �� �Դϴ�." << endl;
		else
			cout << num1 << "(��)�� " << num2 << "���� ū �� �Դϴ�." << endl;
	}
	else
		cout << num1 << "(��)�� " << num2 << "���� ���� �� �Դϴ�," << endl;*/

	// ��� �Ǻ�
	/*int dat,mul,res;
	cout << "���ڸ� �Է��ϼ��� : ";
	cin >> dat;
	cout << "����� �����ϼ��� : ";
	cin >> mul;
	if (dat % mul == 0)
		cout << dat << " : " << mul << "�� ����Դϴ�." << endl;
	else
		res = mul - dat % mul;
	cout << dat << "��(��) " << mul << "�� ����� �Ǳ� ���ؼ� " << res << " �ʿ�!" << endl;
	cout << dat << "��(��) " << mul << "�� ����� �Ǳ� ���ؼ� " << dat%mul << "��ŭ�� ������ �մϴ�." << endl;*/

	/*int num, num2, num3;
	cout << "���ڸ� �Է��ϼ��� : ";
	cin >> num;
	num2 = 5 - (num % 5);
	num3 = num % 5;

	if (num % 5 == 0) {
		cout << "5�� ��� �Դϴ�,";
	}
	else {
		cout << num << "��(��) 5�� ����� �Ƿ���" << num2 << " ��ŭ �ʿ� " << endl;
		cout << " �Ǵ� " << num3 << " ��ŭ ������ �մϴ�!!" << endl;
	}*/

	//char ch;
	//cout << "���ڸ� �Է��ϼ��� : ";
	//cin >> ch;
	//if (ch >= 'A' && ch <= 'Z') // 65-94
	//	cout << "Upper case" << endl;
	//else if (ch >= 'a' && ch <= 'z')
	//	cout << "Lower case" << endl;
	//else
	//	cout << "No Good" << endl;

	int kor, eng, tot;
	double avg;
	cout << "���� ���� : ";
	cin >> kor;
	cout << "���� ���� : ";
	cin >> eng;
	tot = kor + eng;
	avg = tot / 2.0;

	cout << "����� ������ ";
	if (avg >= 90) 
		cout << "A";
	else if (avg >= 80) 
		cout << "B";
	else if (avg >= 70) 
		cout << "C";
	else if (avg >= 60) 
		cout << "D";
	else 
		cout << "F";
	
	cout << " �Դϴ�." << endl;
}