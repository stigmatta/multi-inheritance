#pragma once
#include <iostream>
using namespace std;
class Human
{
protected:
	string name;
	unsigned age;
public:
	Human();
	Human(string, unsigned);
	string getName();
	unsigned getAge();
	void setName(string name);
	void setAge(unsigned age);
};
