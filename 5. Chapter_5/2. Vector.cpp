// WAN AHMAD NURULLAH BIN WAN M AZHARI
// BI23110062

#include <iostream>
#include <vector>
using namespace std;

vector<int> setVector()
{

	
	vector<int> input;
	{
		for (int i = 0; i < 10; i++)
		{
			int tempint;
			cin >> tempint;
			input.push_back(tempint);
		}
	}

	return input;
}


int sumVector(vector<int> input)
{
	
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		sum = sum + input[i];
	}

	return sum;
}


int searchSmallest(vector<int> input)
{
	
	int smallest = input[0];
	for (int i = 0; i < 10; i++)
	{
		if (input[i] < smallest)
		{
			smallest = input[i];
		}
	}

	return smallest;
}


int main()
{
	
	vector<int> numbers = setVector();
	cout << "The sum of the vectors are : " << sumVector(numbers);
	cout << "\nThe smallest value within the vectors are : " << searchSmallest(numbers);
}