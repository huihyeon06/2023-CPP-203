// cout객체를 사용하기 위해 iostreamd을 씀
#include<iostream>

//이름공간(변수이름의 중복 방지)
using namespace std;

int main(void) {

	int year = 2023;

	// <<  : 출력연산자
	//endl : 개행
	cout << "Hello World " << year << endl;
	return 0;
}