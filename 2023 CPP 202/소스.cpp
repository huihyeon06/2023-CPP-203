#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(void) {
	map<string, string> a;
	
	a["»ç°ú"] = "apple";
	a["¿À·»Áö"] = "orange";
	a["¹Ù³ª³ª"] = "banana";
	a["µþ±â"] = "strawberry";

	map<string, string> ::iterator iter;

	for (iter = a.begin(); iter != a.end(); iter++) {
		cout << iter->first << " ";
	}
	for (iter = a.begin(); iter != a.end(); iter++) {
		cout << iter->second<< " ";
	}
	return 0;
}