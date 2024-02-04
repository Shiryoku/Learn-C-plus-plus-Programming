//WAN AHMAD NURULLAH BIN WAN M.AZHARI
//BI23110062

#include <iostream>
#include <iomanip>

using namespace std;

const float  CONST_BMI = 703;


float wt_lb, ht_in, weight;




int main()
{
	cout << " USER'S BODY MASS INDEX (BMI) CALCULATOR " << endl;
	cout << " Enter weight in pound => ";
	cin >> wt_lb;
	cout << " Enter height in inches => ";
	cin >> ht_in;

	weight = (CONST_BMI * wt_lb) / (ht_in * ht_in);

	if (weight < 18.5) {
	
		cout << fixed << setprecision(2) << " You BMI is " << weight << " and your weight status is Underweight." << endl;
	}
	else if (weight >= 18.5 && weight <= 24.9) {
		
		cout << fixed << setprecision(2) << " You BMI is " << weight << " and your weight status is Normal." << endl;
	}
	else if (weight >= 25.0 && weight <= 29.9) {

		cout << fixed << setprecision(2) << " You BMI is " << weight << " and your weight status is Overweight." << endl;
	}
	else if (weight >= 30.0) {

		cout << fixed << setprecision(2) << " You BMI is " << weight << " and your weight status is Obese." << endl;
	}
	else {

		cout << " Wrong Input Please Try Again" << endl;
	}






}