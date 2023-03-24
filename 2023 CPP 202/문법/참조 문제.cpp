#include <iostream>

using namespace std;

void sum2(int& num) {
	num += 2;
}

int main(void) {
	int a = 3;
	sum2(a);
	cout << a << endl;
	return 0;
}