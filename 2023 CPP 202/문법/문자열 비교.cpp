//C++
#include<iostream>
#include<string> // std::string 클래스
//C
#include<stdio.h>
#include<string.h>

using namespace std;

int main(void) {
	char str1[50] = "Hello";
	char str2[50] = "World";

	//문자열비교
	int result = strcmp(str1, str2);

	if (result == 0) {
		printf("str1 == str2");
	}
	else if (result == -1) {
		printf("str1 < str2");
	}
	else if (result == 1) {
		printf("str1 > str2");
	}

	
	return 0;
}