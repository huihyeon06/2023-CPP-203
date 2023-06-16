#include<iostream>
#include<string>

using namespace std;

class Animal {
public:
	Animal(int age, string name) : age_(age), name_(name)
	{
		cout << "동물 생성자" << endl;
	}
	~Animal() { cout << "동물 소멸자" << endl; }
	//동적 바인딩
	virtual void Bark(void) { cout << "동물 짖는다" << endl; }
	virtual void Eat(void) { cout << "동물 먹는다" << endl; }
	virtual void Hunt(void) { cout << "동물 사냥한다" << endl; }
private:
	int age_;
	string name_;
};

class Crane :public Animal {
public:
	//별도의 언급이 없어도 매개변수가 없는 부모생성자가 호출된다
	Crane(int age, string name, int leg_length) :Animal(age, name)
	{
		cout << "두루미 생성자" << endl;
		leg_length_ = leg_length;
	}
	~Crane() { cout << "두루미 소멸자" << endl; }

	//오타같은 실수를 방지하기 위해 override 키워드를 사용(Java의 @override)
	void Bark() override{
		cout << "꽥" << endl;
	}
private:
	int leg_length_;
};

int main(void) {
	Animal* animal = new Animal(18, "동물이");
	animal->Bark(); //동물 짖는다
	delete animal;

	return 0;
}