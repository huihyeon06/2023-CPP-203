#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(void) {
	vector<string> s;

	s.reserve(10);
	s.push_back("사과");
	s.push_back("바나나");
	s.push_back("수박");
	s.push_back("포도");

	vector<string>::iterator iter;
	for (iter=s.begin(); iter!=s.end(); iter++) {
		cout << *iter << endl;
	}
}