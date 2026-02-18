#include "assignment.h"
#include <unordered_set>


void assignment::set_doctor(string d)
{
	doctor = d;
}

void assignment::set_student(string s)
{
	student = s;
}

void assignment::set_content(string c)
{
	content = c;
}


string assignment::get_doctor()
{
	return doctor;
}

string assignment::get_student()
{
	return student;
}

string assignment::get_content()
{
	return content;
}

string assignment::getcode()
{
	return code;
}

assignment::assignment( string d, string s, string c,string sub,int gr,int t,string co)
{
	
	doctor = d;
	student = s;
	content = c;
	submission = sub;
	gradeofstudent = gr;
	total = t;
	code = co;
}

assignment::assignment()
{
	doctor = "unknown";
	student = "unknown";
	content = "unknown";
	submission = "unknown";
	gradeofstudent = 0;
	total = 0;
	code = "unknown";
}

void assignment::c_c_choice3S(int a)
{
 
	cout << "assignment " << a << " " << submission << " - " << gradeofstudent << "/" << total;
	if (comment != "") {
		cout << "(" << comment << ")" << endl;
	}
	else {
		cout << endl;
	}
}

void assignment::c_c_choice3DD(int a)
{
	cout << "assignment " << a << " " << submission << " - " << gradeofstudent << "/" << total << endl;
}



void assignment::c_c_choice3D(int a)
{
	if (content == "") {
		cout << "assignment " << a << " " << "has no solution " <<  endl;
	}
	else {
		cout << "assignment " << a << " " << "has solution " << content<<" " << "(" << student << ")" << endl;
	}
	
}

void assignment::c_c_c_choice3S()
{
	cout << "1-unregister from course" << endl;
	cout << "2-submit solutiom" << endl;
	cout << "3-back" << endl;
}

void assignment::c_c_c_choice3D()
{
	cout << "1-list solution" << endl;
	cout << "2-create assignment" << endl;
	cout << "3-view solution" << endl;
	cout << "4-back" << endl;
}

void assignment::c_c_c_c_choice3D()
{
	cout << "1-set grade" << endl;
	cout << "2-set a comment" << endl;
	cout << "3-back" << endl;
}


int assignment::get_Votes()
{
	return gradeofstudent;
}

int assignment::get_total()
{
	return total;
}

void assignment::set_assignment(string s,string d,string c)
{
	doctor = d;
	code = c;
	student = s;
	int t;
	string com;
	cout << "set the title of that assignment to student (" << student << ")" << ": ";
	getline(cin >> ws, com);
	comment = com;
	cout << "set the grade of that assignment to student ("<<student<<")"<<": ";
	cin >> t;
	total = t;
	gradeofstudent = 0;
	submission = "Not submitted";
	content = " ";
}

