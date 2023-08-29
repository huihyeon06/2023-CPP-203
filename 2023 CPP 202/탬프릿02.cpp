#include<iostream>
#include<string>

using namespace std;

class Person {	
public:
	//������
	Person(string name, int stamina, int attack, int defense)
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
		cout << "�̸� : "<< name_<< " ü�� : "<< stamina_<<" ���� : "<< attack_ <<" ��� : "<< defense_ << endl;
	}
private:
	string name_;
	int stamina_;
	int attack_;
	int defense_;
};

int main() {
	Person* p1 =new Person("�ּ���", 10, 7, 9);
	p1->status();
	p1->reset();
	delete p1;
}