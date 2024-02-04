#include "Course.h"
#include <iostream>

using namespace std;



Course::Course(){
	
	courseName = " ";
	courseCode = " ";
	lecturerName = " ";
}

Course::Course(string cc, string cn, string ln) {
	courseCode = cc;
	courseName = cn;
	lecturerName = ln;
}

Course::~Course() {
	cout << " \n The Course list have been clear";
}

void Course::setCourseCode(string cc) {
	courseCode = cc;

}

void Course::setCourseName(string cn) {
	courseName = cn;
}

void Course::setLecturerName(string ln) {
	lecturerName = ln;
}



string Course::getCourseCode() {

	return courseCode;
}

string Course::getCourseName() {
	
	return courseName;
}

string Course::getLecturerName() {

	return lecturerName;
}