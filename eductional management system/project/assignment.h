#pragma once
#include <iostream>
#include <string>
#include "course.h"


using namespace std;
class assignment:public course
{
public:
	string doctor;
	string student;
	string content;//solution
	string submission;
	int gradeofstudent;
	int total;
	string code;
	string comment;


	public:
		void set_doctor(string d);
		void set_student(string s);
		void set_content(string c);
		string get_doctor();
		string get_student();
		string get_content();
		string getcode();
		assignment( string d, string s, string c,string sub,int gr,int t,string co);
		assignment();
		void c_c_choice3S(int a);//print the assignment
		void c_c_choice3DD(int a);
		void c_c_choice3D(int a);
		static void c_c_c_choice3S();//print the three choices in student
		static void c_c_c_choice3D();//print
		static void c_c_c_c_choice3D();
		int get_Votes();
		int get_total();
		void set_assignment(string s,string d,string c);//create assignment
};

