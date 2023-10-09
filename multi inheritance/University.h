#pragma once
#include <iostream>
using namespace std;
class University
{
protected:
	string name, address, faculty;
public:
	University();
	University(string,string,string);
	string getName();
	string getAddress();
	string getFaculty();
	void setName(string name);
	void setAddress(string address);
	void setFaculty(string faculty);
};
