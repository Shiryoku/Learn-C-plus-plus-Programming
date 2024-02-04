// WAN AHMAD NURULLAH
// BI23110062

#include <iostream>

using namespace std;

int get_problem();
int rounded_(double);
int fig_drops_min(double, double);
void get_rate_drop_factor();
int fig_ml_hr(double);
void get_L_for_nhr();
int by_weight(double, double, double);
void get_kg_rate_conc();
int by_units(double, double);
void get_unit_conc();








int main() {

	unsigned short int loop = 0,answer;

	

	while (loop==0) {
		char option = get_problem();
		switch (option) {
		case 1:
			get_rate_drop_factor();
			break;
		case 2:
			get_L_for_nhr();
			break;
		case 3:
			get_kg_rate_conc();
			break;
		case 4:
			get_unit_conc();
			break;
		case 5:
			loop = 1;
			break;
		default:
			cout << " Wrong Input, Please Try Again " << endl;
		}
		cout << "\nContinue ? \n (1)Yes \n (2)No \n";
		cin >> answer;
		if (answer == 2) {
			loop = 1;
		}
		else if (answer == 1) {
			loop = 0;
		}
		else {
			cout << "Invalid Try Again" << endl;
		}
	}
	return 0;
}

int get_problem() {
	
	unsigned short int i;
	cout << " INTRAVENOUS RATE ASSISTANT \n";
	cout << "\n";
	cout << " Enter the number of the problem you wish to solve. \n";
	cout << "GIVEN A MEDICAL ORDER IN\t\t CALCULATION RATE IN\n";
	cout << "(1) ml/hr & tubing drop factor\t\t drop/min \n";
	cout << "(2) 1 L for n hr\t\t\t ml/hr	\n";
	cout << "(3) mg/kg/hr & concentration in mg/ml\t ml/hr \n";
	cout << "(4) units/hr & concentration in units/ml ml/hr \n";
	cout << "(5) QUIT \n";
	cout << "\n";
	cout << "\n";
	
	cout << "Problem=> ";
	cin >> i;
	return i;
}

int rounded_(double n){
	int number = n;
	if (n - number >= 0.5) {
		number++;
	}
	return number;

}

int fig_drops_min(double rate, double tubing_drop) {
	return rounded_(( rate / 60) * tubing_drop);
}

void get_rate_drop_factor() {

	unsigned short int rate, tubing_drop;

	cout << " Enter the rate in ml/hr => ";
	cin >> rate;
	cout << " Enter tubing's drop factor (drop/ml) => ";
	cin >> tubing_drop;
	
	cout << " The drop rate per minute is " << fig_drops_min(rate,tubing_drop);

}

int fig_ml_hr(double no_h) {
	return rounded_(1000 / no_h);
}

void get_L_for_nhr() {

	double no_h;
	cout << "Enter the hour taken for 1L =>";
	cin >> no_h;
	cout << "The rate ml per hour is " << fig_ml_hr(no_h);
}

int by_weight(double rate, double concen, double weight) {

	return rounded_((rate * weight) / concen);

}

void get_kg_rate_conc() {
	double concen, weight, rate;
	cout << " Enter the rate in mg/kg/hr => ";
	cin >> rate;
	cout << " Enter tubing's concentration (mg/ml) => ";
	cin >> concen;
	cout << " The patient Weight :";
	cin >> weight;


	cout << " The rate ml per hour is " << by_weight(rate, concen, weight);
}

int by_units(double rate, double conc) {
	return rounded_(rate / conc);
}

void get_unit_conc() {
	double conc, rate;

	cout << " Enter the rate in units /hr ";
	cin >> rate;
	cout << " Enter tubing's concentration (units/ml) => ";
	cin >> conc;
	cout << " The rate ml per hour is " << by_units(rate, conc);
}