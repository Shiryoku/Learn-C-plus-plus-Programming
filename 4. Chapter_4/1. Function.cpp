// WAN AHMAD NURULLAH BIN WAN M. AZHARI
//BI23110063

#include <iostream>
using namespace std;

int sumOfDigit(int);

int main()
{
    unsigned short int number;
    


    cout << " Enter an  Integer : ";
    cin >> number;

    int output = sumOfDigit(number);

    cout << " The sum of the digit for this number : " << output << endl;



    return 0;
}

int sumOfDigit(int number) {

    unsigned short int a, b, c, d, sum;

    a = number % 10;
    b = number % 100 /10;
    c = number % 1000 /100;
    d = number % 10000 /1000;

    sum = a + b + c + d;


    return sum;
}
