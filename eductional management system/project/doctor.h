#pragma once
#include <string>
#include "course.h"
using namespace std;
class doctor:public course
{
public:
	string name;
	 string username;
	string password;
	string code;//course
public:
	void set_name(string n);
	void set_username(string u);
	void set_password(string p);
	string get_name();
	string get_username();
	string get_password();
	doctor();
	doctor(string n, string u, string p, string co);
	 bool check();
	 static void doctor_menu();
	 void set_iplementation();//create doctor
};

