#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

int main()
{
   
    string name;
    double score,quizzes;
    Student student;

    
    cout << "\n Enter the amount of quizzes  : ";
    cin >> quizzes;
    cout << "\n Enter student name : ";
    cin >> name;

    student.setName(name);
    
    

    for (int i = 0; i < quizzes; i++) {

        
        cout << "\n Enter your score : ";
        cin >> score;
        
        student.add_quiz(score);


    }

    cout << "\n Student Name is " << student.get_Name();
    cout << "\n Student total score is " << student.get_total_score();
    cout << "\n Student Average Score is " << student.get_average_score();

    return 0;
   

}