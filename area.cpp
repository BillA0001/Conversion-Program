#include "stdafx.h"
#include <string>
#include <limits>
#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <fstream>
#include <stdio.h>
#include <ctype.h>
#include <iomanip>
#include <Windows.h>
#include <conio.h>
using namespace std;
//Area, Option 1
double acrestohectares(double acres)
{
	cout << "enter value in acres: ";
	double hectares;
	cin >> acres;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in acres: ";
		cin >> acres;
	}
	hectares = acres * 0.4046856422;
	cout << hectares << " hectares." << endl;
	return hectares;
}
double acrestosquarecentimeters(double acres)
{
	cout << "enter value in acres: ";
	double squarecentimeters;
	cin >> acres;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in acres: ";
		cin >> acres;
	}
	squarecentimeters = acres * 40468564.224;
	cout << squarecentimeters << " square centimeters." << endl;
	return squarecentimeters;
}
double acrestosquaredecameters(double acres)
{
	cout << "enter value in acres: ";
	double squaredecameters;
	cin >> acres;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in acres: ";
		cin >> acres;
	}
	squaredecameters = acres * 40.468564224;
	cout << squaredecameters << " square decimeters" << endl;
	return squaredecameters;
}
double acrestosquaredecimeters(double acres)
{
	cout << "enter value in acres: ";
	double squaredecimeters;
	cin >> acres;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in acres: ";
		cin >> acres;
	}
	squaredecimeters = acres * 404685.64224;
	cout << squaredecimeters << " square decimeters." << endl;
	return squaredecimeters;
}
double acrestosquarefeet(double acres)
{
	cout << "enter value in acres: ";
	double squarefeet;
	cin >> acres;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in acres: ";
		cin >> acres;
	}
	squarefeet = acres * 43560;
	cout << squarefeet << " square feet." << endl;
	return squarefeet;
}
double acrestosquareinches(double acres)
{
	cout << "enter value in acres: ";
	double squareinches;
	cin >> acres;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in acres: ";
		cin >> acres;
	}
	squareinches = acres * 6272640;
	cout << squareinches << " square inches." << endl;
	return squareinches;
}
double acrestosquarekilometers(double acres)
{
	cout << "enter value in acres: ";
	double squarekilometers;
	cin >> acres;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in acres: ";
		cin >> acres;
	}
	squarekilometers = acres * 0.004046856422;
	cout << squarekilometers << " square kilometers." << endl;
	return squarekilometers;
}
double acrestosquaremeters(double acres)
{
	cout << "enter value in acres: ";
	double squaremeters;
	cin >> acres;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in acres: ";
		cin >> acres;
	}
	squaremeters = acres * 4046.8564224;
	cout << squaremeters << " square meters." << endl;
	return squaremeters;
}
double acrestosquaremicrometers(double acres)
{
	cout << "enter value in acres: ";
	double squaremicrometers;
	cin >> acres;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in acres: ";
		cin >> acres;
	}
	squaremicrometers = acres * 4.046856422E+15;
	cout << squaremicrometers << " square micrometers." << endl;
	return squaremicrometers;
}
double acrestosquaremiles(double acres)
{
	cout << "enter value in acres: ";
	double squaremiles;
	cin >> acres;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in acres: ";
		cin >> acres;
	}
	squaremiles = acres * 0.0015625;
	cout << squaremiles << " square miles." << endl;
	return squaremiles;
}
double acrestosquaremillimeters(double acres)
{
	cout << "enter value in acres: ";
	double squaremillimeters;
	cin >> acres;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in acres: ";
		cin >> acres;
	}
	squaremillimeters = acres * 4046856422.4;
	cout << squaremillimeters << " square millimeters." << endl;
	return squaremillimeters;
}
double acrestosquarenanometers(double acres)
{
	cout << "enter value in acres: ";
	double squarenanometers;
	cin >> acres;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in acres: ";
		cin >> acres;
	}
	squarenanometers = acres * 4.0468564224E+21;
	cout << squarenanometers << " square nanometers." << endl;
	return squarenanometers;
}
double acrestosquareyards(double acres)
{
	cout << "enter value in acres: ";
	double squareyards;
	cin >> acres;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in acres: ";
		cin >> acres;
	}
	squareyards = acres * 4840;
	cout << squareyards << " square yards." << endl;
	return squareyards;
}
//area option 2
double hectarestoacres(double hectares)
{
	cout << "enter value in hectares: ";
	double acres;
	cin >> hectares;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in hectares: ";
		cin >> hectares;
	}
	acres = hectares * 2.471053814671653;
	cout << acres << " acres." << endl;
	return acres;
}
double hectarestosquarecentimeters(double hectares)
{
	cout << "enter value in hectares: ";
	double squarecentimeters;
	cin >> hectares;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in hectares: ";
		cin >> hectares;
	}
	squarecentimeters = hectares * 100000000;
	cout << squarecentimeters << " square centimeters." << endl;
	return squarecentimeters;
}
double hectarestosquaredecameters(double hectares)
{
	cout << "enter value in hectares: ";
	double squaredecameters;
	cin >> hectares;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in hectares: ";
		cin >> hectares;
	}
	squaredecameters = hectares * 100;
	cout << squaredecameters << " square decameters." << endl;
	return squaredecameters;
}
double hectarestosquaredecimeters(double hectares)
{
	cout << "enter value in hectares: ";
	double squaredecimeters;
	cin >> hectares;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in hectares: ";
		cin >> hectares;
	}
	squaredecimeters = hectares * 1000000;
	cout << squaredecimeters << " square decimeters." << endl;
	return squaredecimeters;
}
double hectarestosquarefeet(double hectares)
{
	cout << "enter value in hectares: ";
	double squarefeet;
	cin >> hectares;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in hectares: ";
		cin >> hectares;
	}
	squarefeet = hectares * 107639.10416709722;
	cout << squarefeet << " square feet." << endl;
	return squarefeet;
}
double hectarestosquareinches(double hectares)
{
	cout << "enter value in hectares: ";
	double squareinches;
	cin >> hectares;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in hectares: ";
		cin >> hectares;
	}
	squareinches = hectares * 15500031.000062;
	cout << squareinches << " square inches." << endl;
	return squareinches;
}
double hectarestosquarekilometers(double hectares)
{
	cout << "enter value in hectares: ";
	double squarekilometers;
	cin >> hectares;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in hectares: ";
		cin >> hectares;
	}
	squarekilometers = hectares * 0.01;
	cout << squarekilometers << " square kilometers." << endl;
	return squarekilometers;
}
double hectarestosquaremeters(double hectares)
{
	cout << "enter value in hectares: ";
	double squaremeters;
	cin >> hectares;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in hectares: ";
		cin >> hectares;
	}
	squaremeters = hectares * 10000;
	cout << squaremeters << " square meters." << endl;
	return squaremeters;
}
double hectarestosquaremicrometers(double hectares)
{
	cout << "enter value in hectares: ";
	double squaremicrometers;
	cin >> hectares;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in hectares: ";
		cin >> hectares;
	}
	squaremicrometers = hectares * 1e+16;
	cout << squaremicrometers << " square micrometers." << endl;
	return squaremicrometers;
}
double hectarestosquaremiles(double hectares)
{
	cout << "enter value in hectares: ";
	double squaremiles;
	cin >> hectares;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in hectares: ";
		cin >> hectares;
	}
	squaremiles = hectares * 0.003861021585424458;
	cout << squaremiles << " square miles." << endl;
	return squaremiles;
}
double hectarestosquaremillimeters(double hectares)
{
	cout << "enter value in hectares: ";
	double squaremillimeters;
	cin >> hectares;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in hectares: ";
		cin >> hectares;
	}
	squaremillimeters = hectares * 1e+10;
	cout << squaremillimeters << " square millimeters." << endl;
	return squaremillimeters;
}
double hectarestosquarenanometers(double hectares)
{
	cout << "enter value in hectares: ";
	double squarenanometers;
	cin >> hectares;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in hectares: ";
		cin >> hectares;
	}
	squarenanometers = hectares * 1e+22;
	cout << squarenanometers << " square nanometers." << endl;
	return squarenanometers;
}
double hectarestosquareyards(double hectares)
{
	cout << "enter value in hectares: ";
	double squareyards;
	cin >> hectares;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in hectares: ";
		cin >> hectares;
	}
	squareyards = hectares * 11959.900463010803;
	cout << squareyards << " square yards." << endl;
	return squareyards;
}
//area option 3
double squarecentimeterstoacres(double squarecentimeters)
{
	cout << "enter value in square centimeters: ";
	double acres;
	cin >> squarecentimeters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square centimeters: ";
		cin >> squarecentimeters;
	}
	acres = squarecentimeters * 2.4710538146716536e-8;
	cout << acres << " acres." << endl;
	return acres;

}
double squarecentimeterstohectares(double squarecentimeters)
{
	cout << "enter value in square centimeters: ";
	double hectares;
	cin >> squarecentimeters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square centimeters: ";
		cin >> squarecentimeters;
	}
	hectares = squarecentimeters * 1e-8;
	cout << hectares << " hectares." << endl;
	return hectares;
}
double squarecentimeterstosquaredecameters(double squarecentimeters)
{
	cout << "enter value in square centimeters: ";
	double squaredecameters;
	cin >> squarecentimeters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square centimeters: ";
		cin >> squarecentimeters;
	}
	squaredecameters = squarecentimeters * 0.000001;
	cout << squaredecameters << " square decameters." << endl;
	return squaredecameters;
}
double squarecentimeterstosquaredecimeters(double squarecentimeters)
{
	cout << "enter value in square centimeters: ";
	double squaredecimeters;
	cin >> squarecentimeters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square centimeters: ";
		cin >> squarecentimeters;
	}
	squaredecimeters = squarecentimeters * 0.01;
	cout << squaredecimeters << " square decimeters." << endl;
	return squaredecimeters;
}
double squarecentimeterstosquarefeet(double squarecentimeters)
{
	cout << "enter value in square centimeters: ";
	double squarefeet;
	cin >> squarecentimeters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square centimeters: ";
		cin >> squarecentimeters;
	}
	squarefeet = squarecentimeters * 0.0010763910416709721;
	cout << squarefeet << " square feet." << endl;
	return squarefeet;
}
double squarecentimeterstosquareinches(double squarecentimeters)
{
	cout << "enter value in square centimeters: ";
	double squareinches;
	cin >> squarecentimeters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square centimeters: ";
		cin >> squarecentimeters;
	}
	squareinches = squarecentimeters * 0.15500031000062;
	cout << squareinches << " square inches." << endl;
	return squareinches;
}
double squarecentimeterstosquarekilometers(double squarecentimeters)
{
	cout << "enter value in square centimeters: ";
	double squarekilometers;
	cin >> squarecentimeters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square centimeters: ";
		cin >> squarecentimeters;
	}
	squarekilometers = squarecentimeters * 1e-10;
	cout << squarekilometers << " square kilometers." << endl;
	return squarekilometers;
}
double squarecentimeterstosquaremeters(double squarecentimeters)
{
	cout << "enter value in square centimeters: ";
	double squaremeters;
	cin >> squarecentimeters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square centimeters: ";
		cin >> squarecentimeters;
	}
	squaremeters = squarecentimeters * 0.0001;
	cout << squaremeters << " square meters." << endl;
	return squaremeters;
}
double squarecentimeterstosquaremicrometers(double squarecentimeters)
{
	cout << "enter value in square centimeters: ";
	double squaremicrometers;
	cin >> squarecentimeters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square centimeters: ";
		cin >> squarecentimeters;
	}
	squaremicrometers = squarecentimeters * 100000000;
	cout << squaremicrometers << " square micrometers." << endl;
	return squaremicrometers;
}
double squarecentimeterstosquaremiles(double squarecentimeters)
{
	cout << "enter value in square centimeters: ";
	double squaremiles;
	cin >> squarecentimeters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square centimeters: ";
		cin >> squarecentimeters;
	}
	squaremiles = squarecentimeters * 3.8610215854244583e-11;
	cout << squaremiles << " square miles." << endl;
	return squaremiles;
}
double squarecentimeterstosquaremillimeters(double squarecentimeters)
{
	cout << "enter value in square centimeters: ";
	double squaremillimeters;
	cin >> squarecentimeters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square centimeters: ";
		cin >> squarecentimeters;
	}
	squaremillimeters = squarecentimeters * 100.00000000000001;
	cout << squaremillimeters << " square millimeters." << endl;
	return squaremillimeters;
}
double squarecentimeterstosquarenanometers(double squarecentimeters)
{
	cout << "enter value in square centimeters: ";
	double squarenanometers;
	cin >> squarecentimeters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square centimeters: ";
		cin >> squarecentimeters;
	}
	squarenanometers = squarecentimeters * 1e+14;
	cout << squarenanometers << " square nanometers." << endl;
	return squarenanometers;
}
double squarecentimeterstosquareyards(double squarecentimeters)
{
	cout << "enter value in square centimeters: ";
	double squareyards;
	cin >> squarecentimeters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square centimeters: ";
		cin >> squarecentimeters;
	}
	squareyards = squarecentimeters * 0.00011959900463010803;
	cout << squareyards << " square yards." << endl;
	return squareyards;
}
//area option 4
double squaredecameterstoacres(double squaredecameters)
{
	cout << "enter value in square decameters: ";
	double acres;
	cin >> squaredecameters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square decameters: ";
		cin >> squaredecameters;
	}
	acres = squaredecameters * 0.024710538146716532;
	cout << acres << " acres." << endl;
	return acres;

}
double squaredecameterstohectares(double squaredecameters)
{
	cout << "enter value in square decameters: ";
	double hectares;
	cin >> squaredecameters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square decameters: ";
		cin >> squaredecameters;
	}
	hectares = squaredecameters * 0.01;
	cout << hectares << " hectares." << endl;
	return hectares;
}
double squaredecameterstosquarecentimeters(double squaredecameters)
{
	cout << "enter value in square decameters: ";
	double squarecentimeters;
	cin >> squaredecameters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square decameters: ";
		cin >> squaredecameters;

	}
	squarecentimeters = squaredecameters * 1000000;
	cout << squarecentimeters << " square centimeters." << endl;
	return squarecentimeters;
}
double squaredecameterstosquaredecimeters(double squaredecameters)
{
	cout << "enter value in square decameters: ";
	double squaredecimeters;
	cin >> squaredecameters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square decameters: ";
		cin >> squaredecameters;
	}
	squaredecimeters = squaredecameters * 10000;
	cout << squaredecimeters << " square decimeters." << endl;
	return squaredecimeters;
}
double squaredecameterstosquarefeet(double squaredecameters)
{
	cout << "enter value in square decameters: ";
	double squarefeet;
	cin >> squaredecameters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square decameters: ";
		cin >> squaredecameters;
	}
	squarefeet = squaredecameters * 1076.391041670972;
	cout << squarefeet << " square feet." << endl;
	return squarefeet;
}
double squaredecameterstosquareinches(double squaredecameters)
{
	cout << "enter value in square decameters: ";
	double squareinches;
	cin >> squaredecameters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square decameters: ";
		cin >> squaredecameters;
	}
	squareinches = squaredecameters * 155000.31000062;
	cout << squareinches << " square inches." << endl;
	return squareinches;
}
double squaredecameterstosquarekilometers(double squaredecameters)
{
	cout << "enter value in square decameters: ";
	double squarekilometers;
	cin >> squaredecameters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square decameters: ";
		cin >> squaredecameters;
	}
	squarekilometers = squaredecameters * 0.0001;
	cout << squarekilometers << " square kilometers." << endl;
	return squarekilometers;
}
double squaredecameterstosquaremeters(double squaredecameters)
{
	cout << "enter value in square decameters: ";
	double squaremeters;
	cin >> squaredecameters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square decameters: ";
		cin >> squaredecameters;
	}
	squaremeters = squaredecameters * 100;
	cout << squaremeters << " square meters." << endl;
	return squaremeters;
}
double squaredecameterstosquaremicrometers(double squaredecameters)
{
	cout << "enter value in square decameters: ";
	double squaremicrometers;
	cin >> squaredecameters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square decameters: ";
		cin >> squaredecameters;
	}
	squaremicrometers = squaredecameters * 1e+14;
	cout << squaremicrometers << " square micrometers." << endl;
	return squaremicrometers;
}
double squaredecameterstosquaremiles(double squaredecameters)
{
	cout << "enter value in square decameters: ";
	double squaremiles;
	cin >> squaredecameters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square decameters: ";
		cin >> squaredecameters;
	}
	squaremiles = squaredecameters * 0.000038610215854244585;
	cout << squaremiles << " square miles." << endl;
	return squaremiles;
}
double squaredecameterstosquaremillimeters(double squaredecameters)
{
	cout << "enter value in square decameters: ";
	double squaremillimeters;
	cin >> squaredecameters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square decameters: ";
		cin >> squaredecameters;
	}
	squaremillimeters = squaredecameters * 1e+8;
	cout << squaremillimeters << " square millimeters." << endl;
	return squaremillimeters;
}
double squaredecameterstosquarenanometers(double squaredecameters)
{
	cout << "enter value in square decameters: ";
	double squarenanometers;
	cin >> squaredecameters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square decameters: ";
		cin >> squaredecameters;
	}
	squarenanometers = squaredecameters * 1e+20;
	cout << squarenanometers << " square nanometers." << endl;
	return squarenanometers;
}
double squaredecameterstosquareyards(double squaredecameters)
{
	cout << "enter value in square decameters: ";
	double squareyards;
	cin >> squaredecameters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square decameters: ";
		cin >> squaredecameters;
	}
	squareyards = squaredecameters * 119.59900463010803;
	cout << squareyards << " square yards." << endl;
	return squareyards;
}
//area option 5
double squaredecimeterstoacres(double squaredecimeters)
{
	cout << "enter value in square decimeters : ";
	double acres;
	cin >> squaredecimeters;
	while (!cin | cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square decimeters : ";
		cin >> squaredecimeters;
	}
	acres = squaredecimeters * 0.0000024710538146716534;
	cout << acres << " acres." << endl;
	return acres;

}
double squaredecimeterstohectares(double squaredecimeters)
{
	cout << "enter value in square decimeters : ";
	double hectares;
	cin >> squaredecimeters;
	while (!cin | cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square decimeters : ";
		cin >> squaredecimeters;
	}

	hectares = squaredecimeters * 0.000001;
	cout << hectares << " hectares." << endl;
	return hectares;
}
double squaredecimeterstosquarecentimeters(double squaredecimeters)
{
	cout << "enter value in square decimeters : ";
	double squarecentimeters;
	cin >> squaredecimeters;
	while (!cin | cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square decimeters : ";
		cin >> squaredecimeters;
	}
	squarecentimeters = squaredecimeters * 100;
	cout << squarecentimeters << " square centimeters." << endl;
	return squarecentimeters;
}
double squaredecimeterstosquaredecameters(double squaredecimeters)
{
	cout << "enter value in square decimeters : ";
	double squaredecameters;
	cin >> squaredecimeters;
	while (!cin | cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square decimeters : ";
		cin >> squaredecimeters;
	}
	squaredecameters = squaredecimeters * 0.0001;
	cout << squaredecameters << " square decameters." << endl;
	return squaredecameters;
}
double squaredecimeterstosquarefeet(double squaredecimeters)
{
	cout << "enter value in square decimeters : ";
	double squarefeet;
	cin >> squaredecimeters;
	while (!cin | cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square decimeters : ";
		cin >> squaredecimeters;
	}
	squarefeet = squaredecimeters * 0.10763910416709722;
	cout << squarefeet << " square feet." << endl;
	return squarefeet;
}
double squaredecimeterstosquareinches(double squaredecimeters)
{
	cout << "enter value in square decimeters : ";
	double squareinches;
	cin >> squaredecimeters;
	while (!cin | cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square decimeters : ";
		cin >> squaredecimeters;
	}
	squareinches = squaredecimeters * 15.500031000062;
	cout << squareinches << " square inches." << endl;
	return squareinches;
}
double squaredecimeterstosquarekilometers(double squaredecimeters)
{
	cout << "enter value in square decimeters : ";
	double squarekilometers;
	cin >> squaredecimeters;
	while (!cin | cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square decimeters : ";
		cin >> squaredecimeters;
	}
	squarekilometers = squaredecimeters * 1e-8;
	cout << squarekilometers << " square kilometers." << endl;
	return squarekilometers;
}
double squaredecimeterstosquaremeters(double squaredecimeters)
{
	cout << "enter value in square decimeters : ";
	double squaremeters;
	cin >> squaredecimeters;
	while (!cin | cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square decimeters : ";
		cin >> squaredecimeters;
	}
	squaremeters = squaredecimeters * 0.01;
	cout << squaremeters << " square meters." << endl;
	return squaremeters;
}
double squaredecimeterstosquaremicrometers(double squaredecimeters)
{
	cout << "enter value in square decimeters : ";
	double squaremicrometers;
	cin >> squaredecimeters;
	while (!cin | cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square decimeters : ";
		cin >> squaredecimeters;
	}
	squaremicrometers = squaredecimeters * 1e+10;
	cout << squaremicrometers << " square micrometers." << endl;
	return squaremicrometers;
}
double squaredecimeterstosquaremiles(double squaredecimeters)
{
	cout << "enter value in square decimeters : ";
	double squaremiles;
	cin >> squaredecimeters;
	while (!cin | cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square decimeters : ";
		cin >> squaredecimeters;
	}
	squaremiles = squaredecimeters * 3.861021585424458e-9;
	cout << squaremiles << " square miles." << endl;
	return squaremiles;
}
double squaredecimeterstosquaremillimeters(double squaredecimeters)
{
	cout << "enter value in square decimeters : ";
	double squaremillimeters;
	cin >> squaredecimeters;
	while (!cin | cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square decimeters : ";
		cin >> squaredecimeters;
	}
	squaremillimeters = squaredecimeters * 10000;
	cout << squaremillimeters << " square millimeters." << endl;
	return squaremillimeters;
}
double squaredecimeterstosquarenanometers(double squaredecimeters)
{
	cout << "enter value in square decimeters : ";
	double squarenanometers;
	cin >> squaredecimeters;
	while (!cin | cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square decimeters : ";
		cin >> squaredecimeters;
	}
	squarenanometers = squaredecimeters * 1e+16;
	cout << squarenanometers << " square nanometers." << endl;
	return squarenanometers;
}
double squaredecimeterstosquareyards(double squaredecimeters)
{
	cout << "enter value in square decimeters : ";
	double squareyards;
	cin >> squaredecimeters;
	while (!cin | cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square decimeters : ";
		cin >> squaredecimeters;
	}
	squareyards = squaredecimeters * 0.011959900463010802;
	cout << squareyards << " square yards." << endl;
	return squareyards;
}
//area option 6
double squarefeettoacres(double squarefeet)
{
	cout << "enter value in square feet: ";
	double acres;
	cin >> squarefeet;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square feet: ";
		cin >> squarefeet;
	}
	acres = squarefeet * 0.00002295684113865932;
	cout << acres << " acres." << endl;
	return acres;
}
double squarefeettohectares(double squarefeet)
{
	cout << "enter value in square feet: ";
	double hectares;
	cin >> squarefeet;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square feet: ";
		cin >> squarefeet;
	}
	hectares = squarefeet * 0.000009290304;
	cout << hectares << " hectares." << endl;
	return hectares;
}
double squarefeettosquarecentimeters(double squarefeet)
{
	cout << "enter value in square feet: ";
	double squarecentimeters;
	cin >> squarefeet;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square feet: ";
		cin >> squarefeet;
	}
	squarecentimeters = squarefeet * 929.0304;
	cout << squarecentimeters << " square centimeters." << endl;
	return squarecentimeters;
}
double squarefeettosquaredecameters(double squarefeet)
{
	cout << "enter value in square feet: ";
	double squaredecameters;
	cin >> squarefeet;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square feet: ";
		cin >> squarefeet;
	}
	squaredecameters = squarefeet * 0.0009290304000000001;
	cout << squaredecameters << " square decameters." << endl;
	return squaredecameters;
}
double squarefeettosquaredecimeters(double squarefeet)
{
	cout << "enter value in square feet: ";
	double squaredecimeters;
	cin >> squarefeet;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square feet: ";
		cin >> squarefeet;
	}
	squaredecimeters = squarefeet * 9.290304;
	cout << squaredecimeters << " square decimeters." << endl;
	return squaredecimeters;
}
double squarefeettosquareinches(double squarefeet)
{
	cout << "enter value in square feet: ";
	double squareinches;
	cin >> squarefeet;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square feet: ";
		cin >> squarefeet;
	}
	squareinches = squarefeet * 144;
	cout << squareinches << " square inches." << endl;
	return squareinches;
}
double squarefeettosquarekilometers(double squarefeet)
{
	cout << "enter value in square feet: ";
	double squarekilometers;
	cin >> squarefeet;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square feet: ";
		cin >> squarefeet;
	}
	squarekilometers = squarefeet * 9.290304000000001e-8;
	cout << squarekilometers << " square kilometers." << endl;
	return squarekilometers;
}
double squarefeettosquaremeters(double squarefeet)
{
	cout << "enter value in square feet: ";
	double squaremeters;
	cin >> squarefeet;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square feet: ";
		cin >> squarefeet;
	}
	squaremeters = squarefeet * 0.09290304;
	cout << squaremeters << " square meters." << endl;
	return squaremeters;
}
double squarefeettosquaremicrometers(double squarefeet)
{
	cout << "enter value in square feet: ";
	double squaremicrometers;
	cin >> squarefeet;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square feet: ";
		cin >> squarefeet;
	}
	squaremicrometers = squarefeet * 92903040000.00002;
	cout << squaremicrometers << " square micrometers." << endl;
	return squaremicrometers;
}
double squarefeettosquaremiles(double squarefeet)
{
	cout << "enter value in square feet: ";
	double squaremiles;
	cin >> squarefeet;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square feet: ";
		cin >> squarefeet;
	}
	squaremiles = squarefeet * 3.587006427915519e-8;
	cout << squaremiles << " square miles." << endl;
	return squaremiles;
}
double squarefeettosquaremillimeters(double squarefeet)
{
	cout << "enter value in square feet: ";
	double squaremillimeters;
	cin >> squarefeet;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square feet: ";
		cin >> squarefeet;
	}
	squaremillimeters = squarefeet * 92903.04000000001;
	cout << squaremillimeters << " square millimeters." << endl;
	return squaremillimeters;
}
double squarefeettosquarenanometers(double squarefeet)
{
	cout << "enter value in square feet: ";
	double squarenanometers;
	cin >> squarefeet;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square feet: ";
		cin >> squarefeet;
	}
	squarenanometers = squarefeet * 92903040000000000;
	cout << squarenanometers << " square nanometers." << endl;
	return squarenanometers;
}
double squarefeettosquareyards(double squarefeet)
{
	cout << "enter value in square feet: ";
	double squareyards;
	cin >> squarefeet;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square feet: ";
		cin >> squarefeet;
	}
	squareyards = squarefeet * 0.11111111111111112;
	cout << squareyards << " square yards." << endl;
	return squareyards;
}
//area option 7
double squareinchestoacres(double squareinches)
{
	cout << "enter value in square inches: ";
	double acres;
	cin >> squareinches;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square inches: ";
		cin >> squareinches;
	}
	acres = squareinches * 1.5942250790735638e-7;
	cout << acres << " acres." << endl;
	return acres;
}
double squareinchestohectares(double squareinches)
{
	cout << "enter value in square inches: ";
	double hectares;
	cin >> squareinches;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square inches: ";
		cin >> squareinches;
	}
	hectares = squareinches * 6.4516e-8;
	cout << hectares << " hectares." << endl;
	return hectares;
}
double squareinchestosquarecentimeters(double squareinches)
{
	cout << "enter value in square inches: ";
	double squarecentimeters;
	cin >> squareinches;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square inches: ";
		cin >> squareinches;
	}
	squarecentimeters = squareinches * 6.451599999999999;
	cout << squarecentimeters << " square centimeters." << endl;
	return squarecentimeters;
}
double squareinchestosquaredecameters(double squareinches)
{
	cout << "enter value in square inches: ";
	double squaredecameters;
	cin >> squareinches;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square inches: ";
		cin >> squareinches;
	}
	squaredecameters = squareinches * 0.0000064516;
	cout << squaredecameters << " square decameters." << endl;
	return squaredecameters;
}
double squareinchestosquaredecimeters(double squareinches)
{
	cout << "enter value in square inches: ";
	double squaredecimeters;
	cin >> squareinches;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square inches: ";
		cin >> squareinches;
	}
	squaredecimeters = squareinches * 0.06451599999999999;
	cout << squaredecimeters << " square decimeters." << endl;
	return squaredecimeters;
}
double squareinchestosquarefeet(double squareinches)
{
	cout << "enter value in square inches: ";
	double squarefeet;
	cin >> squareinches;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square inches: ";
		cin >> squareinches;
	}
	squarefeet = squareinches * 0.006944444444444444;
	cout << squarefeet << " square feet." << endl;
	return squarefeet;
}
double squareinchestosquarekilometers(double squareinches)
{
	cout << "enter value in square inches: ";
	double squarekilometers;
	cin >> squareinches;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square inches: ";
		cin >> squareinches;
	}
	squarekilometers = squareinches * 6.4516e-10;
	cout << squarekilometers << " square kilometers." << endl;
	return squarekilometers;
}
double squareinchestosquaremeters(double squareinches)
{
	cout << "enter value in square inches: ";
	double squaremeters;
	cin >> squareinches;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square inches: ";
		cin >> squareinches;
	}
	squaremeters = squareinches * 0.00064516;
	cout << squaremeters << " square meters." << endl;
	return squaremeters;
}
double squareinchestosquaremicrometers(double squareinches)
{
	cout << "enter value in square inches: ";
	double squaremicrometers;
	cin >> squareinches;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square inches: ";
		cin >> squareinches;
	}
	squaremicrometers = squareinches * 645160000;
	cout << squaremicrometers << " square micrometers." << endl;
	return squaremicrometers;
}
double squareinchestosquaremiles(double squareinches)
{
	cout << "enter value in square inches: ";
	double squaremiles;
	cin >> squareinches;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square inches: ";
		cin >> squareinches;
	}
	squaremiles = squareinches * 2.4909766860524435e-10;
	cout << squaremiles << " square miles." << endl;
	return squaremiles;
}
double squareinchestosquaremillimeters(double squareinches)
{
	cout << "enter value in square inches: ";
	double squaremillimeters;
	cin >> squareinches;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square inches: ";
		cin >> squareinches;
	}
	squaremillimeters = squareinches * 645.16;
	cout << squaremillimeters << " square millimeters." << endl;
	return squaremillimeters;
}
double squareinchestosquarenanometers(double squareinches)
{
	cout << "enter value in square inches: ";
	double squarenanometers;
	cin >> squareinches;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square inches: ";
		cin >> squareinches;
	}
	squarenanometers = squareinches * 645159999999999.9;
	cout << squarenanometers << " square nanometers." << endl;
	return squarenanometers;
}
double squareinchestosquareyards(double squareinches)
{
	cout << "enter value in square inches: ";
	double squareyards;
	cin >> squareinches;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square inches: ";
		cin >> squareinches;
	}
	squareyards = squareinches * 0.0007716049382716049;
	cout << squareyards << " square yards." << endl;
	return squareyards;
}
//area option 8
double squarekilometerstoacres(double squarekilometers)
{
	cout << "enter value in square kilometers: ";
	double acres;
	cin >> squarekilometers;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square kilometers: ";
		cin >> squarekilometers;
	}
	acres = squarekilometers * 247.10538146716533;
	cout << acres << " acres." << endl;
	return acres;
}
double squarekilometerstohectares(double squarekilometers)
{
	cout << "enter value in square kilometers: ";
	double hectares;
	cin >> squarekilometers;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square kilometers: ";
		cin >> squarekilometers;
	}
	hectares = squarekilometers * 6.4516e-8;
	cout << hectares << " hectares." << endl;
	return hectares;
}
double squarekilometerstosquarecentimeters(double squarekilometers)
{
	cout << "enter value in square kilometers: ";
	double squarecentimeters;
	cin >> squarekilometers;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square kilometers: ";
		cin >> squarekilometers;
	}
	squarecentimeters = squarekilometers * 10000000000;
	cout << squarecentimeters << " square centimeters." << endl;
	return squarecentimeters;
}
double squarekilometerstosquaredecameters(double squarekilometers)
{
	cout << "enter value in square kilometers: ";
	double squaredecameters;
	cin >> squarekilometers;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square kilometers: ";
		cin >> squarekilometers;
	}
	squaredecameters = squarekilometers * 10000;
	cout << squaredecameters << " square decameters." << endl;
	return squaredecameters;
}
double squarekilometerstosquaredecimeters(double squarekilometers)
{
	cout << "enter value in square kilometers: ";
	double squaredecimeters;
	cin >> squarekilometers;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square kilometers: ";
		cin >> squarekilometers;
	}
	squaredecimeters = squarekilometers * 100000000;
	cout << squaredecimeters << " square decimeters." << endl;
	return squaredecimeters;
}
double squarekilometerstosquarefeet(double squarekilometers)
{
	cout << "enter value in square kilometers: ";
	double squarefeet;
	cin >> squarekilometers;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square kilometers: ";
		cin >> squarekilometers;
	}
	squarefeet = squarekilometers * 10763910.416709721;
	cout << squarefeet << " square feet." << endl;
	return squarefeet;
}
double squarekilometerstosquareinches(double squarekilometers)
{
	cout << "enter value in square kilometers: ";
	double squareinches;
	cin >> squarekilometers;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square kilometers: ";
		cin >> squarekilometers;
	}
	squareinches = squarekilometers * 1550003100.0062;
	cout << squareinches << " square inches." << endl;
	return squareinches;
}
double squarekilometerstosquaremeters(double squarekilometers)
{
	cout << "enter value in square kilometers: ";
	double squaremeters;
	cin >> squarekilometers;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square kilometers: ";
		cin >> squarekilometers;
	}
	squaremeters = squarekilometers * 1000000;
	cout << squaremeters << " square meters." << endl;
	return squaremeters;
}
double squarekilometerstosquaremicrometers(double squarekilometers)
{
	cout << "enter value in square kilometers: ";
	double squaremicrometers;
	cin >> squarekilometers;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square kilometers: ";
		cin >> squarekilometers;
	}
	squaremicrometers = squarekilometers * 1000000000000000000;
	cout << squaremicrometers << " square micrometers." << endl;
	return squaremicrometers;
}
double squarekilometerstosquaremiles(double squarekilometers)
{
	cout << "enter value in square kilometers: ";
	double squaremiles;
	cin >> squarekilometers;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square kilometers: ";
		cin >> squarekilometers;
	}
	squaremiles = squarekilometers * 0.38610215854244584;
	cout << squaremiles << " square miles." << endl;
	return squaremiles;
}
double squarekilometerstosquaremillimeters(double squarekilometers)
{
	cout << "enter value in square kilometers: ";
	double squaremillimeters;
	cin >> squarekilometers;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square kilometers: ";
		cin >> squarekilometers;
	}
	squaremillimeters = squarekilometers * 1000000000000;
	cout << squaremillimeters << " square millimeters." << endl;
	return squaremillimeters;
}
double squarekilometerstosquarenanometers(double squarekilometers)
{
	cout << "enter value in square kilometers: ";
	double squarenanometers;
	cin >> squarekilometers;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square kilometers: ";
		cin >> squarekilometers;
	}
	squarenanometers = squarekilometers * 1e+24;
	cout << squarenanometers << " square nanometers." << endl;
	return squarenanometers;
}
double squarekilometerstosquareyards(double squarekilometers)
{
	cout << "enter value in square kilometers: ";
	double squareyards;
	cin >> squarekilometers;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square kilometers: ";
		cin >> squarekilometers;
	}
	squareyards = squarekilometers * 1195990.0463010804;
	cout << squareyards << " square yards." << endl;
	return squareyards;
}
//area option 9
double squaremeterstoacres(double squaremeters)
{
	cout << "enter value in square meters: ";
	double acres;
	cin >> squaremeters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square meters: ";
		cin >> squaremeters;
	}
	acres = squaremeters * 0.0002471053814671653;
	cout << acres << " acres." << endl;
	return acres;
}
double squaremeterstohectares(double squaremeters)
{
	cout << "enter value in square meters: ";
	double hectares;
	cin >> squaremeters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square meters: ";
		cin >> squaremeters;
	}
	hectares = squaremeters * 0.0001;
	cout << hectares << " hectares." << endl;
	return hectares;
}
double squaremeterstosquarecentimeters(double squaremeters)
{
	cout << "enter value in square meters: ";
	double squarecentimeters;
	cin >> squaremeters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square meters: ";
		cin >> squaremeters;
	}
	squarecentimeters = squaremeters * 10000;
	cout << squarecentimeters << "square centimeters" << endl;
	return squarecentimeters;
}
double squaremeterstosquaredecameters(double squaremeters)
{
	cout << "enter value in square meters: ";
	double squaredecameters;
	cin >> squaremeters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square meters: ";
		cin >> squaremeters;
	}
	squaredecameters = squaremeters * 0.01;
	cout << squaredecameters << " square decameters." << endl;
	return squaredecameters;
}
double squaremeterstosquaredecimeters(double squaremeters)
{
	cout << "enter value in square meters: ";
	double squaredecimeters;
	cin >> squaremeters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square meters: ";
		cin >> squaremeters;
	}
	squaredecimeters = squaremeters * 100;
	cout << squaredecimeters << " square decimeters." << endl;
	return squaredecimeters;
}
double squaremeterstosquarefeet(double squaremeters)
{
	cout << "enter value in square meters: ";
	double squarefeet;
	cin >> squaremeters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square meters: ";
		cin >> squaremeters;
	}
	squarefeet = squaremeters * 10.763910416709722;
	cout << squarefeet << " square feet." << endl;
	return squarefeet;
}
double squaremeterstosquareinches(double squaremeters)
{
	cout << "enter value in square meters: ";
	double squareinches;
	cin >> squaremeters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square meters: ";
		cin >> squaremeters;
	}
	squareinches = squaremeters * 1550.0031000062002;
	cout << squareinches << " square inches." << endl;
	return squareinches;
}
double squaremeterstosquarekilometers(double squaremeters)
{
	cout << "enter value in square meters: ";
	double squarekilometers;
	cin >> squaremeters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square meters: ";
		cin >> squaremeters;
	}
	squarekilometers = squaremeters * 0.000001;
	cout << squarekilometers << " square kilometers." << endl;
	return squarekilometers;
}
double squaremeterstosquaremicrometers(double squaremeters)
{
	cout << "enter value in square meters: ";
	double squaremicrometers;
	cin >> squaremeters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square meters: ";
		cin >> squaremeters;
	}
	squaremicrometers = squaremeters * 1000000000000;
	cout << squaremicrometers << " square micrometers." << endl;
	return squaremicrometers;
}
double squaremeterstosquaremiles(double squaremeters)
{
	cout << "enter value in square meters: ";
	double squaremiles;
	cin >> squaremeters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square meters: ";
		cin >> squaremeters;
	}
	squaremiles = squaremeters * 3.861021585424458e-7;
	cout << squaremiles << " square miles." << endl;
	return squaremiles;
}
double squaremeterstosquaremillimeters(double squaremeters)
{
	cout << "enter value in square meters: ";
	double squaremillimeters;
	cin >> squaremeters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square meters: ";
		cin >> squaremeters;
	}
	squaremillimeters = squaremeters * 1000000;
	cout << squaremillimeters << " square millimeters." << endl;
	return squaremillimeters;
}
double squaremeterstosquarenanometers(double squaremeters)
{
	cout << "enter value in square meters: ";
	double squarenanometers;
	cin >> squaremeters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square meters: ";
		cin >> squaremeters;
	}
	squarenanometers = squaremeters * 1e+18;
	cout << squarenanometers << " square nanometers." << endl;
	return squarenanometers;
}
double squaremeterstosquareyards(double squaremeters)
{
	cout << "enter value in square meters: ";
	double squareyards;
	cin >> squaremeters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square meters: ";
		cin >> squaremeters;
	}
	squareyards = squaremeters * 1.1959900463010802;
	cout << squareyards << " square yards." << endl;
	return squareyards;
}
//area option 10
double squaremicrometerstoacres(double squaremicrometers)
{
	cout << "enter value in square micrometers: ";
	double acres;
	cin >> squaremicrometers;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square micrometers: ";
		cin >> squaremicrometers;
	}
	acres = squaremicrometers * 2.4710538146716535e-16;
	cout << acres << " acres." << endl;
	return acres;
}
double squaremicrometerstohectares(double squaremicrometers)
{
	cout << "enter value in square micrometers: ";
	double hectares;
	cin >> squaremicrometers;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square micrometers: ";
		cin >> squaremicrometers;
	}
	hectares = squaremicrometers * 1e-16;
	cout << hectares << " hectares." << endl;
	return hectares;
}
double squaremicrometerstosquarecentimeters(double squaremicrometers)
{
	cout << "enter value in square micrometers: ";
	double squarecentimeters;
	cin >> squaremicrometers;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square micrometers: ";
		cin >> squaremicrometers;
	}
	squarecentimeters = squaremicrometers * 1e-10;
	cout << squarecentimeters << " square micrometers." << endl;
	return squarecentimeters;
}
double squaremicrometerstosquaredecameters(double squaremicrometers)
{
	cout << "enter value in square micrometers: ";
	double squaredecameters;
	cin >> squaremicrometers;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square micrometers: ";
		cin >> squaremicrometers;
	}
	squaredecameters = squaremicrometers * 1e-14;
	cout << squaredecameters << " square decameters." << endl;
	return squaredecameters;
}
double squaremicrometerstosquaredecimeters(double squaremicrometers)
{
	cout << "enter value in square micrometers: ";
	double squaredecimeters;
	cin >> squaremicrometers;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square micrometers: ";
		cin >> squaremicrometers;
	}
	squaredecimeters = squaremicrometers * 1e-12;
	cout << squaredecimeters << " square decimeters."<<endl;
	return squaredecimeters;
}
double squaremicrometerstosquarefeet(double squaremicrometers)
{
	cout << "enter value in square micrometers: ";
	double squarefeet;
	cin >> squaremicrometers;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square micrometers: ";
		cin >> squaremicrometers;
	}
	squarefeet = squaremicrometers * 1.0763910416709721e-11;
	cout << squarefeet << " square feet." << endl;
	return squarefeet;
}
double squaremicrometerstosquareinches(double squaremicrometers)
{
	cout << "enter value in square micrometers: ";
	double squareinches;
	cin >> squaremicrometers;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square micrometers: ";
		cin >> squaremicrometers;
	}
	squareinches = squaremicrometers * 1.5500031000062001e-9;
	cout << squareinches << " square inches." << endl;
	return squareinches;
}
double squaremicrometerstosquarekilometers(double squaremicrometers)
{
	cout << "enter value in square micrometers: ";
	double squarekilometers;
	cin >> squaremicrometers;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square micrometers: ";
		cin >> squaremicrometers;
	}
	squarekilometers = squaremicrometers * 1e-18;
	cout << squarekilometers << " square kilometers." << endl;
	return squarekilometers;
}
double squaremicrometerstosquaremeters(double squaremicrometers)
{
	cout << "enter value in square micrometers: ";
	double squaremeters;
	cin >> squaremicrometers;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square micrometers: ";
		cin >> squaremicrometers;
	}
	squaremeters = squaremicrometers * 1e-12;
	cout << squaremeters << " square meters." << endl;
	return squaremeters;
}
double squaremicrometerstosquaremiles(double squaremicrometers)
{
	cout << "enter value in square micrometers: ";
	double squaremiles;
	cin >> squaremicrometers;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square micrometers: ";
		cin >> squaremicrometers;
	}
	squaremiles = squaremicrometers * 3.8610215854244584e-19;
	cout << squaremiles << "square miles" << endl;
	return squaremiles;
}
double squaremicrometerstosquaremillimeters(double squaremicrometers)
{
	cout << "enter value in square micrometers: ";
	double squaremillimeters;
	cin >> squaremicrometers;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square micrometers: ";
		cin >> squaremicrometers;
	}
	squaremillimeters = squaremicrometers * 0.000001;
	cout << squaremillimeters << " square millimeters." << endl;
	return squaremillimeters;
}
double squaremicrometerstosquarenanometers(double squaremicrometers)
{
	cout << "enter value in square micrometers: ";
	double squarenanometers;
	cin >> squaremicrometers;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square micrometers: ";
		cin >> squaremicrometers;
	}
	squarenanometers = squaremicrometers * 1e+6;
	cout << squarenanometers << " square nanometers." << endl;
	return squarenanometers;
}
double squaremicrometerstosquareyards(double squaremicrometers)
{
	cout << "enter value in square micrometers: ";
	double squareyards;
	cin >> squaremicrometers;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square micrometers: ";
		cin >> squaremicrometers;
	}
	squareyards = squaremicrometers * 1.1959900463010802e-12;
	cout << squareyards << " square yards." << endl;
	return squareyards;
}
//area option 11
double squaremilestoacres(double squaremiles)
{
	cout << "enter value in square miles: ";
	double acres;
	cin >> squaremiles;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square miles: ";
		cin >> squaremiles;
	}
	acres = squaremiles * 640;
	cout << acres << " acres." << endl;
	return acres;

}
double squaremilestohectares(double squaremiles)
{
	cout << "enter value in square miles: ";
	double hectares;
	cin >> squaremiles;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square miles";
		cin >> squaremiles;
	}
	hectares = squaremiles * 258.99881103;
	cout << hectares << " hectares." << endl;
	return hectares;
}
double squaremilestosquarecentimeters(double squaremiles)
{
	cout << "enter value in square miles: ";
	double squarecentimeters;
	cin >> squaremiles;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square miles";
		cin >> squaremiles;
	}
	squarecentimeters = squaremiles * 25899881103.36;
	cout << squarecentimeters << " square centimeters." << endl;
	return squarecentimeters;
}
double squaremilestosquaredecameters(double squaremiles)
{
	cout << "enter value in square miles: ";
	double squaredecameters;
	cin >> squaremiles;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square miles";
		cin >> squaremiles;
	}
	squaredecameters = squaremiles * 25899.881103;
	cout << squaredecameters << " square decameters." << endl;
	return squaredecameters;
}
double squaremilestosquaredecimeters(double squaremiles)
{
	cout << "enter value in square miles: ";
	double squaredecimeters;
	cin >> squaremiles;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square miles";
		cin >> squaremiles;
	}
	squaredecimeters = squaremiles * 258998811.0336;
	cout << squaredecimeters << " square decimeters." << endl;
	return squaredecimeters;
}
double squaremilestosquarefeet(double squaremiles)
{
	cout << "enter value in square miles: ";
	double squarefeet;
	cin >> squaremiles;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square miles";
		cin >> squaremiles;
	}
	squarefeet = squaremiles * 27878400;
	cout << squarefeet << " square feet." << endl;
	return squarefeet;
}
double squaremilestosquareinches(double squaremiles)
{
	cout << "enter value in square miles: ";
	double squareinches;
	cin >> squaremiles;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square miles";
		cin >> squaremiles;
	}
	squareinches = squaremiles * 4014489600;
	cout << squareinches << " square inches." << endl;
	return squareinches;
}
double squaremilestosquarekilometers(double squaremiles)
{
	cout << "enter value in square miles: ";
	double squarekilometers;
	cin >> squaremiles;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square miles";
		cin >> squaremiles;
	}
	squarekilometers = squaremiles * 2.5899881103;
	cout << squarekilometers << " square kilometers." << endl;
	return squarekilometers;
}
double squaremilestosquaremeters(double squaremiles)
{
	cout << "enter value in square miles: ";
	double squaremeters;
	cin >> squaremiles;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square miles";
		cin >> squaremiles;
	}
	squaremeters = squaremiles * 2589988.1103;
	cout << squaremeters << " square meters." << endl;
	return squaremeters;
}
double squaremilestosquaremicrometers(double squaremiles)
{
	cout << "enter value in square miles: ";
	double squaremicrometers;
	cin >> squaremiles;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square miles";
		cin >> squaremiles;
	}
	squaremicrometers = squaremiles * 2589988110335972400;
	cout << squaremicrometers << " square micrometers." << endl;
	return squaremicrometers;
}
double squaremilestosquaremillimeters(double squaremiles)
{
	cout << "enter value in square miles: ";
	double squaremillimeters;
	cin >> squaremiles;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square miles";
		cin >> squaremiles;
	}
	squaremillimeters = squaremiles * 2589988110335.972400;
	cout << squaremillimeters << " square millimeters." << endl;
	return squaremillimeters;
}
double squaremilestosquarenanometers(double squaremiles)
{
	cout << "enter value in square miles: ";
	double squarenanometers;
	cin >> squaremiles;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square miles";
		cin >> squaremiles;
	}
	squarenanometers = squaremiles * 2.5899881103e+24;
	cout << squarenanometers << " square nanometers." << endl;
	return squarenanometers;
}
double squaremilestosquareyards(double squaremiles)
{
	cout << "enter value in square miles: ";
	double squareyards;
	cin >> squaremiles;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square miles";
		cin >> squaremiles;
	}
	squareyards = squaremiles * 3097600;
	cout << squareyards << " square yards." << endl;
	return squareyards;
}
//area option 12
double squaremillimeterstoacres(double squaremillimeters)
{
	cout << "enter value in square millimeters: ";
	double acres;
	cin >> squaremillimeters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square millimeters: ";
		cin >> squaremillimeters;
	}
	acres = squaremillimeters * 2.471053814671653e-10;
	cout << acres << " acres." << endl;
	return acres;
}
double squaremillimeterstohectares(double squaremillimeters)
{
	cout << "enter value in square millimeters: ";
	double hectares;
	cin >> squaremillimeters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square millimeters: ";
		cin >> squaremillimeters;
	}
	hectares = squaremillimeters * 1e-10;
	cout << hectares << " hectares." << endl;
	return hectares;
}
double squaremillimeterstosquarecentimeters(double squaremillimeters)
{
	cout << "enter value in square millimeters: ";
	double squarecentimeters;
	cin >> squaremillimeters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square millimeters: ";
		cin >> squaremillimeters;
	}
	squarecentimeters = squaremillimeters * 0.01;
	cout << squarecentimeters << " square centimeters." << endl;
	return squarecentimeters;
}
double squaremillimeterstosquaredecameters(double squaremillimeters)
{
	cout << "enter value in square millimeters: ";
	double squaredecameters;
	cin >> squaremillimeters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square millimeters: ";
		cin >> squaremillimeters;
	}
	squaredecameters = squaremillimeters * 0.00000001;
	cout << squaredecameters << " square decameters." << endl;
	return squaredecameters;
}
double squaremillimeterstosquaredecimeters(double squaremillimeters)
{
	cout << "enter value in square millimeters: ";
	double squaredecimeters;
	cin >> squaremillimeters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square millimeters: ";
		cin >> squaremillimeters;
	}
	squaredecimeters = squaremillimeters * 0.0001;
	cout << squaredecimeters << " square decimeters." << endl;
	return squaredecimeters;
}
double squaremillimeterstosquarefeet(double squaremillimeters)
{
	cout << "enter value in square millimeters: ";
	double squarefeet;
	cin >> squaremillimeters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square millimeters: ";
		cin >> squaremillimeters;
	}
	squarefeet = squaremillimeters * 0.00001076391;
	cout << squarefeet << " square feet." << endl;
	return squarefeet;
}
double squaremillimeterstosquareinches(double squaremillimeters)
{
	cout << "enter value in square millimeters: ";
	double squareinches;
	cin >> squaremillimeters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square millimeters: ";
		cin >> squaremillimeters;
	}
	squareinches = squaremillimeters * 0.0015500031;
	cout << squareinches << " square inches." << endl;
	return squareinches;
}
double squaremillimeterstosquarekilometers(double squaremillimeters)
{
	cout << "enter value in square millimeters: ";
	double squarekilometers;
	cin >> squaremillimeters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square millimeters: ";
		cin >> squaremillimeters;
	}
	squarekilometers = squaremillimeters * 0.000000000001;
	cout << squarekilometers << " square kilometers." << endl;
	return squarekilometers;
}
double squaremillimeterstosquaremeters(double squaremillimeters)
{
	cout << "enter value in square millimeters: ";
	double squaremeters;
	cin >> squaremillimeters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square millimeters: ";
		cin >> squaremillimeters;
	}
	squaremeters = squaremillimeters * 0.000001;
	cout << squaremeters << " square meters." << endl;
	return squaremeters;
}
double squaremillimeterstosquaremicrometers(double squaremillimeters)
{
	cout << "enter value in square millimeters: ";
	double squaremicrometers;
	cin >> squaremillimeters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square millimeters: ";
		cin >> squaremillimeters;
	}
	squaremicrometers = squaremillimeters * 1000000;
	cout << squaremicrometers << " square micrometers." << endl;
	return squaremicrometers;
}
double squaremillimeterstosquaremiles(double squaremillimeters)
{
	cout << "enter value in square millimeters: ";
	double squaremiles;
	cin >> squaremillimeters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square millimeters: ";
		cin >> squaremillimeters;
	}
	squaremiles = squaremillimeters * 3.86102e-13;
	cout << squaremiles << " square miles." << endl;
	return squaremiles;
}
double squaremillimeterstosquarenanometers(double squaremillimeters)
{
	cout << "enter value in square millimeters: ";
	double squarenanometers;
	cin >> squaremillimeters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square millimeters: ";
		cin >> squaremillimeters;
	}
	squarenanometers = squaremillimeters * 1e+12;
	cout << squarenanometers << " square nanometers." << endl;
	return squarenanometers;
}
double squaremillimeterstosquareyards(double squaremillimeters)
{
	cout << "enter value in square millimeters: ";
	double squareyards;
	cin >> squaremillimeters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square millimeters: ";
		cin >> squaremillimeters;
	}
	squareyards = squaremillimeters * 0.00000119599;
	cout << squareyards << " square yards." << endl;
	return squareyards;
}
//area option 13
double squarenanometerstoacres(double squarenanometers)
{
	cout << "enter value in square nanometers: ";
	double acres;
	cin >> squarenanometers;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square nanometers: ";
		cin >> squarenanometers;
	}
	acres = squarenanometers * 2.471053814671653e-22;
	cout << acres << " acres." << endl;
	return acres;
}
double squarenanometerstohectares(double squarenanometers)
{
	cout << "enter value in square nanometers: ";
	double hectares;
	cin >> squarenanometers;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square nanometers: ";
		cin >> squarenanometers;
	}
	hectares = squarenanometers * 1e-22;
	cout << hectares << " hectares." << endl;
	return hectares;
}
double squarenanometerstosquarecentimeters(double squarenanometers)
{
	cout << "enter value in square nanometers: ";
	double squarecentimeters;
	cin >> squarenanometers;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square nanometers: ";
		cin >> squarenanometers;
	}
	squarecentimeters = squarenanometers * 1e-14;
	cout << squarecentimeters << " square centimeters." << endl;
	return squarecentimeters;
}
double squarenanometerstosquaredecameters(double squarenanometers)
{
	cout << "enter value in square nanometers: ";
	double squaredecameters;
	cin >> squarenanometers;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square nanometers: ";
		cin >> squarenanometers;
	}
	squaredecameters = squarenanometers * 1e-20;
	cout << squaredecameters << " square decameters." << endl;
	return squaredecameters;
}
double squarenanometerstosquaredecimeters(double squarenanometers)
{
	cout << "enter value in square nanometers: ";
	double squaredecimeters;
	cin >> squarenanometers;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square nanometers: ";
		cin >> squarenanometers;
	}
	squaredecimeters = squarenanometers * 1e-16;
	cout << squaredecimeters << " square decimeters." << endl;
	return squaredecimeters;
}
double squarenanometerstosquarefeet(double squarenanometers)
{
	cout << "enter value in square nanometers: ";
	double squarefeet;
	cin >> squarenanometers;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square nanometers: ";
		cin >> squarenanometers;
	}
	squarefeet = squarenanometers * 1.0763910416709e-17;
	cout << squarefeet << " square feet." << endl;
	return squarefeet;
}
double squarenanometerstosquareinches(double squarenanometers)
{
	cout << "enter value in square nanometers: ";
	double squareinches;
	cin >> squarenanometers;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square nanometers: ";
		cin >> squarenanometers;
	}
	squareinches = squarenanometers * 1.5500031000062e-15;
	cout << squareinches << " square inches." << endl;
	return squareinches;
}
double squarenanometerstosquarekilometers(double squarenanometers)
{
	cout << "enter value in square nanometers: ";
	double squarekilometers;
	cin >> squarenanometers;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square nanometers: ";
		cin >> squarenanometers;
	}
	squarekilometers = squarenanometers * 1e-24;
	cout << squarekilometers << " square kilometers." << endl;
	return squarekilometers;
}
double squarenanometerstosquaremeters(double squarenanometers)
{
	cout << "enter value in square nanometers: ";
	double squaremeters;
	cin >> squarenanometers;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square nanometers: ";
		cin >> squarenanometers;
	}
	squaremeters = squarenanometers * 1e-18;
	cout << squaremeters << " square meters." << endl;
	return squaremeters;
}
double squarenanometerstosquaremicrometers(double squarenanometers)
{
	cout << "enter value in square nanometers: ";
	double squaremicrometers;
	cin >> squarenanometers;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square nanometers: ";
		cin >> squarenanometers;
	}
	squaremicrometers = squarenanometers * 0.000001;
	cout << squaremicrometers << " square micrometers." << endl;
	return squaremicrometers;
}
double squarenanometerstosquaremiles(double squarenanometers)
{
	cout << "enter value in square nanometers: ";
	double squaremiles;
	cin >> squarenanometers;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square nanometers: ";
		cin >> squarenanometers;
	}
	squaremiles = squarenanometers * 3.8610215854244587e-25;
	cout << squaremiles << " square miles." << endl;
	return squaremiles;
}
double squarenanometerstosquaremillimeters(double squarenanometers)
{
	cout << "enter value in square nanometers: ";
	double squaremillimeters;
	cin >> squarenanometers;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square nanometers: ";
		cin >> squarenanometers;
	}
	squaremillimeters = squarenanometers * 1e-12;
	cout << squaremillimeters << " square millimeters." << endl;
	return squaremillimeters;
}
double squarenanometerstosquareyards(double squarenanometers)
{
	cout << "enter value in square nanometers: ";
	double squareyards;
	cin >> squarenanometers;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square nanometers: ";
		cin >> squarenanometers;
	}
	squareyards = squarenanometers * 1.1959900463010802e-18;
	cout << squareyards << " square yards." << endl;
	return squareyards;
}
//area option 14
double squareyardstoacres(double squareyards)
{
	cout << "enter value in square yards: ";
	double acres;
	cin >> squareyards;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square yards: ";
		cin >> squareyards;
	}
	acres = squareyards * 0.00020661157024793388;
	cout << acres << " acres." << endl;
	return acres;
}
double squareyardstohectares(double squareyards)
{
	cout << "enter value in square yards: ";
	double hectares;
	cin >> squareyards;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square yards: ";
		cin >> squareyards;
	}
	hectares = squareyards * 0.000083612736;
	cout << hectares << " hectares." << endl;
	return hectares;
}
double squareyardstosquarecentimeters(double squareyards)
{
	cout << "enter value in square yards: ";
	double squarecentimeters;
	cin >> squareyards;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square yards: ";
		cin >> squareyards;
	}
	squarecentimeters = squareyards * 8361.2736;
	cout << squarecentimeters << " square centimeters." << endl;
	return squarecentimeters;
}
double squareyardstosquaredecameters(double squareyards)
{
	cout << "enter value in square yards: ";
	double squaredecameters;
	cin >> squareyards;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square yards: ";
		cin >> squareyards;
	}
	squaredecameters = squareyards * 0.0083612736;
	cout << squaredecameters << " square decameters." << endl;
	return squaredecameters;
}
double squareyardstosquaredecimeters(double squareyards)
{
	cout << "enter value in square yards: ";
	double squaredecimeters;
	cin >> squareyards;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square yards: ";
		cin >> squareyards;
	}
	squaredecimeters = squareyards * 83.612736;
	cout << squaredecimeters << " square decimeters." << endl;
	return squaredecimeters;
}
double squareyardstosquarefeet(double squareyards)
{
	cout << "enter value in square yards: ";
	double squarefeet;
	cin >> squareyards;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square yards: ";
		cin >> squareyards;
	}
	squarefeet = squareyards * 9;
	cout << squarefeet << " square feet." << endl;
	return squarefeet;
}
double squareyardstosquareinches(double squareyards)
{
	cout << "enter value in square yards: ";
	double squareinches;
	cin >> squareyards;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square yards: ";
		cin >> squareyards;
	}
	squareinches = squareyards * 1296;
	cout << squareinches << " square inches." << endl;
	return squareinches;
}
double squareyardstosquarekilometers(double squareyards)
{
	cout << "enter value in square yards: ";
	double squarekilometers;
	cin >> squareyards;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square yards: ";
		cin >> squareyards;
	}
	squarekilometers = squareyards * 8.3612736e-7;
	cout << squarekilometers << " square kilometers." << endl;
	return squarekilometers;
}
double squareyardstosquaremeters(double squareyards)
{
	cout << "enter value in square yards: ";
	double squaremeters;
	cin >> squareyards;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square yards: ";
		cin >> squareyards;
	}
	squaremeters = squareyards * 0.83612736;
	cout << squaremeters << " square meters." << endl;
	return squaremeters;
}
double squareyardstosquaremicrometers(double squareyards)
{
	cout << "enter value in square yards: ";
	double squaremicrometers;
	cin >> squareyards;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square yards: ";
		cin >> squareyards;
	}
	squaremicrometers = squareyards * 836127360000;
	cout << squaremicrometers << " square micrometers." << endl;
	return squaremicrometers;
}
double squareyardstosquaremiles(double squareyards)
{
	cout << "enter value in square yards: ";
	double squaremiles;
	cin >> squareyards;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square yards: ";
		cin >> squareyards;
	}
	squaremiles = squareyards * 3.228305785123967e-7;
	cout << squaremiles << " square miles." << endl;
	return squaremiles;
}
double squareyardstosquaremillimeters(double squareyards)
{
	cout << "enter value in square yards: ";
	double squaremillimeters;
	cin >> squareyards;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square yards: ";
		cin >> squareyards;
	}
	squaremillimeters = squareyards * 836127.36;
	cout << squaremillimeters << " square millimeters." << endl;
	return squaremillimeters;
}
double squareyardstosquarenanometers(double squareyards)
{
	cout << "enter value in square yards: ";
	double squarenanometers;
	cin >> squareyards;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in square yards: ";
		cin >> squareyards;
	}
	squarenanometers = squareyards * 836127360000000000;
	cout << squarenanometers << " square nanometers." << endl;
	return squarenanometers;
}
