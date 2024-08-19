#include<iostream>

using namespace std;
 
int main()
{
    float fahrenheit, celsius;
 
    cout << "Enter temperature in Celsius : ";
    cin >> celsius;
    fahrenheit = (celsius * 9.0) / 5.0 + 32;
    cout << celsius << "° C" << endl;
    cout << fahrenheit << "° F" << endl;
    return 0;
}