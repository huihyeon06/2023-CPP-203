#include<iostream>
#include<string>

using namespace std;

class Animal {
public:
	Animal(int age, string name) : age_(age), name_(name)
	{
		cout << "���� ������" << endl;
		cout << "����" << age_ << endl;
		cout << "�̸�" << name_ << endl;
	}
	~Animal() { cout << "���� ������" << endl; }
	void Bark(void) { cout << "���� ¢��" << endl; }
	void Eat(void) { cout << "���� ����" << endl; }
	void Hunt(void) { cout << "���� ���" << endl; }
private:
	int age_;
	string name_;
};

class Crane :public Animal{
public:
	//������ ����� ��� �Ű������� ���� �θ�����ڰ� ȣ��ȴ�
	Crane(int age, string name, int leg_length) :Animal(age, name)
	{
		cout << "�η�� ������" << endl;
		leg_length_ = leg_length;
		cout << "�ٸ�����" << leg_length << endl;
	}
	~Crane() { cout << "�η�� �Ҹ���" << endl; }
private:
	int leg_length_;
};

int main(void) {
	Crane* crane = new Crane(3, "����",108); //�θ��� ��������� ���
	crane->Eat(); //�θ��� ����Լ��� ���

	delete crane;
	return 0;
}