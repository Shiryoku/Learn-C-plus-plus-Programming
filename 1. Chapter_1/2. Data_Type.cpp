//NAME : WAN AHMAD NURULLAH BIN WAN M.AZHARI
//MATRICS. NO : BI23110062

#include <iostream>

using namespace std;

unsigned short int input;

unsigned short int digit1;
unsigned short int digit2;
unsigned short int digit3;
unsigned short int digit4;
unsigned short int digit5;



int main()
{

	cout << "Please enter a positive integer between 0 and 65535 : ";
	cin >> input;
	
	digit5 = input % 10;
	digit4 = input % 100 / 10;
	digit3 = input % 1000 / 100;
	digit2 = input % 10000 / 1000;
	digit1 = input % 100000 / 10000;
	cout << endl;

	cout << " The Forward Sequence : " << digit1 << " " << digit2 << " " << digit3 << " " << digit4 << " " << digit5 << endl;
	cout << endl;
	cout << endl;
	cout << " The Reversed Sequence :" << digit5 << " " << digit4 << " " << digit3 << " " << digit2 << " " << digit1 << endl;
	

	return 0;

}