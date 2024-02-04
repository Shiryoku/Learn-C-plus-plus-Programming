// WAN AHMAD NURULLAH
// BI23110062

#include <iostream>

using namespace std;

void calculateScore(int);


int main() {

	signed short int number;
	
	cout << " Enter a test score ( -1 to stop ) : ";
	cin >> number;

	calculateScore(number);
	return 0;
}


void calculateScore(int number) {

	int loop = 0, sum_score = number, lowest_number = number;

	while (loop != -1) {
		cout << " Enter a test score ( -1 to stop ) : ";
		cin >> number;

		if (number != -1) {

			if (number < lowest_number)
			{
				lowest_number = number;
			}

			sum_score = sum_score + number;
		}
		else {
			cout << " The Lowest test score : " << lowest_number << endl;
			cout << " The Sum of the test score : " << sum_score << endl;
			loop = -1;
		}

	}

}