#include <iostream>
#include <string>
#include <iostream>
#include "Student.h"

using namespace std;


Student::Student() {
	name = "";
	score = 0;
	clear();
}

void Student::clear() {
	quiz_count = 0;
	total_score = 0;

}

Student::Student(string n, int s) {

	name = n;
	score = s;
}

Student::~Student() {
	std::cout << "\n The Student have been cleared ";
}

void Student::setName(string n) {
	name = n;
}

void Student::setScore(int s) {
	score = s;
}

string Student::get_Name() {
	return name;
}


void Student::add_quiz(int score) {
	quiz_count++;
	total_score = total_score + score;

}


double Student::get_total_score() {

	return total_score;
}

double Student::get_average_score() {

	return (total_score) / quiz_count;
}