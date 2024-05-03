//option 1
double barstoinchesofmercury(double bars)
{
	cout << "enter value in bars: ";
	double inchesofmercury;
	cin >> bars;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in bars: ";
		cin >> bars;
	}
	inchesofmercury = bars * 29.529983071416;
	cout << inchesofmercury << " inches of mercury." << endl;
	return inchesofmercury;
}
double barstopascals(double bars)
{
	cout << "enter value in bars: ";
	double pascals;
	cin >> bars;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in bars: ";
		cin >> bars;
	}
	pascals = bars * 100000;
	cout << pascals << " pascals." << endl;
	return pascals;
}
double barstopersquareinch(double bars)
{
	cout << "enter value in bars: ";
	double persquareinch;
	cin >> bars;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in bars: ";
		cin >> bars;
	}
	persquareinch = bars * 14.503773773375;
	cout << persquareinch << " per square inch." << endl;
	return persquareinch;
}
//option 2
double inchesofmercurytobars(double inchesofmercury)
{
	cout << "enter value in inches of mercury: ";
	double bars;
	cin >> inchesofmercury;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in inches of mercury: ";
		cin >> inchesofmercury;
	}
	bars = inchesofmercury * 0.0338638866667;
	cout << bars << " bars." << endl;
	return bars;
}
double inchesofmercurytopascals(double inchesofmercury)
{
	cout << "enter value in inches of mercury: ";
	double pascals;
	cin >> inchesofmercury;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in inches of mercury: ";
		cin >> inchesofmercury;
	}
	pascals = inchesofmercury * 3386.38866667;
	cout << pascals << " pascals." << endl;
	return pascals;
}
double inchesofmercurytopersquareinch(double inchesofmercury)
{
	cout << "enter value in inches of mercury: ";
	double persquareinch;
	cin >> inchesofmercury;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in inches of mercury: ";
		cin >> inchesofmercury;
	}
	persquareinch = inchesofmercury * 0.49115415130102975;
	cout << persquareinch << " per square inch." << endl;
	return persquareinch;
}
//option 3
double pascalstobars(double pascals)
{
	cout << "enter value in pascals: ";
	double bars;
	cin >> pascals;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in pascals: ";
		cin >> pascals;
	}
	bars = pascals * 0.00001;
	cout << bars << " bars." << endl;
	return bars;
}
double pascalstoinchesofmercury(double pascals)
{
	cout << "enter value in pascals: ";
	double inchesofmercury;
	cin >> pascals;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in pascals: ";
		cin >> pascals;
	}
	inchesofmercury = pascals * 0.0002952998307141596875;
	cout << inchesofmercury << " inches of mercury." << endl;
	return inchesofmercury;
}
double pascalstopersquareinch(double pascals)
{
	cout << "enter value in inches of mercury: ";
	double persquareinch;
	cin >> pascals;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in inches of mercury: ";
		cin >> pascals;
	}
	persquareinch = pascals * 0.000145037737733750875;
	cout << persquareinch << " per square inch." << endl;
	return persquareinch;
}
//option 4
double persquareinchtobars(double persquareinch)
{
	cout << "enter value in per square inches: ";
	double bars;
	cin >> persquareinch;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in per square inches: ";
		cin >> persquareinch;
	}
	bars = persquareinch * 0.0689475729299999922;
	cout << bars << " bars." << endl;
	return bars;
}
double persquareinchtoinchesofmercury(double persquareinch)
{
	cout << "enter value in per square inches: ";
	double inchesofmercury;
	cin >> persquareinch;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in per square inches: ";
		cin >> persquareinch;
	}
	inchesofmercury = persquareinch * 2.0360206614381181;
	cout << inchesofmercury << " inches of mercury." << endl;
	return inchesofmercury;
}
double persquareinchtopascals(double persquareinch)
{
	cout << "enter value in per square inches: ";
	double pascals;
	cin >> persquareinch;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in per square inches: ";
		cin >> persquareinch;
	}
	pascals = persquareinch * 6894.757292999999;
	cout << pascals << " pascals." << endl;
	return pascals;
}