//C++
#include<iostream>
#include<string> // std::string 클래스

using namespace std;

// 여러 data들을 하나의 의미있는 구조체로 묶어서 관리
// 구조체, 클래스는 일반적으로 단어의 첫 글자를 대문자로 합시다
// class는 디폴트 private (struct는 디폴트가 public)
class Student {
	// 성능때문에 studentId를 문자열로 하지 않음
	// 일반적으로 문자열은 정수형 데이터보다 많은 메모리 공간을 요구하며
	// 정수는 비교연산을 한번에 할 수 있으나, 문자열은 글자수 만큼 반복하여 비교해야함
public:
	int studentId;
	string name;
	string telephone;
	string department;
	string home;

	// class 멤버 함수를 가질 수 있다
	void print(void) {
		cout << "이름 : " << name << "\n과 : " <<department << "\n학번 : " << studentId <<
			"\n전화번호 : " << telephone << "\n집주소 : " << home << endl;
	}
};

int main(void) {
	
	// 자료형 : Student(Class 생략 가능)
	Student kim;

	kim.home = "김포";
	kim.department = "소프트웨어과";
	kim.name = "김씨";
	kim.studentId = 2211;
	kim.telephone = "123-4567-8912";

	kim.print();

	

	return 0;
}
