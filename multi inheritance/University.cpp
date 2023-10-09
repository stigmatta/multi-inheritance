
#include "University.h"
University::University()
{
	name =address=faculty=" ";
}
University::University(string name, string address, string faculty)
{
	this->name = name;
	this->address = address;
	this->faculty = faculty;
}
string University::getName()
{
	return name;
}
string University::getAddress()
{
	return address;
}
string University::getFaculty()
{
	return faculty;
}
void University::setName(string name)
{
	this->name = name;
}
void University::setAddress(string address)
{
	this->address = address;
}
void University::setFaculty(string faculty)
{
	this->faculty = faculty;
}