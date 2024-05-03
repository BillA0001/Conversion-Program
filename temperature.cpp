//Option 9: Temperature option 1
double celsiustofahrenheit(double celsius)
{
	cout << "enter value in celsius: ";
	double fahrenheit;
	cin >> celsius;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in celsius: ";
		cin >> celsius;
	}
	fahrenheit = celsius * 9 / 5 + 32;
	cout << fahrenheit << " \370f." << endl;
	return fahrenheit;
}
double celsiustokelvin(double celsius)
{
	cout << "enter value in celsius: ";
	double kelvin;
	cin >> celsius;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in celsius: ";
		cin >> celsius;
	}
	kelvin = celsius + 273.15;
	cout << kelvin << " kelvin." << endl;
	return kelvin;
}
double celsiustorankine(double celsius)
{
	cout << "enter value in celsius: ";
	double rankine;
	cin >> celsius;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in celsius: ";
		cin >> celsius;
	}
	rankine = (celsius + 273.15) * 9 / 5;
	cout << rankine << " \370ra." << endl;
	return rankine;
}
double celsiustoreaumur(double celsius)
{
	cout << "enter value in celsius: ";
	double reaumur;
	cin >> celsius;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in celsius: ";
		cin >> celsius;
	}
	reaumur = celsius * 0.8;
	cout << reaumur << " \370re." << endl;
	return reaumur;
}
//temperature option 2
double fahrenheittocelsius(double fahrenheit)
{
	cout << "enter value in fahrenheit: ";
	double celsius;
	cin >> fahrenheit;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in fahrenheit: ";
		cin >> fahrenheit;
	}
	celsius = (fahrenheit - 32) * 5 / 9;
	cout << celsius << " \370c." << endl;
	return celsius;
}
double fahrenheittokelvin(double fahrenheit)
{
	cout << "enter value in fahrenheit: ";
	double kelvin;
	cin >> fahrenheit;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in fahrenheit: ";
		cin >> fahrenheit;
	}
	kelvin = (fahrenheit + 459.67) * 5 / 9;
	cout << kelvin << " kelvin." << endl;
	return kelvin;
}
double fahrenheittorankine(double fahrenheit)
{
	cout << "enter value in fahrenheit: ";
	double rankine;
	cin >> fahrenheit;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in fahrenheit: ";
		cin >> fahrenheit;
	}
	rankine = (fahrenheit + 459.67);
	cout << rankine << " \370ra." << endl;
	return rankine;
}
double fahrenheittoreaumur(double fahrenheit)
{
	cout << "enter value in fahrenheit: ";
	double reaumur;
	cin >> fahrenheit;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in fahrenheit: ";
		cin >> fahrenheit;
	}
	reaumur = (fahrenheit - 32) / 2.25;
	cout << reaumur << " \370re." << endl;
	return reaumur;
}
//temperature option 3
double kelvintocelsius(double kelvin)
{
	cout << "enter value in kelvin: ";
	double celsius;
	cin >> kelvin;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kelvin: ";
		cin >> kelvin;
	}
	celsius = (kelvin - 273.15);
	cout << celsius << " \370c." << endl;
	return celsius;
}
double kelvintofahrenheit(double kelvin)
{
	cout << "enter value in kelvin: ";
	double fahrenheit;
	cin >> kelvin;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kelvin: ";
		cin >> kelvin;
	}
	fahrenheit = (kelvin * 9 / 5 - 459.67);
	cout << fahrenheit << " \370f." << endl;
	return fahrenheit;
}
double kelvintorankine(double kelvin)
{
	cout << "enter value in kelvin: ";
	double rankine;
	cin >> kelvin;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kelvin: ";
		cin >> kelvin;
	}
	rankine = kelvin * 1.8;
	cout << rankine << " \370ra." << endl;
	return rankine;
}
double kelvintoreaumur(double kelvin)
{
	cout << "enter value in kelvin: ";
	double reaumur;
	cin >> kelvin;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kelvin: ";
		cin >> kelvin;
	}
	reaumur = (kelvin - 273.15) * 0.8;
	cout << reaumur << " \370re." << endl;
	return reaumur;
}
//temperature option 4
double rankinetocelsius(double rankine)
{
	cout << "enter value in rankine: ";
	double celsius;
	cin >> rankine;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in rankine: ";
		cin >> rankine;
	}
	celsius = (rankine - 491.67) * 5 / 9;
	cout << celsius << " \370c." << endl;
	return celsius;
}
double rankinetofahrenheit(double rankine)
{
	cout << "enter value in rankine: ";
	double fahrenheit;
	cin >> rankine;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in rankine: ";
		cin >> rankine;
	}
	fahrenheit = rankine - 459.67;
	cout << fahrenheit << " \370f." << endl;
	return fahrenheit;
}
double rankinetokelvin(double rankine)
{
	cout << "enter value in rankine: ";
	double kelvin;
	cin >> rankine;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in rankine: ";
		cin >> rankine;
	}
	kelvin = rankine * 5 / 9;
	cout << kelvin << " kelvin." << endl;
	return kelvin;
}
double rankinetoreaumur(double rankine)
{
	cout << "enter value in rankine: ";
	double reaumur;
	cin >> rankine;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in rankine: ";
		cin >> rankine;
	}
	reaumur = (rankine - 491.67) * 4 / 9;
	cout << reaumur << " \370re." << endl;
	return reaumur;
}
//temperature option 5
double reaumurtocelsius(double reaumur)
{
	cout << "enter value in reaumur: ";
	double celsius;
	cin >> reaumur;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in reaumur: ";
		cin >> reaumur;
	}
	celsius = reaumur * 5 / 4;
	cout << celsius << " \370c." << endl;
	return celsius;
}
double reaumurtofahrenheit(double reaumur)
{
	cout << "enter value in reaumur: ";
	double fahrenheit;
	cin >> reaumur;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in reaumur: ";
		cin >> reaumur;
	}
	fahrenheit = reaumur * 9 / 4 + 32;
	cout << fahrenheit << " \370f." << endl;
	return fahrenheit;
}
double reaumurtokelvin(double reaumur)
{
	cout << "enter value in reaumur: ";
	double kelvin;
	cin >> reaumur;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in reaumur: ";
		cin >> reaumur;
	}
	kelvin = reaumur * 5 / 4 + 273.15;
	cout << kelvin << " kelvin." << endl;
	return kelvin;
}
double reaumurtorankine(double reaumur)
{
	cout << "enter value in reaumur: ";
	double rankine;
	cin >> reaumur;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in reaumur: ";
		cin >> reaumur;
	}
	rankine = (reaumur * 9 / 4 + 491.67);
	cout << rankine << " \370ra." << endl;
	return rankine;
}