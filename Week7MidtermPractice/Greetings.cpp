#include "Greetings.h"
#include <iostream>
#include <string>
using namespace std;

Greetings::Greetings(string n, int t)
{
	this->name = n;
	this->temperature = t;
}
string Greetings::CreateMessage()
{
	if (this->temperature >= 90)
	{
		return "It is HOT!";
	}
	else if (this->temperature >= 80)
	{
		return "It is a little hot";
	}
	else if (this->temperature >= 70)
	{
		return "It is Cool";
	}
	else if (this->temperature >= 40)
	{
		return "It is getting cold";
	}
	else
	{
		return "It is Cold";
	}
}

void Greetings::PrintMessage()
{
	cout << "   Hello, " << this->name << "   The Temperature is   " <<   this->temperature  << "      degrees. " <<    CreateMessage()   << endl;
}