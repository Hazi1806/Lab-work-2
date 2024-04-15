#include <iostream>
using namespace std;

// Function to Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9/5) + 32;
}

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

//declaration for covertedtemp
double convertedTemp;

int main ()
{
    double temperature;
    char scale;

    cout << " Enter Temperature: ";
    cin >> temperature;

    cout << " Enter Scale ( C for Celsius, F for Fahrenheit): ";
    cin >> scale;

    if (scale == 'C' || scale == 'c') {
        double convertedTemp = celsiusToFahrenheit(temperature);
        cout << "Converted temperature:" << convertedTemp << "F" << endl;
    }
    else if (scale == 'F' || scale == 'f') {
        double convertedTemp = fahrenheitToCelsius(temperature);
        cout << "Converted temperature: " << convertedTemp << "C" << endl;
    }
    else {
        cout << "You entered Invalid scale" << endl;
    }

    return 0;
}


