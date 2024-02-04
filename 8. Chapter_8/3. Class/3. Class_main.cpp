
#include <iostream>
#include <string>
#include "Course.h"

using namespace std;

int main()
{
    string cn,cc,ln;




    cout << " Enter the Course Name : ";
    cin >> cn;
    cout << "\n Enter the Course Code : ";
    cin >> cc;
    cout << " \nEnter the Lecturer Name : ";
    cin >> ln;


    Course course(cn, cc, ln);
  

    cout << "\n Details of created course";
    cout << "\n==================================";

    cout << "\n Course Code : " <<course.getCourseCode();
    cout << "\n Course Name : " << course.getCourseName();
    cout << "\n Lecturer Name : " << course.getLecturerName();

    
}