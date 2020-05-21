#include "1.h"

void main() {

	// 1~100까지 짝수의 합과 홀수의 합 구하기
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

	// 1~100까지 홀수는 더하고 짝수는 빼기
	// sw를 이용해 양수와 음수를 번갈아 연산
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

	// 소수 판별법
	//void main()
	//{
	//	int n, flag = 0, i;
	//
	//	cout << "숫자를 입력하세요 : ";
	//	cin >> n;
	//
	//	for (i = 2; i < n; i++) {
	//		if (n % i == 0) {
	//			flag = 1;
	//			break;
	//		}
	//	}
	//	if (flag == 0)
	//		cout << n << "은(는) 소수입니다." << endl;
	//	else
	//		cout << n << "은(는) 소수가 아닙니다." << endl;
	//}

	//// 1에서 100까지의 수 중에서 가장 큰 소수 
	//int p = 2; // 가장 큰 소수
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
	//printf("100까지의 소수중 가장 큰 수는 : %d\n", p);

	// 제곱근 사용하여 소수 구하기
	//while (1)
	//{
	//	int m = int(sqrt(double(n)));// 자바 math.sqrt(double(n))
	//	//n(49)를 소수인지 판단하는 범위(i(2)-(m(7)
	//	for (int i = 2; i <= m; i++) {
	//		int r = n % i;
	//		if (r == 0) break;
	//		if (i == m)p = n;
	//	}
	//	n++;
	//	if (n > 100)break;
	//}
	//printf("100까지의 소수중 가장 큰 수는 : %d\n", p);

	// 최대공배수, 최소공약수
	/*int u, v, gcm, lcm, m, n;
	cout << "두 수를 입력하세요 : ";
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

	//// 최대공배수, 최소공약수
	//int u, v, GCM, LCM, s,l,na;
	//cout << "두 수를 입력하세요 : ";
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
	//cout << "한 문자를 입력하세요 : ";
	//do
	//{
	//	cin >> c;
	//	if (!(c >= 'A'&& c <= 'Z')) {
	//		cout << "대문자를 입력하세요 : ";
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
	cout << "한 문자를 입력하세요 : ";
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
			cout << "대문자를 입력하세요.: ";
			continue;
		}
	}
}