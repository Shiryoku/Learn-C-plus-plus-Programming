// WAN AHMAD NURULLAH BIN WAN M. AZHARI
//BI23110062

#include <iostream>
#include <fstream>
#include <string>

using namespace std;



int main()
{
    string message;

    ofstream update;
    update.open("streams.txt");
    update << " Wishing you all a very happy New Year! May your 2023 be filled with love and happiness!! \n";
    update.close();


    ifstream output;
    output.open("stream.txt");
    getline(output, message);
    cout << message;

    return 0;

}

