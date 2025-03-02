﻿//C++
#include<iostream>
#include<string> // std::string 클래스

using namespace std;


// 여러 data들을 하나의 의미있는 구조체로 묶어서 관리
// 구조체, 클래스는 일반적으로 단어의 첫 글자를 대문자로 합시다
// class는 디폴트 private (struct는 디폴트가 public)
class Student {

private:
	// 성능때문에 studentId를 문자열로 하지 않음
	// 일반적으로 문자열은 정수형 데이터보다 많은 메모리 공간을 요구하며
	// 정수는 비교연산을 한번에 할 수 있으나, 문자열은 글자수 만큼 반복하여 비교해야함
	int studentId;
	string name;
	string telephone;
	string department;
	string home;

public:

	//생성자 (constructor) : 객체를 생성할 때 호출되는 함수
	//생서자는 반환형을 쓰지 않는다
	//생성자를 정의하지 않으면 default로 매개변수가 없는 생성자가 정의된다
	
	Student() {}
	Student(int _studentId, string _name, string _telephone, string _department, string _home)
		//멤버변수 초기화. const/참조형 멤버변수 사용가능
		: studentId(_studentId), name(_name), telephone(_telephone), department(_department), home(_home)
	{
		
	}
	// class 멤버 함수를 가질 수 있다
	void print(void) {
		cout << "이름 : " << name << "\n과 : " << department << "\n학번 : " << studentId <<
			"\n전화번호 : " << telephone << "\n집주소 : " << home << endl;
	}
	void set_studentId(int _studentId) { studentId = studentId; }
	void set_name(string _name) { name = name; }
	void set_department(string _department) { department = department; }
	void set_telephone(string _telephone) { telephone = telephone; }
	void set_home(string _home) { home = home; }


};

int main(void) {

	//매개변수가 없는 생성자
	//Student kim = Student();
	//kim.print();

	//정적할당 : 컴파일 시간에 메모리 크기가 결정
	//Student kim2 = Student(2211, "kim", "010-0000-0000", "솦", "한국");
	//kim2.print();
	
	/*Student stu3[2];
	for (int i = 0; i < 2; i++) {
		stu3[i].print();
	}*/

	//동적할당 : 실행시간에(runtime)에 메모리 크기가 결정(메모리heap영역)
	//동적할당된 공간은 포인터로 접근한다
	Student* stu3 = new Student(22, "율곡", "010-0000-0000", "유교", "한성");
	stu3->print();		//stu3의 멤버는 ->으로 접근
	////동적할당 해제(안하면 메모리 누수현상이 발생)
	//delete stu3;

	Student* stu4 = new Student[2];
	stu4[0].set_name("박희현");
	stu4[0].set_home("김포");
	stu4[0].set_studentId(2211);
	stu4[0].set_department("솦과");
	stu4[0].set_telephone("010-0000-0000");

	stu4[1].set_name("김씨");
	stu4[1].set_home("어디");
	stu4[1].set_studentId(0000);
	stu4[1].set_department("웹솔과");
	stu4[1].set_telephone("010-1111-1111");

	for (int i = 0; i < 2; i++) {
		stu4[i].print();  //배열의 요소에 해당하는 객체는 멤버를 .으로 접근
	}
	delete[] stu4;
	return 0;
}
