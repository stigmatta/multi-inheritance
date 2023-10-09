
#include "Human.h"
Human::Human()
{
	name = " ";
	age = 0;
}
Human::Human(string name , unsigned age)
{
	this->name = name;
	this->age = age;
}
string Human::getName()
{
	return name;
}
unsigned Human::getAge()
{
	return age;
}
void Human::setName(string name)
{
	this->name = name;
}
void Human::setAge(unsigned age)
{
	this->age = age;
}