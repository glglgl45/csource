#include <iostream>
using namespace std;

// 열거형(enumeration)
// 이름 있는 정수형 상수들을 열거하여 새롭게 만들어진 사용자 정의
// 열거형 목록값은 프로그래머가 특별히 지정하지 않으면 0부터 시작

enum colors{black,white,red,green,yellow};

int main() {
	colors mycolor;
	mycolor = black;
	const char *meaning[] = { "어둠","평화","정열","생명","순수" };
	cout << "당신이 선택한 색상의 의미 : " << meaning[mycolor] << 
}