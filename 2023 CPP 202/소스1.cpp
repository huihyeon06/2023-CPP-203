#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(void) {
	vector<string> s;

	s.reserve(10);
	s.push_back("���");
	s.push_back("�ٳ���");
	s.push_back("����");
	s.push_back("����");

	vector<string>::iterator iter;
	for (iter=s.begin(); iter!=s.end(); iter++) {
		cout << *iter << endl;
	}
}