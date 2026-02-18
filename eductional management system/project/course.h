#pragma once
#include <string>
using namespace std;
class course
{
public:
	 string name;
	 string code;
	 string tought_by;//doctor
	 string teaching;//student
public:
	void set_name(string n);
	void set_code(string c);
	void set_tought_by(string d);
	void set_teaching(string s);
	string get_name();
	string get_code();
	string get_teaching();
	course(string n, string c,string d,string s);
	course();
	 void choice2();
	 void choice3();
	 void c_choice3S(int number);
	 void c_choice3D(int number);
	 void c_choice4(int l);
	 void set_regestration();//print the courses
	 void set_regestration2();
	 void create_course(string d);
	 void display();//print all
	 void create_course2(string d, string c, string n);

};

