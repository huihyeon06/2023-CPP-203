#include<iostream>
#include<string>

using namespace std;

template<typename T1,typename T2>

class Person {
public:
	//������
	Person(T1 name, T2 stamina, T2 attack, T2 defense)
		: name_(name), stamina_(stamina), attack_(attack), defense_(defense)
	{
	}
	~Person() {
	}
	//�ʱ�ȭ
	void reset() {
		name_ = "";
		stamina_ = 0;
		attack_ = 0;
		defense_ = 0;
		cout << "�̸� : " << name_ << " ü�� : " << stamina_ << " ���� : " << attack_ << " ��� : " << defense_ << endl;
	}
	//�������
	void status() {
		cout << "�̸� : " << name_ << " ü�� : " << stamina_ << " ���� : " << attack_ << " ��� : " << defense_ << endl;
	}
private:
	T1 name_;
	T2 stamina_;
	T2 attack_;
	T2 defense_;
};

int main() {
	Person<string,int> *p1=new Person<string,int>("�ּ���",10,7,9);
	p1->status();
	p1->reset();
	delete p1;
}