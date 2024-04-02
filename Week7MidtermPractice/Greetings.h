#pragma once
#include <iostream>
#include <string>
using namespace std;

	class Greetings
{
// private stuff
private:
	string name;
	int temperature;
	string CreateMessage();

// public stuff
public:
	Greetings(string, int);
	void PrintMessage();

};

