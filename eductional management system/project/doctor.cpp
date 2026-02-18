#include "doctor.h"
#include <iostream>
using namespace std;
void doctor::set_name(string n)
{
	name = n;
}

void doctor::set_username(string u)
{
	username = u;
}

void doctor::set_password(string p)
{
	password = p;
}

string doctor::get_name()
{
	return name;
}

string doctor::get_username()
{
	return username;
}

string doctor::get_password()
{
	return password;
}

doctor::doctor()
{
}

doctor::doctor(string n, string u, string p, string co)
{
	name = n;
	username = u;
	password = p;
	code = co;
}

bool doctor::check()
{
	string u, p;
	cout << "enter the username: ";
	getline(cin >> ws, u);
	cout << endl;
	cout << u;
	cout << "enter the password: ";
	getline(cin >> ws, p);
	if (username == u && password == p) {
		return 1;
	}
	else {
		return 0;
	}
}

void doctor::doctor_menu()
{
	cout << "1-list courses" << endl;
	cout << "2-create course" << endl;
	cout << "3-view course" << endl;
	cout << "4-logout" << endl;
}

void doctor::set_iplementation()
{
	string u, p, n;
	cout << "what's your name: ";
	getline(cin >> ws, n);
	name = n;
	cout << "your username: ";
	getline(cin >> ws, u);
	username = u;
	cout << "your password: ";
	getline(cin >> ws, p);
	password = p;
}
