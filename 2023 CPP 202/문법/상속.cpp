#include<iostream>

using namespace std;

class Animal {
public:
	Animal() { cout << "동물 생성자" << endl; }
	~Animal() { cout << "동물 생성자" << endl; }
	void Bark(void) { cout << "동물 짖어" << endl; }
	void Eat(void) { cout << "동물 먹음" << endl; }
	void Hunt(void) { cout << "동물 사냥" << endl; }
private:
	int age_;
	int name_;
};

class Crane :public Animal{
public:
	//별도의 언급이 없어도 매개변수가 없는 부모생성자가 호출된다
	Crane() { cout << "두루미 생성자" << endl; }
	~Crane() { cout << "두루미 소멸자" << endl; }
private:
	int leg_length;
};

int main(void) {
	Crane* crane = new Crane();
	delete crane;
	return 0;
}