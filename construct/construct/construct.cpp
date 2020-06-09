#include <iostream>
using namespace std;

class Dataprocess {
public:
	Dataprocess() {
		digit1 = 10;
	}
	int getData_info() const;
	void setData_info() const;
private:
	int digit1;
};
int Dataprocess::getData_info() const {
	setData_info();
	return digit1;
}
void Dataprocess::setData_info() const {
	cout << "digit1의 출력결과" << endl;
}
int main() {
	Dataprocess dsample;
	cout << "계산결과" << dsample.getData_info() << endl;
}