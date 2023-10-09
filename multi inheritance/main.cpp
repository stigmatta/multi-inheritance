#include <iostream>
#include "Human.h"
#include "University.h"
#include "Student.h"
using namespace std;
int main()
{
	Student me("Andrey", 18, "Step", "Sadovaya", "Software Engineer", { 3,5,6 }, "CS-221");
	cout << me.Human::getName()<<endl<<me.University::getName()<<endl;
	me.getGrades();
}