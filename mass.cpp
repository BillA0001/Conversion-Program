//Option 7: Mass option 1***
double gramstokilograms(double grams)
{
	cout << "enter value in grams: ";
	double kilograms;
	cin >> grams;
	while (!cin || cin.fail())
	{
		string junk;
		getline(cin, junk);
		cout << "enter value in grams: ";
		cin >> grams;
	}
	kilograms = grams * 0.001;
	cout << kilograms << " kilograms." << endl;
	return kilograms;
}
double gramstomicrograms(double grams)
{
	cout << "enter value in grams: ";
	double micrograms;
	cin >> grams;
	while (!cin || cin.fail())
	{
		string junk;
		getline(cin, junk);
		cout << "enter value in grams: ";
		cin >> grams;
	}
	micrograms = grams * 1000000;
	cout << micrograms << " micrograms." << endl;
	return micrograms;
}
double gramstomilligrams(double grams)
{
	cout << "enter value in grams: ";
	double milligrams;
	cin >> grams;
	while (!cin || cin.fail())
	{
		string junk;
		getline(cin, junk);
		cout << "enter value in grams: ";
		cin >> grams;
	}
	milligrams = grams * 1000;
	cout << milligrams << " milligrams." << endl;
	return milligrams;
}
double gramstoounces(double grams)
{
	cout << "enter value in grams: ";
	double ounces;
	cin >> grams;
	while (!cin || cin.fail())
	{
		string junk;
		getline(cin, junk);
		cout << "enter value in grams: ";
		cin >> grams;
	}
	ounces = grams * 0.0352739619495804141;
	cout << ounces << " ounces." << endl;
	return ounces;
}
double gramstopounds(double grams)
{
	cout << "enter value in grams: ";
	double pounds;
	cin >> grams;
	while (!cin || cin.fail())
	{
		string junk;
		getline(cin, junk);
		cout << "enter value in grams: ";
		cin >> grams;
	}
	pounds = grams * 0.00220462262184878;
	cout << pounds << " pounds." << endl;
	return pounds;
}
//mass option 2
double kilogramstograms(double kilograms)
{
	cout << "enter value in kilograms: " << endl;
	double grams;
	cin >> kilograms;
	while (!cin || cin.fail())
	{
		string junk;
		getline(cin, junk);
		cout << "enter value in kilograms: " << endl;
		cin >> kilograms;
	}
	grams = kilograms * 1000;
	cout << grams << " grams." << endl;
	return grams;
}
double kilogramstomicrograms(double kilograms)
{
	cout << "enter value in kilograms: " << endl;
	double micrograms;
	cin >> kilograms;
	while (!cin || cin.fail())
	{
		string junk;
		getline(cin, junk);
		cout << "enter value in kilograms: " << endl;
		cin >> kilograms;
	}
	micrograms = kilograms * 1000000000;
	cout << micrograms << " micrograms." << endl;
	return micrograms;
}
double kilogramstomilligrams(double kilograms)
{
	cout << "enter value in kilograms: " << endl;
	double milligrams;
	cin >> kilograms;
	while (!cin || cin.fail())
	{
		string junk;
		getline(cin, junk);
		cout << "enter value in kilograms: " << endl;
		cin >> kilograms;
	}
	milligrams = kilograms * 1000000;
	cout << milligrams << " milligrams." << endl;
	return milligrams;
}
double kilogramstoounces(double kilograms)
{
	cout << "enter value in kilograms: " << endl;
	double ounces;
	cin >> kilograms;
	while (!cin || cin.fail())
	{
		string junk;
		getline(cin, junk);
		cout << "enter value in kilograms: " << endl;
		cin >> kilograms;
	}
	ounces = kilograms * 35.27396194958;
	cout << ounces << " ounces." << endl;
	return ounces;
}
double kilogramstopounds(double kilograms)
{
	cout << "enter value in kilograms: " << endl;
	double pounds;
	cin >> kilograms;
	while (!cin || cin.fail())
	{
		string junk;
		getline(cin, junk);
		cout << "enter value in kilograms: " << endl;
		cin >> kilograms;
	}
	pounds = kilograms * 2.204622621848776;
	cout << pounds << " pounds." << endl;
	return pounds;
}
//mass option 3
double microgramstograms(double micrograms)
{
	cout << "enter value in micrograms: " << endl;
	double grams;
	cin >> micrograms;
	while (!cin || cin.fail())
	{
		string junk;
		getline(cin, junk);
		cout << "enter value in micrograms: " << endl;
		cin >> micrograms;
	}
	grams = micrograms * .000001;
	cout << grams << " grams." << endl;
	return grams;
}
double microgramstokilograms(double micrograms)
{
	cout << "enter value in micrograms: " << endl;
	double kilograms;
	cin >> micrograms;
	while (!cin || cin.fail())
	{
		string junk;
		getline(cin, junk);
		cout << "enter value in micrograms: " << endl;
		cin >> micrograms;
	}
	kilograms = micrograms * 0.000000001;
	cout << kilograms << " kilograms." << endl;
	return kilograms;
}
double microgramstomilligrams(double micrograms)
{
	cout << "enter value in micrograms: " << endl;
	double milligrams;
	cin >> micrograms;
	while (!cin || cin.fail())
	{
		string junk;
		getline(cin, junk);
		cout << "enter value in micrograms: " << endl;
		cin >> micrograms;
	}
	milligrams = micrograms * 0.001;
	cout << milligrams << " milligrams." << endl;
	return milligrams;
}
double microgramstoounces(double micrograms)
{
	cout << "enter value in micrograms: " << endl;
	double ounces;
	cin >> micrograms;
	while (!cin || cin.fail())
	{
		string junk;
		getline(cin, junk);
		cout << "enter value in micrograms: " << endl;
		cin >> micrograms;
	}
	ounces = micrograms * 0.000000035273961949580414063;
	cout << ounces << " ounces." << endl;
	return ounces;
}
double microgramstopounds(double micrograms)
{
	cout << "enter value in micrograms: " << endl;
	double pounds;
	cin >> micrograms;
	while (!cin || cin.fail())
	{
		string junk;
		getline(cin, junk);
		cout << "enter value in micrograms: " << endl;
		cin >> micrograms;
	}
	pounds = micrograms * 0.0000000022046226218487757813;
	cout << pounds << " pounds." << endl;
	return pounds;
}
//mass option 4
double milligramstograms(double milligrams)
{
	cout << "enter value in milligrams: " << endl;
	double grams;
	cin >> milligrams;
	while (!cin || cin.fail())
	{
		string junk;
		getline(cin, junk);
		cout << "enter value in milligrams: " << endl;
		cin >> milligrams;
	}
	grams = milligrams * 0.001;
	cout << grams << " grams." << endl;
	return grams;
}
double milligramstokilograms(double milligrams)
{
	cout << "enter value in milligrams: " << endl;
	double kilograms;
	cin >> milligrams;
	while (!cin || cin.fail())
	{
		string junk;
		getline(cin, junk);
		cout << "enter value in milligrams: " << endl;
		cin >> milligrams;
	}
	kilograms = milligrams * 0.000001;
	cout << kilograms << " kilograms." << endl;
	return kilograms;
}
double milligramstomicrograms(double milligrams)
{
	cout << "enter value in milligrams: " << endl;
	double micrograms;
	cin >> milligrams;
	while (!cin || cin.fail())
	{
		string junk;
		getline(cin, junk);
		cout << "enter value in milligrams: " << endl;
		cin >> milligrams;
	}
	micrograms = milligrams * 1000;
	cout << micrograms << " micrograms." << endl;
	return micrograms;
}
double milligramstoounces(double milligrams)
{
	cout << "enter value in milligrams: " << endl;
	double ounces;
	cin >> milligrams;
	while (!cin || cin.fail())
	{
		string junk;
		getline(cin, junk);
		cout << "enter value in milligrams: " << endl;
		cin >> milligrams;
	}
	ounces = milligrams * 0.0000352739619495804125;
	cout << ounces << " ounces." << endl;
	return ounces;
}
double milligramstopounds(double milligrams)
{
	cout << "enter value in milligrams: " << endl;
	double pounds;
	cin >> milligrams;
	while (!cin || cin.fail())
	{
		string junk;
		getline(cin, junk);
		cout << "enter value in milligrams: ";
		cin >> milligrams;
	}
	pounds = milligrams * 0.000002204622621848775625;
	cout << pounds << " pounds." << endl;
	return pounds;
}
//mass option 5
double ouncestograms(double ounces)
{
	cout << "enter value in ounces: ";
	double grams;
	cin >> ounces;
	while (!cin || cin.fail())
	{
		string junk;
		getline(cin, junk);
		cout << "enter value in ounces: ";
		cin >> ounces;
	}
	grams = ounces * 28.349523125;
	cout << grams << " grams." << endl;
	return grams;
}
double ouncestokilograms(double ounces)
{
	cout << "enter value in ounces: ";
	double kilograms;
	cin >> ounces;
	while (!cin || cin.fail())
	{
		string junk;
		getline(cin, junk);
		cout << "enter value in ounces: ";
		cin >> ounces;
	}
	kilograms = ounces * 0.028349523125;
	cout << kilograms << " kilograms." << endl;
	return kilograms;
}
double ouncestomicrograms(double ounces)
{
	cout << "enter value in ounces: ";
	double micrograms;
	cin >> ounces;
	while (!cin || cin.fail())
	{
		string junk;
		getline(cin, junk);
		cout << "enter value in ounces: ";
		cin >> ounces;
	}
	micrograms = ounces * 28349523.125;
	cout << micrograms << " micrograms." << endl;
	return micrograms;
}
double ouncestomilligrams(double ounces)
{
	cout << "enter value in ounces: ";
	double milligrams;
	cin >> ounces;
	while (!cin || cin.fail())
	{
		string junk;
		getline(cin, junk);
		cout << "enter value in ounces: ";
		cin >> ounces;
	}
	milligrams = ounces * 28349.523125;
	cout << milligrams << " milligrams." << endl;
	return milligrams;
}
double ouncestopounds(double ounces)
{
	cout << "enter value in ounces: ";
	double pounds;
	cin >> ounces;
	while (!cin || cin.fail())
	{
		string junk;
		getline(cin, junk);
		cout << "enter value in ounces: ";
		cin >> ounces;
	}
	pounds = ounces * 0.0625;
	cout << pounds << " pounds." << endl;
	return pounds;
}
//mass option 6
double poundstograms(double pounds)
{
	cout << "enter value in pounds: ";
	double grams;
	cin >> pounds;
	while (!cin || cin.fail())
	{
		string junk;
		getline(cin, junk);
		cout << "enter value in pounds: ";
		cin >> pounds;
	}
	grams = pounds * 453.59237;
	cout << grams << " grams." << endl;
	return grams;
}
double poundstokilograms(double pounds)
{
	cout << "enter value in pounds: ";
	double kilograms;
	cin >> pounds;
	while (!cin || cin.fail())
	{
		string junk;
		getline(cin, junk);
		cout << "enter value in pounds: ";
		cin >> pounds;
	}
	kilograms = pounds * 0.45359237;
	cout << kilograms << " kilograms." << endl;
	return kilograms;
}
double poundstomicrograms(double pounds)
{
	cout << "enter value in pounds: ";
	double micrograms;
	cin >> pounds;
	while (!cin || cin.fail())
	{
		string junk;
		getline(cin, junk);
		cout << "enter value in pounds: ";
		cin >> pounds;
	}
	micrograms = pounds * 453592370;
	cout << micrograms << " micrograms." << endl;
	return micrograms;
}
double poundstomilligrams(double pounds)
{
	cout << "enter value in pounds: ";
	double milligrams;
	cin >> pounds;
	while (!cin || cin.fail())
	{
		string junk;
		getline(cin, junk);
		cout << "enter value in pounds: ";
		cin >> pounds;
	}
	milligrams = pounds * 453592.37;
	cout << milligrams << " milligrams." << endl;
	return milligrams;
}
double poundstoounces(double pounds)
{
	cout << "enter value in pounds: ";
	double ounces;
	cin >> pounds;
	while (!cin || cin.fail())
	{
		string junk;
		getline(cin, junk);
		cout << "enter value in pounds: ";
		cin >> pounds;
	}
	ounces = pounds * 16;
	cout << ounces << " ounces." << endl;
	return ounces;
}