#include <stdio.h> // C�� ǥ�������
#include <iostream> // C++ ǥ�������
#include <string> // ���ڿ�
#include <sstream> // Ŭ������ ��ü�� ����
#include <iomanip> 
#include <conio.h>

using namespace std;

//void main() {
//
//	//std::cout << "Hello c++" << std::endl; // using namespace �̻��� ���ξ� ÷��
//	//cout << "Hello c++" << endl; // using namespace ���� ���ξ� ����
//
//	char name[] = "choi kuy ri";
//	int kor, eng, mat, tot;
//	double avg;
//	kor = 90;
//	eng = 85;
//	mat = 70;
//	tot = kor + eng + mat;
//	avg = tot / 3.0;
//	
//	// C ���
//	printf("================ C��� ��� ================\n");
//	printf("    name    kor eng mat tot avg\n");
//	printf("%-12s%-4d%-4d%-4d%-4d%-6.1f",name,kor,eng,mat,tot,avg);
//
//	// C++ ���
//	cout << endl << "=============== C++��� ��� ===============" << endl;
//	cout << "    name    kor eng mat tot avg" << endl;
//	cout << setw(10) << name << setw(3) << kor << setw(4) << eng << setw(4) << mat << setw(5) << tot << setw(5) << setprecision(3) << avg << endl;
//
//}

//void main() {
//	int number;
//	cout << "���� �Է¹ޱ� : ";
//	cin >> number;
//	cout << "��� : " << number << endl;
//
//	char dan[15];
//	cout << "���� �Է¹ޱ� : ";
//	cin >> dan;
//	cout << "��� : " << dan << endl;
//	cout << "���߷��� 0�� ��������! ";
//	_getch(); // conio.h �������
//	cout << endl;
//}

//int main() {
//	int n;
//	stringstream ss;
//	ss.str("12 345 6789 0 -12");
//	for (int i = 0; i < 5; i++)	{
//		ss >> n;
//		cout << n << endl;
//	} 
//	return 0;
//}

//void main() {
//	cout << setw(10) << "753-9510" << "|" << endl;
//	cout << setiosflags(ios::left); // ��������
//	cout << setw(10) << "753-9510" << "|" << endl;
//	cout << 3.14 << endl;
//	cout << setprecision(6);
//	cout << setw(10) << setiosflags(ios::showpoint) << 3.14 << endl;
//	cout << resetiosflags(ios::left); // ������������
//	cout << setw(10) << "World" << "|" << endl;
//	cout << setiosflags(ios::left) << setw(10) << "World" << "|" << endl;
//}

//void main() {
//	char Name[15];
//	char address[20];
//	cout << "�̸��� �Է��ϼ��� : ";
//	cin.get(Name, 15);
//	cin.ignore(); // �ּ�ó���� ����(enter�� �����Ͽ� ���� �Է��� �����ϵ���)
//	cout << "address : ";
//	cin.get(address, 20);
//	cout << "\nName : " << Name << endl;
//	cout << "address : " << address << endl;
//}

//void main() {
//	char name[15];
//	char address[20];
//	cout << "What's your name ? ";
//	cin.getline(name, 15);
//	cout << "address ? ";
//	cin.getline(address, 20);
//	cout << "\nName : " << name << endl;
//	cout << "Address : " << address << endl;
//}

//void main() {
//	int a = 10, b = 5, c, d, e;
//	printf("a=%d b=%d\n", a++, b); // 10, 5
//	printf("a=%d b=%d\n", a++, --b); // 11, 4
//	printf("a=%d b=%d\n", ++a, b); // 13, 4
//	c = a;
//	printf("c= %d\n", c);
//	d = c % b;
//	printf("d= %d\n", d);
//}

//void main() {
//	int a, b, c, h, s;
//	a = b = h = 5;
//	c = ++a + b--;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//	s = ++h + ++h;
//	cout << "h = " << h << endl;
//	cout << "s = " << s << endl;
//}

void main() {
	/*int h, s;
	h = 3;
	s = h > 2;
	cout << s << endl;
	s = h < 2;
	cout << s << endl;
	s = 2 == 3;*/

	/*int h, s;
	h = 2 != 4 && 5 > 3;
	s = !1 || !0;
	cout << h << endl;
	cout << s << endl;*/

	/*int a, b, c;
	printf("�� ���� �Է��ϼ��� : ");
	scanf_s("%d %d", &a, &b);
	c = a > b;
	printf("C ��� : %d\n", c);
	printf("a>b ��� : %d\n", a > b);
	a++;
	printf("a�� b�� ���� : %d\n", a == b);
	printf("a�� b�� ���� �ʴ� : %d\n", a != b);*/

	int a = 3, b = 2, c;
	c = a == ++b;
	printf("��� : %d\n", (a==b)&&(--b==c));
	printf("��� : %d\n",(a != b) || (b == c));
	printf("��� : %d\n", !((a != b) || (b == c)));
}