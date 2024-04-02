#include <iostream>
#include <string>
#include "Greetings.h"
using namespace std;

int main()
{
    string name;
    int temperature;
    cout << "Please Enter Your Name! \n";
    getline(cin, name);
    cout << "Enter the Temperature in F";
    cin >> temperature;
    Greetings braul(name, temperature);
    braul.PrintMessage();
}
