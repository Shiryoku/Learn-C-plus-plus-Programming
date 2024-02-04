//WAN AHMAD NURULLAH 
//BI23110062

#include <iostream>
#include <fstream>
#include <string>

using namespace std;


void reversedString(string& str) {
    int start = 0;
    int end = str.length() - 1;

    while (start < end) {

        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
    
        
        start++;
        end--;
    }
}





int main()
{
	string input, output, statement;
	int entering = 1;
	int check;

	//Declaration for ofstream
	ofstream update;
	//Declaration for ifstream
	ifstream read;

	//Prompt to user
	cout << "Please enter a file name for input file : ";
	cin >> input;

	// Input file paths
	string inputFilePath = input + ".txt";

	//Making of the input file and updating
	update.open(inputFilePath);
	cout << "Please enter your information/statements (Enter a dot to stop) : \n";
	while (entering == 1)
	{
		getline(cin, statement);
		update << statement << "\n";

		check = statement.find(".");

		if (check != -1)
		{
			entering = 0;
		}
	}
	update.close();

	//Prompt to user
	cout << "Please enter a file name for output file : ";
	cin >> output;

	//Output file paths
	string outputFilePath = output + ".txt";

	// Open the output file
	read.open(inputFilePath);
	update.open(outputFilePath);

	//Reading and taking each line
	string line;
	string reversed;
	while (getline(read, line))
	{
		//Reversing the string
		reversedString(line);

		//Updating output file
		update << line << endl;

	}

	update.close();
	read.close();
	read.open(outputFilePath);

	//Printing the reversed
	string texts;
	while (getline(read, texts))
	{
		cout << texts << endl;
	}

	return 0;
}

