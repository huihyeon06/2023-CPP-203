#include<iostream>

using namespace std;

class Animal {
public:
	Animal() { cout << "���� ������" << endl; }
	~Animal() { cout << "���� ������" << endl; }
	void Bark(void) { cout << "���� ¢��" << endl; }
	void Eat(void) { cout << "���� ����" << endl; }
	void Hunt(void) { cout << "���� ���" << endl; }
private:
	int age_;
	int name_;
};

class Crane :public Animal{
public:
	//������ ����� ��� �Ű������� ���� �θ�����ڰ� ȣ��ȴ�
	Crane() { cout << "�η�� ������" << endl; }
	~Crane() { cout << "�η�� �Ҹ���" << endl; }
private:
	int leg_length;
};

int main(void) {
	Crane* crane = new Crane();
	delete crane;
	return 0;
}