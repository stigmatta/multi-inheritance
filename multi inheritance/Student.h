#pragma once
#include "Human.h"
#include "University.h"
class Student:public Human,public University
{
	initializer_list <int> grades;
	string group;
public:
	Student();
	Student(string humanName, unsigned age, string uniName, string address, string faculty, initializer_list<int>grades, string group);
	string getGroup();
	void getGrades();
	void setGroup(string group);
	void setGrades(initializer_list <int> grades);
};
