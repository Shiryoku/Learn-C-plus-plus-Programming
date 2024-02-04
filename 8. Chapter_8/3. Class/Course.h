#pragma once
#include <string>
#include <iostream>

using namespace std;


class Course
{
private:

	//Data member ( attribute )
	
	string courseCode;
	string courseName;
	string lecturerName;



public:
	Course();
	Course(string cc, string cn, string ln);

	//destructor
	~Course();

	//Mutators
	void setCourseCode(string cc);
	void setCourseName(string cn);
	void setLecturerName(string ln);

	//accessor
	
	string getCourseCode();
	string getCourseName();
	string getLecturerName();


};