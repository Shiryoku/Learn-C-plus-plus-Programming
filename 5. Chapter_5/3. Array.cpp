#include <iostream>
using namespace std;


//Barcode input
void barcodeReader(unsigned int barcode[])
{
	//Output
	cout << "Enter 12 integers seperated by blanks or <return>S:" << endl;

	//Input
	for (int i = 0; i < 12; i++)
	{
		cin >> barcode[i];
	}

}

//Finding odd
int sumOdd(unsigned int barcode[])
{
	//Declaration
	int oddsum = 0;

	//Loop for addition of odds
	for (int i = 0; i < 11; i = i + 2)
	{
		oddsum = oddsum + barcode[i];
	}

	return oddsum;
}

//Finding even
int sumEven(unsigned int barcode[])
{
	//Declaration
	int evensum = 0;

	//Loop for addition of odds
	for (int i = 1; i < 11; i = i + 2)
	{
		evensum = evensum + barcode[i];
	}

	return evensum;
}

//Finding sum
void sumTotal(unsigned int barcode[], unsigned int& odd, unsigned int& even)
{
	//Declaration
	int sum = 3*odd + even;

	//digit check
	int digitcheck = sum % 10;

	//Output
	cout << "\nThe sum of the digits in the odd-numbered positions : " << odd;
	cout << "\nThe sum of the digits in the even-numbered positions : " << even;
	cout << "\nThe sum of the digits in the even-numbered positions and odd-numbered positions : " << sum;
	cout << "\nEntered barcode :\n";
	for (int i = 0; i < 12; i++)
	{
		cout << " " << barcode[i];
	}
	cout << "\nResult : ";

	//Validator
	if (digitcheck == 0)
	{
		if (digitcheck == barcode[11])
		{
			cout << "Validated Bardcode !";
		}
		else
		{
			cout << "Error in barcode.";
		}
	}
	else
	{
		digitcheck = digitcheck - 10;
		if (digitcheck < 0)
		{
			digitcheck = digitcheck * -1;
		}

		if (digitcheck == barcode[11])
		{
			cout << "Validated Bardcode !";
		}
		else
		{
			cout << "Error in barcode.";
		}
	}

}

//Main Function
int main()
{
	//Delcaration
	//Array
	unsigned int barcode[12];
	unsigned int oddsum, evensum;

	//Function calling
	//Calculations
	barcodeReader(barcode);
	oddsum = sumOdd(barcode);
	evensum = sumEven(barcode);
	sumTotal(barcode, oddsum, evensum);
}