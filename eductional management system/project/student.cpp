#include "student.h"
#include "doctor.h"
#include <iostream>
#include <string>
using namespace std;
string u, p;
void student::set_name(string n)
{
	name = n;
}

void student::set_id(int i)
{
	id = i;
}

void student::set_username(string u)
{
	username = u;
}

void student::set_password(string p)
{
	password = p;
}

string student::get_name()
{
	return name;
}

int student::get_id()
{
	return id;
}

string student::get_username()
{
	return username;
}

string student::get_password()
{
	return password;
}

student::student():name("unknown"),id(0)
{
	username = "unknown";
	password = "unkown";
}

student::student(string n, int i,  string u,  string p,string co) :name(n), id(i)
{
	username = u;
	password = p;
	code = co;

}

void student::munu_student()
{
	cout << "1-register in course" << endl;
	cout << "2-list my course" << endl;
	cout << "3-view a course" << endl;
	cout << "4-grades report" << endl;
	cout << "5-log out" << endl;
}

void student::getusername()
{
	cout << u << endl;;
}

void student::set_iplementation()
{
	string u,p,n;
	int i;
	cout << "what's your name: ";
	getline(cin >> ws, n);
	name = n;
	cout << "your username: ";
	getline(cin >> ws, u);
	username = u;
	cout << "your password: ";
	getline(cin >> ws, p);
	password = p;
	cout << "your id: ";
	cin >> i;
	id=i;
}








