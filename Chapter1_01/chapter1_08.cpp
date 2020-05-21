#include "1.h"
//================ Àç±Í ÇÔ¼ö =========================
//int a;
//void add(int i) {
//	if (i >= 10)
//		return;
//	i++;
//	a++;
//	cout << a << endl;
//	add(i); // Àç±Í
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
//========================== for ¹® ==================
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
//=================== while ¹® ======================
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
//========= ÆÑÅä¸®¾ó while ¹® ===========
//void main() {
//	int n = 1, f = 5, s = 1;
//	while (n < f) {
//		s *= ++n;
//	}
//	cout << s << endl;
//}
//========= ÆÑÅä¸®¾ó while¹® 2 ===============
//void main() {
//	int n = 1, f = 1, s = 1;
//	while (n < 5) {
//		n = n + 1;
//		f = f * n;
//		s = f;
//	}
//	cout << s << endl;
//}

//=========== ÆÑÅä¸®¾ó Àç±ÍÇÔ¼ö 1 ================
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
//	cout << "¼ıÀÚ¸¦ ÀÔ·ÂÇÏ¼¼¿ä : ";
//	cin >> n;
//	result = fact(n);
//	cout << n << "!=";
//	for (i = n; i > 1; i--)
//		cout << i << "! * ";
//	cout << i << "=" << result << endl;
//}

