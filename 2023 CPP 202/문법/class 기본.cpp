﻿//C++
#include<iostream>
#include<string> // std::string 클래스

using namespace std;

// 여러 data들을 하나의 의미있는 구조체로 묶어서 관리
// 구조체, 클래스는 일반적으로 단어의 첫 글자를 대문자로 합시다
struct Student {
	// 성능때문에 studentId를 문자열로 하지 않음
	// 일반적으로 문자열은 정수형 데이터보다 많은 메모리 공간을 요구하며
	// 정수는 비교연산을 한번에 할 수 있으나, 문자열은 글자수 만큼 반복하여 비교해야함
	int studentId;
	string name;
	string telephone;
	string department;
	string home;
};

int main(void) {
	
	// 자료형 : struct Student(C++에서는 Student만 써도 가능)
	struct Student kim;

	kim.home = "김포";
	kim.department = "소프트웨어과";
	kim.name = "김씨";
	kim.studentId = 2211;
	kim.telephone = "123-4567-8912";

	cout << "이름 : " << kim.name << "\n과 : " << kim.department << "\n학번 : " << kim.studentId <<
		"\n전화번호 : " << kim.telephone << "\n집주소 : " << kim.home << endl;

	return 0;
}
