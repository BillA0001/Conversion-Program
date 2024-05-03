//fuel efficiency option 1
double gallonspermiletomilespergallon(double gallonspermile)
{
	cout << "enter value in gallons per mile: ";
	double milespergallon;
	cin >> gallonspermile;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gallons per mile: ";
		cin >> gallonspermile;
	}
	milespergallon = 1 / gallonspermile;
	cout << milespergallon << " miles per gallon." << endl;
	return milespergallon;
}
double gallonspermiletokilometersperliter(double gallonspermile)
{
	cout << "enter value in gallons per mile: ";
	double kilometersperliter;
	cin >> gallonspermile;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gallons per mile: ";
		cin >> gallonspermile;
	}
	kilometersperliter = gallonspermile * 0.4251437074;
	cout << kilometersperliter << "kilometers per liter." << endl;
	return kilometersperliter;
}
double gallonspermiletolitersperhundredkilometers(double gallonspermile)
{
	cout << "enter value in gallons per mile: ";
	double litersperhundredkilometers;
	cin >> gallonspermile;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gallons per mile: ";
		cin >> gallonspermile;
	}
	litersperhundredkilometers = gallonspermile * 235.21458333333333333333333333333;
	cout << litersperhundredkilometers << "liters per one hundred kilometers." << endl;
	return litersperhundredkilometers;
}
//fuel efficiency option 2
double kilometersperlitertomilespergallon(double kilometersperliter)
{
	cout << "enter value in kilometers per liter: ";
	double milespergallon;
	cin >> kilometersperliter;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilometers per liter: ";
		cin >> kilometersperliter;
	}
	milespergallon = kilometersperliter * 2.3521458333;
	cout << milespergallon << " miles per gallon." << endl;
	return milespergallon;
}
double kilometersperlitertogallonspermile(double kilometersperliter)
{
	cout << "enter value in kilometers per liter: ";
	double gallonspermile;
	cin >> kilometersperliter;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilometers per liter: ";
		cin >> kilometersperliter;
	}
	gallonspermile = kilometersperliter * 0.4251437074;
	cout << gallonspermile << " gallons per mile." << endl;
	return gallonspermile;
}
double kilometersperlitertolitersperhundredkilometers(double kilometersperliter)
{
	cout << "enter value in kilometers per liter: ";
	double litersperhundredkilometers;
	cin >> kilometersperliter;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilometers per liter: ";
		cin >> kilometersperliter;
	}
	litersperhundredkilometers = 100 / kilometersperliter;
	cout << litersperhundredkilometers << " liters per one hundred kilometers." << endl;
	return litersperhundredkilometers;
}
//fuel efficiency option 3
double litersperhundredkilometerstomilespergallon(double litersperhundredkilometers)
{
	cout << "enter value in liters per one hundred kilometers: ";
	double milespergallon;
	cin >> litersperhundredkilometers;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in liters per one hundred kilometers: ";
		cin >> litersperhundredkilometers;
	}
	milespergallon = 282.4809363318222 / litersperhundredkilometers;
	cout << milespergallon << " miles per gallon." << endl;
	return milespergallon;
}
double litersperhundredkilometerstogallonspermile(double litersperhundredkilometers)
{
	cout << "enter value in liters per one hundred kilometers: ";
	double gallonspermile;
	cin >> litersperhundredkilometers;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in liters per one hundred kilometers: ";
		cin >> litersperhundredkilometers;
	}
	gallonspermile = litersperhundredkilometers * 0.004251437074;
	cout << gallonspermile << " gallons per mile." << endl;
	return gallonspermile;
}
double litersperhundredkilometerstokilometersperliter(double litersperhundredkilometers)
{
	cout << "enter value in liters per one hundred kilometers: ";
	double kilometersperliter;
	cin >> litersperhundredkilometers;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in liters per one hundred kilometers: ";
		cin >> litersperhundredkilometers;
	}
	kilometersperliter = litersperhundredkilometers / 100;
	cout << kilometersperliter << " kilometers per liter." << endl;
	return kilometersperliter;
}
//Fuel Efficiency option 4
double milespergallontogallonspermile(double milespergallon)
{
	cout << "enter value in miles per gallon: ";
	double gallonspermile;
	cin >> milespergallon;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in miles per gallon: ";
		cin >> milespergallon;
	}
	gallonspermile = 1 / milespergallon;
	cout << gallonspermile << " gallons per mile." << endl;
	return gallonspermile;
}
double milespergallontokilometersperliter(double milespergallon)
{
	cout << "enter value in miles per gallon: ";
	double kilometersperliter;
	cin >> milespergallon;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in miles per gallon: ";
		cin >> milespergallon;
	}
	kilometersperliter = milespergallon * 0.425143707430272;
	cout << kilometersperliter << " kilometers per liter." << endl;
	return kilometersperliter;
}
double milespergallontolitersperhundredkilometers(double milespergallon)
{
	cout << "enter value in miles per gallon: ";
	double litersperhundredkilometers;
	cin >> milespergallon;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in miles per gallon: ";
		cin >> milespergallon;
	}
	litersperhundredkilometers = 235.2145833333333 / milespergallon;
	cout << litersperhundredkilometers << " liters per one hundred kilometers." << endl;
	return litersperhundredkilometers;
}
