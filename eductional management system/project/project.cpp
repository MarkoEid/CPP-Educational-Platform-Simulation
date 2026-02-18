#include <iostream>
#include "student.h"
#include "doctor.h"
#include "course.h"
#include <string>
#include "assignment.h"
#include <vector>
#include <set>
using namespace std;

int main() {
    set<string> uniqueSubjects;
    vector<student> st = {
            {"marko eid", 123, "marko.programmer", "123", "c1234"},
            {"giovanni ayman", 123, "giovanni.attore", "123", "c1234"},
            {"marko eid", 123, "marko.programmer", "123", "c123"}
    };
    student s1;
    int size_student = st.size();
    vector<doctor> dt = {
            {"prof.maria", "maria1800", "123", "c123"},
            {"prof.taha", "taha@gmail", "123", "c1234"},
            {"prof.taha", "taha@gmail", "123", "c1234"}
    };
    doctor d1;
    int size_doctor = dt.size();
    vector<course> ct = {
            {"inglesh", "c1", "prof.maria", "giovanni ayman"},
            {"info", "c1234", "prof.taha", "marko eid"},
            {"math", "c12", "prof.maria", "marko eid"},
             {"math", "c12", "prof.maria", "giovanni ayman"},
            {"tele", "c123", "prof.taha", "giovanni ayman"},
            {"lab.info", "c12345", "prof.maria", "giovanni ayman"}
    };
    course c1;
    int size_course = ct.size();
    vector<assignment> at = {
     {"prof.taha", "giovanni ayman", "mango", "submitted", 10, 24, "c123"},
     {"prof.taha", "marko eid", "banana", "Not submitted", 0, 24, "c1234"},
     {"prof.maria", "marko eid", "mango", "Not submitted", 0, 24, "c12"},
     {"prof.maria", "giovanni ayman", "strawberrey", "submitted", 10, 24, "c12"},
     {"prof.maria", "giovanni ayman", "apple", " submitted", 20, 24, "c1"},
     {"prof.taha", "giovanni ayman", "banana", "Not submitted", 0, 24, "c123"}
    };
    assignment a1;
    int size_assignment = at.size();
    int x, y, z, choice, b, i, a, o, v, grade, bb{};
    int r = 1;
    int choice2;
    int choice3;
    int cointer;
    int sumbmission = 0;
    int counter = 0;
    int submittedCount = 0;
    int totalgradesstudent = 0;
    int totalgrades = 0;
    string u, p, content, comment, student1, student2, doctor1, doctor2, student3, doctor3;
    string naaaame, cooode, doctooor;
    string choose;
    string student4;
    bool return_to_student_menu = false;
    bool return_to_submission = false;
    bool return_to_doctor_menu = false;
    bool return_to_doctor = false;
    while (true) {//to keep program working
        cout << "1-login" << endl;
        cout << "2-signin" << endl;
        cout << "3-shutdown the system" << endl;
        cin >> x;
        switch (x) {
        case 1:
            system("cls");//open new console
            cout << "you are: " << endl;
            cout << "1-student" << endl;
            cout << "2-doctor" << endl;
            cin >> y;
            if (y == 1) {
                cout << "enter the username: ";
                getline(cin >> ws, u);
                cout << endl;
                cout << "enter the password: ";
                getline(cin >> ws, p);
                bool found = false;

                for (auto& student : st) {
                    if (student.username == u && student.password == p) {
                        found = true;
                        cout << "login successfully, " << student.name << endl;
                        student1 = student.name;//take the username
                        break;
                    }
                }//=for loop

                if (found) {
                    while (!return_to_student_menu) {
                        return_to_submission = false;
                        student::munu_student();
                        cin >> z;
                        switch (z) {
                        case 1:
                            size_course = ct.size();
                            b = 1;
                            for (int i = 0; i < size_course; i++) {

                                cout << b << "-";
                                ct[i].set_regestration();
                                b++;

                            }
                            cin >> choice3;
                            choice3--;
                            r = 0;
                            for (int i = 0; i < size_course; i++) {
                                if (r == choice3) {
                                    c1 = ct[i];
                                    c1.set_teaching(student1);//modification of student
                                    ct.push_back(c1);
                                    ct.erase(ct.begin() + r);
                                    break;
                                }
                                r++;

                            }
                            cout << "done " << endl;
                            return_to_student_menu = false;
                            break;
                        case 2:
                            size_course = ct.size();
                            b = 1;
                            for (int i = 0; i < size_course; i++) {
                                if (ct[i].teaching == student1) {
                                    cout << b << "-";
                                    ct[i].choice2();
                                    b++;

                                }
                            }
                            cout << "1-back" << endl;
                            cin >> i;
                            if (i == 1) {
                                return_to_student_menu = false;
                            }
                            else {
                                cout << "invalid choice" << endl;
                            }
                            break;
                        case 3:
                            size_course = ct.size();
                            size_assignment = at.size();
                            b = 1;
                            for (int i = 0; i < size_course; i++) {
                                if (ct[i].teaching == student1) {
                                    cout << b << "-";
                                    ct[i].choice2();
                                    b++;
                                }
                            }
                            cin >> choice;
                            choice--;
                            r = 0;
                            sumbmission = 0;
                            for (int i = 0; i < size_course; i++) {
                                if (ct[i].teaching == student1) {
                                    if (r == choice) {
                                        if (choice <= b) {//to choose the course of the student
                                            student3 = ct[i].code;
                                            for (int i = 0; i < size_assignment; i++) {
                                                if (student1 == at[i].student && student3 == at[i].code) {
                                                    if (at[i].submission == "Not submitted") {
                                                        sumbmission++;
                                                    }
                                                }
                                            }
                                            sumbmission / r;
                                            ct[i].c_choice3S(sumbmission);
                                            sumbmission = 0;
                                        }
                                        else {
                                            cout << "invalid choice" << endl;
                                            return_to_student_menu = false;
                                            break;
                                        }
                                    }
                                    r++;
                                }

                            }
                            b = 1;
                            for (int i = 0; i < size_assignment; i++) {
                                if (student1 == at[i].student && student3 == at[i].code) {

                                    at[i].c_c_choice3S(b);
                                    b++;//count assignments
                                }
                            }
                            while (!return_to_submission) {
                               
                                assignment::c_c_c_choice3S();
                                cin >> a;
                                if (a == 1) {
                                    size_course = ct.size();
                                    for (int i = 0; i < size_course; i++) {
                                        if (ct[i].teaching == student1 && ct[i].code == student3) {
                                            naaaame = ct[i].name;
                                            cooode = ct[i].code;
                                            doctooor = ct[i].tought_by;
                                            ct.erase(ct.begin() + i);
                                           
                                        }
                                    }
                                    cout << "done" << endl;
                                    
                                    c1.create_course2(doctooor, cooode, naaaame);
                                    ct.push_back(c1);
                                 
                                    return_to_submission = true;
                                    return_to_student_menu = false;

                                }
                                else if (a == 2) {
                                    bb = b;
                                    cout << "Which assignment do you want to submit? Enter a number between 1 and " << bb - 1 << ": ";
                                    cin >> o;
                                    o--;

                                    if (o < bb) {
                                        r = 0;
                                        for (int i = 0; i < size_assignment; i++) {
                                            if (student1 == at[i].student && student3 == at[i].code) {
                                                if (r == o) {
                                                    if (at[i].submission == "Not submitted") {
                                                        cout << "Enter the solution (no space): ";
                                                        cin >> content;
                                                        at[i].set_content(content);
                                                        at[i].submission = "submitted";
                                                        return_to_submission = false;
                                                    }
                                                    else {
                                                        cout << "Assignment is already submitted." << endl;
                                                        return_to_submission = false;
                                                    }
                                                    break;
                                                }
                                                r++;
                                            }
                                        }
                                    }
                                    else {
                                        cout << "Invalid input. Please enter a number between 1 and " << bb - 1 << "." << endl;
                                    }


                                }
                                else if (a == 3) {//back
                                    return_to_submission = true;
                                    return_to_student_menu = false;

                                }
                                else {
                                    cout << "invalid choice" << endl;
                                }
                            }

                            break;
                        case 4:
                            size_course = ct.size();
                            size_assignment = at.size();
                            for (int i = 0; i < size_course; i++) {
                                if (ct[i].teaching == student1) {
                                    totalgradesstudent = 0;
                                    totalgrades = 0;
                                    submittedCount = 0;
                                    for (int j = 0; j < size_assignment; j++) {
                                        if (ct[i].code == at[j].code && student1 == at[j].student) {
                                            totalgradesstudent += at[j].get_Votes();
                                            totalgrades += at[j].get_total();
                                            if (at[j].submission == "submitted") {
                                                submittedCount++;
                                            }
                                        }
                                    }
                                    cout << "Course " << ct[i].code << " has " << submittedCount << " submitted - grade " << totalgradesstudent << "/" << totalgrades << endl;

                                }
                            }

                            cout << "please make a choice" << endl;
                            return_to_student_menu = false;

                            break;
                        case 5://logout 
                            return_to_student_menu = true;
                            return_to_submission = true;
                            break;
                        default:
                            cout << "invalid choice" << endl;
                        }
                    }
                }
                else {
                    cout << "invalid login" << endl;
                    //else of found
                }
                return_to_student_menu = false;
                return_to_submission = false;
            }


            //student
            else if (y == 2) {
                cout << "enter the username: ";
                getline(cin >> ws, u);
                cout << endl;
                cout << "enter the password: ";
                getline(cin >> ws, p);
                bool found2 = false;
                for (auto& doctor : dt) {
                    if (doctor.username == u && doctor.password == p) {
                        found2 = true;
                        cout << "login successfully, " << doctor.name << endl;
                        doctor1 = doctor.name;
                        doctor2 = doctor.code;
                        break;
                    }
                }
                if (found2) {
                    while (!return_to_doctor_menu) {
                        return_to_doctor = false;
                        doctor::doctor_menu();
                        cin >> z;
                        switch (z) {
                        case 1:
                            size_course = ct.size();
                            size_assignment = at.size();
                          
                            b = 1;
                            for (int i = 0; i < size_course; i++) {
                                if (ct[i].tought_by == doctor1) {
                                        cout << b << "-";
                                        ct[i].choice2();
                                        b++;
                                        
                                    }

                                
                            }
                            cout << "1-back" << endl;
                            cin >> i;
                            if (i == 1) {
                                return_to_doctor_menu = false;
                            }
                            else {
                                cout << "invalid choice" << endl;
                            }
                            break;
                        case 2:
                            c1.create_course(doctor1);
                            ct.push_back(c1);
                            cout << "done" << endl;
                            return_to_doctor = false;
                            break;
                        case 3:
                            size_course = ct.size();
                            size_assignment = at.size();
                            uniqueSubjects.clear();
                            b = 1;

                          
                            for (int i = 0; i < size_course; i++) {
                                if (ct[i].tought_by == doctor1 ) {
                                    cout << b << "-";
                                    ct[i].choice2();
                                    b++;
                                   
                                }
                            }

                            cin >> choice;
                            choice--;

                            if (choice >= 0 && choice < b - 1) {
                                int r = 0; 
                                for (int i = 0; i < size_course; i++) {
                                    if (ct[i].tought_by == doctor1 ) {
                                        if (r == choice) {
                                           
                                            doctor3 = ct[i].code;
                                            int sumbmission = 0; 
                                            for (int j = 0; j < size_assignment; j++) {
                                                if (doctor1 == at[j].doctor && doctor3 == at[j].code) {
                                                    if (at[j].submission == "Not submitted") {
                                                        sumbmission++;
                                                    }
                                                }
                                            }
                                            
                                            if (r != 0) {
                                                sumbmission /= r;
                                            }
                                            ct[i].c_choice3D(sumbmission);
                                            break; 
                                        }
                                        r++; 
                                    }
                                }
                            }
                            else {
                                cout << "Invalid choice" << endl;
                                return_to_doctor_menu = false;
                            }

                           
                            b = 1;
                            for (int i = 0; i < size_assignment; i++) {
                                if (doctor1 == at[i].doctor && doctor3 == at[i].code) {
                                    at[i].c_c_choice3DD(b);
                                    b++;
                                }
                            }


                            assignment::c_c_c_choice3D();
                            cin >> a;
                            if (a == 1) {
                                b = 1;
                                size_course = ct.size();
                                size_assignment = at.size();
                                for (int i = 0; i < size_assignment; i++) {
                                    if (doctor1 == at[i].doctor && doctor3 == at[i].code) {
                                        at[i].c_c_choice3D(b);
                                        b++;
                                    }

                                }

                                cout << "1-back" << endl;
                                cin >> i;
                                if (i == 1) {
                                    return_to_doctor_menu = false;
                                }
                                else {
                                    cout << "invalid choice" << endl;
                                }
                            }


                            else if (a == 2) {
                                size_course = ct.size();
                                size_assignment = at.size();
                                for (int i = 0; i < size_course; i++) {
                                    if (doctor1 == ct[i].tought_by && doctor3 == ct[i].code) {
                                        student4 = ct[i].get_teaching();
                                        a1.set_assignment(student4, doctor1, doctor3);
                                        at.push_back(a1);
                                    }

                                }
                                cout << "done" << endl;
                                return_to_doctor_menu = false;
                            }
                            else if (a == 3) {
                                b = 1;
                                size_course = ct.size();
                                size_assignment = at.size();
                                for (int i = 0; i < size_assignment; i++) {
                                    if (doctor1 == at[i].doctor && doctor3 == at[i].code) {
                                        at[i].c_c_choice3D(b);
                                        b++;
                                    }
                                }

                                while (!return_to_doctor) {
                                    assignment::c_c_c_c_choice3D();
                                    cin >> v;
                                    if (v == 1) {
                                        bb--; // Decrement bb here if needed, depending on your logic
                                        size_course = ct.size();
                                        size_assignment = at.size();
                                        bb = b;
                                        cout << "which ith" << "[1-" << bb - 1 << "]" << "you want to set the grade" << endl;
                                        cin >> o;
                                        o--;

                                        if ( o <= bb) {
                                            int r = 0;
                                            bool found = false;
                                            for (int j = 0; j < size_assignment; j++) {
                                                if (doctor1 == at[j].doctor && doctor3 == at[j].code) {
                                                    if (o == r) {
                                                        cout << "set the grade: ";
                                                        cin >> grade;
                                                        at[j].gradeofstudent = grade;
                                                        return_to_doctor = false;
                                                        found = true;
                                                        break;
                                                    }
                                                    r++;
                                                }
                                            }
                                            if (!found) {
                                                cout << "Invalid choice" << endl;
                                                return_to_doctor = false;
                                            }
                                        }
                                        else {
                                            cout << "Invalid input. Please enter a number between 1 and " << bb << "." << endl;
                                        }
                                    }

                                    else if (v == 2) {
                                        size_course = ct.size();
                                        size_assignment = at.size();
                                        cout << "which ith" << "[1-" << bb - 1 << "]" << "you want to set the comment" << endl;
                                        cin >> o;
                                        o--;

                                        if ( o <= bb) { 
                                            int r = 0;
                                            bool found = false; 
                                            for (int i = 0; i < size_assignment; i++) {
                                                if (doctor1 == at[i].doctor && doctor3 == at[i].code) {
                                                    if (o == r) {
                                                        cout << "set the comment: ";
                                                        cin >> comment;
                                                        at[i].comment = comment;
                                                        found = true;
                                                        break;
                                                    }
                                                    r++;
                                                }
                                            }
                                            if (!found) { // If no valid assignment found
                                                cout << "Invalid choice" << endl;
                                                return_to_doctor = false;
                                            }
                                        }
                                        else {
                                            cout << "Invalid input. Please enter a number between 1 and " << bb << "." << endl; // Adjusted the message here
                                            return_to_doctor = false;
                                        }





                                    }
                                    else if (v == 3) {//back
                                        return_to_doctor = true;
                                        return_to_doctor_menu = false;

                                    }
                                    else {
                                        cout << "invalid choice" << endl;
                                    }

                                }
                            }
                            else if (a == 4) {//back2
                                return_to_doctor_menu = false;
                            }
                            else {
                                cout << "invalid choice" << endl;
                            }
                            break;
                        case 4://logout
                            return_to_doctor_menu = true;
                            return_to_doctor = true;
                            break;
                        default:
                            cout << "invalid choice" << endl;
                        }
                    }
                    return_to_doctor_menu = false;
                    return_to_doctor = false;
                }
                else {
                    cout << "invalid login" << endl;
                }
            }
            else {
                cout << "invalid choice" << endl;
            }
            break;
        case 2:
            cout << "you are: " << endl;
            cout << "1-student" << endl;
            cout << "2-doctor" << endl;
            cin >> choice2;
            if (choice2 == 1) {
                s1.set_iplementation();
                st.push_back(s1);
                cout << "signin successfuly" << endl;
            }
            if (choice2 == 2) {
                d1.set_iplementation();
                dt.push_back(d1);
                cout << "signin successfuly" << endl;
            }
            break;
        case 3:
            exit(0);
            break;
        default:
            cout << "invalid choice" << endl;
            break;
        }
    }
    return 0;
}
