#pragma once
#include "animal.h"
#include<iostream>

using namespace std;

class Cat : public Animal {
public:
	void bark(void)
	{
		cout << "¾ß¿Ë" << endl;
	}
private:
	int claw;
};