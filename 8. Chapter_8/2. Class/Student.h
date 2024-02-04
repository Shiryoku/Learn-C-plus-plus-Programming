#pragma once
#include <string>
#include <iostream>

using namespace std;


class Student
{
private:

	 string name;
	 int score;
	 int quiz_count;
	 int total_score;

public:

	Student();
	
	Student(string n, int s);
	
	//destructor
	~Student();

	//Mutator
	void setName(string n);
	void setScore(int s);
	void clear();

	
	string get_Name();
	void add_quiz(int score);
	double get_total_score();
	double get_average_score();




};