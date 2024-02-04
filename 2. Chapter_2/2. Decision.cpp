//WAN AHMAD NURULLAH BIN WAN M.AZHARI
//BI23110062

#include <iostream>


using namespace std;

unsigned short int day, month, year,extra,total;



int main()
{
    cout<<" Enter the Day ( e.g : 12 ) :";
	cin >> day;
	cout << " Enter the month ( e.g : 1 for January ) :";
	cin >> month;
	cout << " Enter the year ( e.g : 1993 ) :";
	cin >> year;

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		extra = 1;
	}
	else{
		extra = 0;
	}

	switch (month) {

	case 1:
		total = day;
		break;

	case 2:
		total = 31 + day;
		break;

	case 3 :
		total = 31 + 28 + extra + day;
		break;

	case 4 :
		total = 31 + 31 + 28 + extra + day;
		break;

	case 5 :
		total = 31 + 31 + 30 + 28 + extra + day;
		break;

	case 6 :
		total = 31 + 31 + 30 + 31 + 28 + extra + day;
		break;

	case 7 :
		total = 31 + 28 + extra + 31 + 30 + 31 + 30 + day;
		break;

	case 8 :
		total = 31 + 28 + extra + 31 + 30 + 31 + 30 + 31 + day;
		break;

	case 9 :
		total = 31 + 28 + extra + 31 + 30 + 31 + 30 + 31 + 31 + day;
		break;
	
	case 10 :
		total = 31 + 28 + extra + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day;
		break;

	case 11 :
		total = 31 + 28 + extra + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day;
		break;

	case 12 :
		total = 31 + 28 + extra + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day;
		break;

	default :
		cout << " Invalid. Please Try Again.";

			
	
	}
	cout << " Total days : " << total;

	return 0;
}

