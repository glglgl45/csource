#include "1.h"

void main() {

	// 1~100���� ¦���� �հ� Ȧ���� �� ���ϱ�
	/*int i = 0, asum = 0, bsum = 0, sw = 0;
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
	} while (i < 100);
	cout << "asum = " << asum << ", bsum = " << bsum << endl;*/

	// 1~100���� Ȧ���� ���ϰ� ¦���� ����
	// sw�� �̿��� ����� ������ ������ ����
	//int sum = 0;
	//int n = 1;
	//int sw = 1;
	//do
	//{
	//	sum = sum + sw * n;
	//	n++; // n = n + 1;
	//	sw = -sw;
	//} while (n <= 100);
	//cout << "sum = " << sum << endl;

	// �Ҽ� �Ǻ���
	//void main()
	//{
	//	int n, flag = 0, i;
	//
	//	cout << "���ڸ� �Է��ϼ��� : ";
	//	cin >> n;
	//
	//	for (i = 2; i < n; i++) {
	//		if (n % i == 0) {
	//			flag = 1;
	//			break;
	//		}
	//	}
	//	if (flag == 0)
	//		cout << n << "��(��) �Ҽ��Դϴ�." << endl;
	//	else
	//		cout << n << "��(��) �Ҽ��� �ƴմϴ�." << endl;
	//}

	//// 1���� 100������ �� �߿��� ���� ū �Ҽ� 
	//int p = 2; // ���� ū �Ҽ�
	//for (int n = 3; n <= 100; n++) {
	//	for (int i = 2; i <= n; i++) {
	//		int r = n % i;
	//		if (r == 0 && n / i == 1) {
	//			p = n;
	//		}
	//		else if (r == 0) {
	//			break;
	//		}
	//	}
	//}
	//printf("100������ �Ҽ��� ���� ū ���� : %d\n", p);

	// ������ ����Ͽ� �Ҽ� ���ϱ�
	//while (1)
	//{
	//	int m = int(sqrt(double(n)));// �ڹ� math.sqrt(double(n))
	//	//n(49)�� �Ҽ����� �Ǵ��ϴ� ����(i(2)-(m(7)
	//	for (int i = 2; i <= m; i++) {
	//		int r = n % i;
	//		if (r == 0) break;
	//		if (i == m)p = n;
	//	}
	//	n++;
	//	if (n > 100)break;
	//}
	//printf("100������ �Ҽ��� ���� ū ���� : %d\n", p);

	// �ִ�����, �ּҰ����
	/*int u, v, gcm, lcm, m, n;
	cout << "�� ���� �Է��ϼ��� : ";
	cin >> u >> v;
	m = u;
	n = v;
	while (m != n) {
		if (m > n) m = m - n;
		else n = n - m;
	}
	gcm = m;
	lcm = (u*v) / gcm;
	cout << "GCM" << setw(5) << gcm << endl;
	cout << "LCM" << setw(5) << lcm << endl;*/

	//// �ִ�����, �ּҰ����
	//int u, v, GCM, LCM, s,l,na;
	//cout << "�� ���� �Է��ϼ��� : ";
	//cin >> u >> v;
	//if (u > v) {
	//	s = v; l = u;
	//}
	//else {
	//	s = u;
	//	l = v;
	//}
	//while (s != 0) {
	//	na = l % s;
	//	l = s;
	//	s = na;
	//	GCM = l;
	//	LCM = (u*v) / GCM;
	//	cout << "GCM" << setw(5) << GCM << endl;
	//	cout << "LCM" << setw(5) << LCM << endl;
	//}

	//char c;
	//cout << "�� ���ڸ� �Է��ϼ��� : ";
	//do
	//{
	//	cin >> c;
	//	if (!(c >= 'A'&& c <= 'Z')) {
	//		cout << "�빮�ڸ� �Է��ϼ��� : ";
	//	}
	//} while (!(c >= 'A'&& c <= 'Z'));
	//for (char i = c; i <= 'Z'; i++) {
	//	cout << setw(2) << i;
	//	if (i == 'Z') {
	//		for (char j = 'A'; j < c; j++) {
	//			cout << setw(2) << j;
	//		}
	//	}
	//}

	char mun, alp;
	int i;
	cout << "�� ���ڸ� �Է��ϼ��� : ";
	while (1) {
		cin >> mun;
		if (mun >= 'A'&&mun <= 'Z') {
			for (i = 1; i <= 26; i++) {
				alp = mun++;
				cout << setw(2) << alp;
				if (mun > 'Z')
					mun = mun - 26;
			}
			cout << endl;
			break;
		}
		else {
			cout << "�빮�ڸ� �Է��ϼ���.: ";
			continue;
		}
	}
}