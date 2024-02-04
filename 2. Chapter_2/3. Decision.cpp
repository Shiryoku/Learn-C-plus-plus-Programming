
// NAME : WAN AHMAD NURULLAH
// MATRIC NO :BI 23110060


#include <iostream>
using namespace std;

int main()
{

	char type_vehicle;
	unsigned short int in_hour, in_minute, out_hour, out_minute;

	cout << "Type of Vehicle?";
	cin >> type_vehicle;
	cout << "Hour vehicle entered lot (0- 24) ?";
	cin >> in_hour;
	cout << "Minute vehicle entered lot (0-60) ?";
	cin >> in_minute;
	cout << "Hour vehicle left lot (0- 24) ? ";
	cin >> out_hour;
	cout << "Minute vehicle left lot (0-60) ? ";
	cin >> out_minute;

	cout << "\n		Borneo Parking Sdn.Bhd	\n";
	cout << "		  PARKING LOT CHARGE	\n";
	cout << "TYPE OF VEHICLE : ";
	{
		if (type_vehicle == 'C' || type_vehicle == 'c')
			cout << "CAR" << "\n\n";
		else if (type_vehicle == 'T' || type_vehicle == 't')
			cout << "MPV" << "\n\n";
		else if (type_vehicle == 'B' || type_vehicle == 'b')
			cout << "BUS" << "\n\n";
		else {
			cout << "INVALID \n\n";
		}
	}

	if (in_hour > out_hour)
	{
		const unsigned short int park_time = 1440 + ((out_hour * 60) + out_minute) - ((in_hour * 60) + in_minute);
		const unsigned short int convert_to_hour = park_time / 60;
		const unsigned short int convert_to_minute = park_time % 60;
		const unsigned short int penalty = 100;
		const unsigned short int car_1 = 2 * (convert_to_hour + 1);
		const unsigned short int car_2 = 4 + 3 * (convert_to_hour - 2);
		const unsigned short int van_1 = 3 * (convert_to_hour + 1);
		const unsigned short int van_2 = 6 + 4 * (convert_to_hour - 2);
		const unsigned short int bus_1 = 4 * (convert_to_hour + 1);
		const unsigned short int bus_2 = 8 + 5 * (convert_to_hour - 2);

		cout << "TIME - IN   	" << in_hour << " : " << in_minute << "\n";
		cout << "TIME - OUT	" << out_hour << " : " << out_minute << "\n";
		cout << "              ------------\n";
		cout << "PARKING TIME	" << convert_to_hour << " : " << convert_to_minute << "\n";
		cout << "              ------------\n";

		cout << "PARKING FARE     RM  ";
		{
			if (type_vehicle == 'C' || type_vehicle == 'c')
			{
				if (convert_to_hour < 2)
					cout << car_1;
				else
					cout << car_2;
			}
			else if (type_vehicle == 'V' || type_vehicle == 'v')
			{
				if (convert_to_hour < 2)
					cout << van_1;
				else
					cout << van_2;
			}
			else if (convert_to_hour == 'B' || type_vehicle == 'b')
			{
				if (convert_to_hour < 2)
					cout << bus_1;
				else
					cout << bus_2;
			}
			else {
				cout << "INVALID";
			}
		}

		cout << "\nPENALTY FARE     RM  " << penalty;

		cout << "\n              ------------\n";

		cout << "TOTAL CHARGE     RM  ";

		if (type_vehicle == 'C' || type_vehicle == 'c')
		{
			if (convert_to_hour < 2)
				cout << car_1 + penalty;
			else
				cout << car_2 + penalty;
		}
		else if (type_vehicle == 'V' || type_vehicle == 'v')
		{
			if (convert_to_hour < 2)
				cout << van_1 + penalty;
			else
				cout << van_2 + penalty;
		}
		else if (type_vehicle == 'B' || type_vehicle == 'b')
		{
			if (convert_to_hour < 2)
				cout << bus_1 + penalty;
			else
				cout << bus_2 + penalty;
		}
		else {
			cout << "Invalid \n\n";
		}
		return 0;
	}

	else
	{
		const unsigned short int park_time = ((out_hour * 60) + out_minute) - ((in_hour * 60) + in_minute);
		const unsigned short int convert_to_hour = park_time / 60;
		const unsigned short int convert_to_minute = park_time % 60;
		const unsigned short int penalty = 100;
		const unsigned short int car_1 = 2 * (convert_to_hour + 1);
		const unsigned short int car_2 = 4 + 3 * (convert_to_hour - 2);
		const unsigned short int van_1 = 3 * (convert_to_hour + 1);
		const unsigned short int van_2 = 6 + 4 * (convert_to_hour - 2);
		const unsigned short int bus_1 = 4 * (convert_to_hour + 1);
		const unsigned short int bus_2 = 8 + 5 * (convert_to_hour - 2);

		cout << "TIME - IN   	" << in_hour << " : " << in_minute << "\n";
		cout << "TIME - OUT	" << out_hour << " : " << out_minute << "\n";
		cout << "              ------------\n";
		cout << "PARKING TIME	" << convert_to_hour << " : " << convert_to_minute<< "\n";
		cout << "              ------------\n";

		cout << "PARKING FARE     RM  ";
		if (type_vehicle == 'C' || type_vehicle == 'c')
		{
			if (convert_to_hour < 2)
				cout << car_1;
			else
				cout << car_2;
		}
		else if (type_vehicle == 'V' || type_vehicle == 'v')
		{
			if (convert_to_hour < 2)
				cout << van_1;
			else
				cout << van_2;
		}
		else if (convert_to_hour == 'B' || type_vehicle == 'b')
		{
			if (convert_to_hour < 2)
				cout << bus_1;
			else
				cout << bus_2;
		}
		else {
			cout << "Invalid \n\n";
		}
		cout << "\nPENALTY FARE     RM  0\n";

		cout << "              ------------\n";

		cout << "TOTAL CHARGE     RM  ";
		if (type_vehicle == 'C' || type_vehicle == 'c')
		{
			if (convert_to_hour < 2)
				cout << car_1;
			else
				cout << car_2;
		}
		else if (type_vehicle == 'V' || type_vehicle == 'v')
		{
			if (convert_to_hour < 2)
				cout << van_1;
			else
				cout << van_2;
		}
		else if (convert_to_hour == 'B' || type_vehicle == 'b')
		{
			if (convert_to_hour < 2)
				cout << bus_1;
			else
				cout << bus_2;
		}
		else {
			cout << "Invalid \n\n";
		}
	}

	cout << "\n              ------------\n";

	return 0;
}