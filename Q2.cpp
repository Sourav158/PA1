#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){
    int choice = 6; 
    float temp_in, temp_out;
    string menu = "C to F Enter 0\nC to k Enter 1\nF to C Enter 2\nF to k Enter 3\nK to C Enter 4\nk to F Enter 5\n";
    
    while (choice > 5 || choice < 0){
        cout << menu;
        cin >> choice;
    }

    cout << "What is the temperature" << endl;
    cin >> temp_in;

    switch (choice)
    {
    case 0:
        temp_out = (temp_in * 1.8) + 32;
        cout << temp_in << " Celsius is " << temp_out << " Fahrenheit";
        break;
    case 1:
        temp_out = temp_in + 273.15;
        cout << temp_in << " Celsius is " << temp_out << " Kelvin";
        break;
    case 2: 
        temp_out = (temp_in - 32)*(0.56);
        cout << temp_in << " Fahrenheit is " << temp_out << " Celsius";
        break;
    case 3:
        temp_out = ((temp_in - 32)*(0.56)) + 273.15;
        cout << temp_in << " Fahrenheit is " << temp_out << " Kelvin";
        break;
    case 4:
        temp_out = temp_in - 273.15;
        cout << temp_in << " Kelvin is " << round(temp_out) << " Celsius";
        break;
    case 5:
        temp_out = ((temp_in - 273.15) * 1.8) + 32;
        cout << temp_in << " Kelvin is " << temp_out << " Fahrenheit";
        break;
    } 
}