// Chapter1_01.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream> //C++ 기본 입출력
#include <stdio.h> /* C 기본 입출력 */
#include <math.h>

//void main() {
//	char M, N;
//	M = 'B';
//	N = 'e';
//	printf("%c\n",M);
//	printf("%c\n", N);
//}

void main() {
	/*char H, S;
	H = 65;
	S = 97;
	printf("%d\n", H);
	printf("%c\n", S);
	H = 'z';
	S = 'Z';
	printf("%c\n", H);
	printf("%c\n", S);*/

	/*float S, W;
	S = 32.4;
	W = 213746565.5;
	printf("%f\n%f\n", S, W);*/

	//float circum, area;
	//const float PI = 3.141592; // 상수값
	//float radius = 25;
	//area = PI * radius*radius;
	//circum = 2 * PI * radius;
	//printf("Area of circle is %f\n : ", area);
	//printf("Circum of circle is %f\n : ", circum);

	/*int i, j;
	float k;
	char ch;
	i = 100;
	j = 200;
	k = 12.345;
	ch = 'A';
	printf("%d,%d\n", i, i + j);
	printf("%f\n",k);
	printf("%c,%d\n", ch,ch);*/

	/*char k, b, s;
	k = 'k';
	b = 66;
	s = 's';
	printf("%c,%c,%c\n%d,%d,%d", k, b, s, k, b, s);*/

	/*const float PI = 3.141592;
	printf("%15f\n", PI);
	printf("%-15f\n", PI);
	printf("%15.3f\n", PI);*/

	/*char ch = 'A';
	printf("character = %c, ASCII = %d\n", ch, ch);
	printf("%12d\n", 123456789);
	printf("%-3d%-3d%-3d\n", 12, 34, 56);
	printf("%3d%3d\n", 12, 34);
	printf("%03d%3d\n", 3, 160);
	printf("%05d0\n",316);
	printf("%-4s%4s\n", "the", "end");
	printf("the  " "end \n");*/

	//scanf_s : double : lf, float : f, int : d, 문자열 : s
	//int java, c, tot;
	//printf("JAVA : ");
	//scanf_s("%d",&java); // 표준 입력 %: 메모리에 접근
	//printf("C : ");
	//scanf_s("%d", &c);
	//tot = java + c;
	//printf("총점은 %d 입니다\n", tot);

	//int width, height, wide;
	//char name[10];
	//printf("사각형의 가로, 세로 길이를 입력하세요 : ");
	//scanf_s("%d %d", &width, &height);
	//wide = width * height;
	//printf("사각형 넓이 = %d\n", wide);
	//printf("==========================================\n");
	//printf("이름을 입력하세요 : ");
	//scanf_s("%s", name, sizeof(name));
	//printf("성명 : %s", name);

	int width, height;
	float wide, l, a;
	printf("밑변을 입력하세요 : ");
	scanf_s("%d", &width);
	printf("높이를 입력하세요 : ");
	scanf_s("%d", &height);
	wide = (float)(width * height)/2;
	//wide = (width*height) / 2.0;
	printf("삼각형의 넓이는 %0.1f입니다.\n",wide);
	a = (float)(sqrt(width*width + height * height));
	l = width + height + a;
	printf("삼각형의 둘레는 %lf입니다.", l);

}