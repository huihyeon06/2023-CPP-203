#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(void) {
	map<string, string> a;
	
	a["���"] = "apple";
	a["������"] = "orange";
	a["�ٳ���"] = "banana";
	a["����"] = "strawberry";

	map<string, string> ::iterator iter;

	for (iter = a.begin(); iter != a.end(); iter++) {
		cout << iter->first << " ";
	}
	for (iter = a.begin(); iter != a.end(); iter++) {
		cout << iter->second<< " ";
	}
	return 0;
}