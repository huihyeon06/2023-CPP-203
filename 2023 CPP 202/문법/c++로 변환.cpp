//C++
#include<iostream>
#include<string> // std::string 클래스
//C
#include<stdio.h>
#include<string.h>

using namespace std;

int main() {
    string str1 = "Hello";
    string str2 = "Hello";
    
    if (str1 == str2) {
        cout << "str1=str2";
    }
    else if (str1 < str2) {
        cout << "str1<str2";
    }
    else {
        cout << "str1>str2";
    }

    return 0;
}


