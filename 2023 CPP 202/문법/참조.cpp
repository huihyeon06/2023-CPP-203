#include<iostream>

using namespace std;

int main(void) {
	int a = 30; //a: 30
	int& ra = a; //pa: a의 주소값

	//c++은 &안줘도 바꿀 수 있음
	//*pa = 100 ==> c언어의 경우
	ra = 100; //pa가 가리키고 있는 대상(a) : 100
	cout << "a의 값은" << a << endl;

	return 0;
}