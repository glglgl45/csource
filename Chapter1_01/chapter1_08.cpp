#include "1.h"
//================ ��� �Լ� =========================
//int a;
//void add(int i) {
//	if (i >= 10)
//		return;
//	i++;
//	a++;
//	cout << a << endl;
//	add(i); // ���
//}
//
//int main() {
//	add(0);
//	cout << "res = " << a << endl;
//}

//void countNum(int num) {
//	if (num == 1) {
//		cout << "Num : " << num << endl;
//		return;
//	}
//	else {
//		cout << "Num : " << num << endl;
//		countNum(--num);
//		//countNum(num-1);
//	}
//}
//
//int main() {
//	countNum(5);
//	return 0;
//}
//========================== for �� ==================
//void countNum(int num) {
//	for (num; num >= 1; num--) {
//		cout << "Num : " << num << endl;
//	}
//}
//
//int main() {
//	countNum(5);
//	return 0;
//}
//=================== while �� ======================
//void countNum(int num) {
//	while (num >= 1) {
//		cout << "Num : " << num << endl;
//		num--;
//	}
//}
//
//int main() {
//	countNum(5);
//	return 0;
//}
//========= ���丮�� while �� ===========
//void main() {
//	int n = 1, f = 5, s = 1;
//	while (n < f) {
//		s *= ++n;
//	}
//	cout << s << endl;
//}
//========= ���丮�� while�� 2 ===============
//void main() {
//	int n = 1, f = 1, s = 1;
//	while (n < 5) {
//		n = n + 1;
//		f = f * n;
//		s = f;
//	}
//	cout << s << endl;
//}

//=========== ���丮�� ����Լ� 1 ================
//int n, i;
//long long result, dap;
//long long fact(int x) {
//	if (x == 1) return (1);
//	else
//		dap = x * fact(x-1);
//	return(dap);
//	
//}
//
//void main() {
//	cout << "���ڸ� �Է��ϼ��� : ";
//	cin >> n;
//	result = fact(n);
//	cout << n << "!=";
//	for (i = n; i > 1; i--)
//		cout << i << "! * ";
//	cout << i << "=" << result << endl;
//}

