#pragma once
#include <string>
#include "doctor.h"
#include "course.h"
#include "assignment.h"
using namespace std;
class student :public course
{
public:
	string name;
	int id;
	 string username;
	 string password;
	 string code;//course
public:
	void set_name(string n);
	void set_id(int i);
	void set_username(string u);
	void set_password(string p);
	string get_name();
	int get_id();
	string get_username();
	string get_password();
	student();
	student(string n, int i,  string u,  string p,string co);
	static void munu_student();
	 void getusername();//when i login it print my name
	 void set_iplementation();//create course


};
