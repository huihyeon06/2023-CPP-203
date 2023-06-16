#include<iostream>
#include<string>

using namespace std;

class Person {
public:
	Person(int hakbun, string name) : hakbun_(hakbun), name_(name)
	{
	}
	void PrintShow() {
		cout << "ÀÌ¸§ : " << name_ << endl;
		cout << "ÇÐ¹ø : " << hakbun_ << endl;
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
		cout << "´ëÇÐ±³ : " << university_ << endl;
	}
private:
	string university_;
};

int main(void) {

	Person* p = new Person(2211, "¸Á°í¸Á°í");
	p->PrintShow();
	Student* stu = new Student(2211, "¸Á°í°í¸Á", "°í¸Á´ë");
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
		cout << "»ç¶÷ »ý¼ºÀÚ" << endl;
		cout << "ÀÌ¸§ : " << name << " ÇÐ¹ø : " << hakbun << endl;
	}
	~Person()
	{
		cout << "»ç¶÷ ¼Ò¸êÀÚ" << endl;
	}
private:
	int hakbun_;
	string name_;
};

class Student :public Person {
public:
	Student(int hakbun, string name, string university) :Person(hakbun, name)
	{
		cout << "ÇÐ»ý »ý¼ºÀÚ" << endl;
		university_ = university;
		cout << "´ëÇÐ±³ : "<<university << endl;
	}
	~Student() {
		cout << "ÇÐ»ý ¼Ò¸êÀÚ" << endl;
	}
private:
	string university_;
};

int main(void) {
	Student* stu = new Student(2211, "¸Á°í¸Á°í", "¸Á°í´ë");

	delete stu;
	return 0;
}*/