#include<iostream>
#include<string>

using namespace std;

class Person {
public:
	Person(int hakbun, string name) : hakbun_(hakbun), name_(name)
	{
	}
	void PrintShow() {
		cout << "�̸� : " << name_ << endl;
		cout << "�й� : " << hakbun_ << endl;
	}
private:
	int hakbun_;
	string name_;
};

class Student :public Person {
public:
	Student(int hakbun, string name, string university) :Person(hakbun, name), university_(university)
	{
	}
	void PrintShow() {
		Person::PrintShow();
		cout << "���б� : " << university_ << endl;
	}
private:
	string university_;
};

int main(void) {

	Person* p = new Person(2211, "�������");
	p->PrintShow();
	Student* stu = new Student(2211, "������", "�����");
	stu->PrintShow();

	delete stu;
	return 0;
}


/*
#include<iostream>
#include<string>

using namespace std;

class Person {
public:
	Person(int hakbun, string name) : hakbun_(hakbun), name_(name)
	{
		cout << "��� ������" << endl;
		cout << "�̸� : " << name << " �й� : " << hakbun << endl;
	}
	~Person()
	{
		cout << "��� �Ҹ���" << endl;
	}
private:
	int hakbun_;
	string name_;
};

class Student :public Person {
public:
	Student(int hakbun, string name, string university) :Person(hakbun, name)
	{
		cout << "�л� ������" << endl;
		university_ = university;
		cout << "���б� : "<<university << endl;
	}
	~Student() {
		cout << "�л� �Ҹ���" << endl;
	}
private:
	string university_;
};

int main(void) {
	Student* stu = new Student(2211, "�������", "�����");

	delete stu;
	return 0;
}*/