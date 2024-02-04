//WAN AHMAD NURULLAH BIN WAN M. AZHARI
//BI23110062


#include <iostream>


using namespace std;

void setArray( int[],int);
int sumArray(int[], int);
int searchSmallest(int[], int);
void searchCompare(int[], int);
int searchLargestIndex(int[], int);

int main()
{
	const int size = 10;
	int space[size];
	setArray(space, size);
	cout << sumArray(space, size);
	cout << searchSmallest(space, size);
	searchCompare(space, size);
	cout << searchLargestIndex(space, size) << "]";
}


void setArray(int array[],int size) {

    for (int i = 0; i < size; i++)
    {
        cout << " Enter number " << i + 1 << " : ";
        cin >> array[i];
    }
}

int sumArray(int array[], int size) {
    
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum = sum + array[i];
    }
    cout << " The sum of the entered values : ";
    return sum;

}

int searchSmallest(int array[], int size)
{
	
	int smallest = array[0];


	for (int i = 0; i < size; i++)
	{
		if (array[i] < smallest)
		{
			smallest = array[i];
		}
	}
	cout << "\nThe smallest of the entered values is : ";

	return smallest;
}

void searchCompare(int array[], int size)
{
	
	cout << "\nThe entered value(s) that are smaller than 20 is :";

	
	for (int i = 0; i < size; i++)
	{
		if (array[i] < 20)
		{
			cout << " " << array[i];
		}
	}
}

int searchLargestIndex(int array[], int size)
{
	
	int largestindex = 0, largestvalue = array[0];

	
	for (int i = 0; i < size; i++)
	{
		if (array[i] > largestvalue)
		{
			largestindex = i;
		}
	}


	cout << "\nThe location of the largest value in the array of index [";

	return largestindex;
}



