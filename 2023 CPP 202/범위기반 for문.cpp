#include<iostream>

using namespace std;

int main(void) {

	int a[] = { 3,6,2,4,6 };

	auto b = 4.6;

	//x�� �ڷ����� int�� �ڵ�����
	for (auto &x : a)
		cout << x << endl;
	
	return 0;
}