#pragma once
#include "animal.h"
#include<iostream>

using namespace std;

class Cat : public Animal {
public:
	void bark(void)
	{
		cout << "�߿�" << endl;
	}
private:
	int claw;
};