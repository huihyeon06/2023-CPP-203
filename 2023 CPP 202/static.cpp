#include<iostream>
#include<string>

using namespace std;

class Champ {
public:
	Champ(const string& name);
private:
	static int cnt_;

};

//static ��������� ������ �ٱ����� �����Ѵ�(cosnt ������ ����)
int Champ::cnt_ = 0;

//�ٱ����� ����� ������ ���� ��������� ����Լ� �̸� �տ� Ŭ���� �̸�::
Champ::Champ(const string& name) {
	++cnt_;
}

int main(void) {
	Champ* a = new Champ("�����Ƴ�");
	Champ* b = new Champ("���ڸ�");
	//Champ �� ��ü�� ������ 2��
	//�޸𸮿� cnt_ ������ �� ���� ����
	//cnt_�� �������� 2
	return 0;
}