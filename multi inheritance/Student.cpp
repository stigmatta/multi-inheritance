#include "Student.h"
Student::Student():Human(),University()
{
	grades = {};
	group = " ";
}
Student::Student(string humanName,unsigned age,string uniName,string address,string faculty,initializer_list<int>grades, string group):Human(humanName,age),University(uniName,address,faculty)
{
	this->grades = grades;
	this->group = group;
}
string Student::getGroup()
{
	return group;
}
void Student::getGrades()
{
	for (unsigned element: grades)
	{
		cout << element << ' ';
	}
	cout << endl;
}
void Student::setGroup(string group)
{
	this->group = group;
}
void Student::setGrades(initializer_list <int> grades)
{
	this->grades = grades;
}