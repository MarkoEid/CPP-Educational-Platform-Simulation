#include "course.h"
#include<iostream>
#include<string>
using namespace std;
void course::set_name(string n)
{
	name=n;
}

void course::set_code(string c)
{
	code = c;
}

void course::set_tought_by(string d)
{
	tought_by = d;
}

void course::set_teaching(string s)
{
	teaching = s;
}

string course::get_name()
{
	return name;
}

string course::get_code()
{
	return code;
}

string course::get_teaching()
{
	return teaching;
}


course::course(string n, string c, string d, string s)
{
	name = n;
	code = c;
	tought_by = d;
	teaching = s;
}


course::course()
{
	name = "unknoown";
	code = "unknown";
}


void course::choice2()
{
	
	cout << "course: " << name<<" _ code: " << code<<endl;
}

void course::choice3()
{
	cout << "course: " << name << " _ code: " << code << endl;
}

void course::c_choice3S(int number)
{
	cout << "course: " << name << " with code: " << code<<" - taught by: "<<tought_by<<endl;
	cout << "course has" << number << "assignment"<<endl;
}

void course::c_choice3D(int number)
{
	cout << "course: " << name << " with code: " << code << endl;
	cout << "course has" << number << "assignment" << endl;
}

void course::c_choice4(int l)
{
	cout << "course" << code << " - total submitted" <<l<< "assignment" << " - " << "grade" << endl;
}

void course::set_regestration()
{
	cout << "course: " << name << " _ code: " << code<<" " << "tought by: " << tought_by << endl;
}

void course::set_regestration2()
{
}

void course::create_course(string d)
{
	string c, n;
	cout << "set the course code: ";
	cin >> c;
	code=c;
	cout << "set the subject of course: ";
	cin >> n;
	name=n;
	teaching = ' ';
	tought_by = d;

}

void course::display()
{
	cout << tought_by << endl;
	cout << teaching << endl;
	cout << code << endl;
	cout << name << endl;
}

void course::create_course2(string d, string c, string n)
{
	tought_by = d;
	name = n;
	code = c;
	teaching = ' ';
}


