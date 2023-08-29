#include<iostream>
#include<string>

using namespace std;

class Person {	
public:
	//생성자
	Person(string name, int stamina, int attack, int defense)
		: name_(name), stamina_(stamina), attack_(attack), defense_(defense)
	{
	}
	~Person() {
	}
	//초기화
	void reset() {
		name_ = "";
		stamina_ = 0;
		attack_ = 0;
		defense_ = 0;
		cout << "이름 : " << name_ << " 체력 : " << stamina_ << " 공격 : " << attack_ << " 방어 : " << defense_ << endl;
	}
	//현재상태
	void status() {
		cout << "이름 : "<< name_<< " 체력 : "<< stamina_<<" 공격 : "<< attack_ <<" 방어 : "<< defense_ << endl;
	}
private:
	string name_;
	int stamina_;
	int attack_;
	int defense_;
};

int main() {
	Person* p1 =new Person("최수빈", 10, 7, 9);
	p1->status();
	p1->reset();
	delete p1;
}