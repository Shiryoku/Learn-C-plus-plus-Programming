#include <iostream>

using namespace std;

unsigned short int input;
const short int year = 1990;
unsigned short int total_year;
const float BAL = 53.966;
const float p_year = 2.184;
float output;


int main()
{
	cout << "POPULATION GROWTH ESTIMATION" << endl;
	cout << "***********************************" << endl;
	cout << "ENTER A YEAR AFTER 1990: ";
	cin >> input;
	
	total_year = input - year;
	output = BAL + (p_year * total_year);

	cout << "Predicted Sabah State population for 2022 (in thousand) : " << output << endl;
	return 0;

}
