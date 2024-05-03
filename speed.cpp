//Option 11: Speed option 1
double kilometersperhourtomach(double kilometersperhour)
{
	cout << "enter value in kilometers per hour: ";
	double mach;
	cin >> kilometersperhour;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilometers per hour: ";
		cin >> kilometersperhour;
	}
	mach = kilometersperhour * 0.00080984774862332;
	cout << "mach " << mach << "." << endl;
	return mach;
}
double kilometersperhourtometerspersecond(double kilometersperhour)
{
	cout << "enter value in kilometers per hour: ";
	double meterspersecond;
	cin >> kilometersperhour;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilometers per hour: ";
		cin >> kilometersperhour;
	}
	meterspersecond = kilometersperhour * 0.27777777777777778;
	cout << meterspersecond << " meters per second." << endl;
	return meterspersecond;
}
double kilometersperhourtomilesperhour(double kilometersperhour)
{
	cout << "enter value in kilometers per hour: ";
	double milesperhour;
	cin >> kilometersperhour;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilometers per hour: ";
		cin >> kilometersperhour;
	}
	milesperhour = kilometersperhour * 0.621371192237384;
	cout << milesperhour << " miles per hour." << endl;
	return milesperhour;
}
//speed option 2
double machtokilometersperhour(double mach)
{
	cout << "enter value in mach: ";
	double kilometersperhour;
	cin >> mach;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in mach: ";
		cin >> mach;
	}
	kilometersperhour = mach * 1234.8;
	cout << kilometersperhour << " kilometers per hour." << endl;
	return kilometersperhour;
}
double machtometerspersecond(double mach)
{
	cout << "enter value in mach: ";
	double meterspersecond;
	cin >> mach;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in mach: ";
		cin >> mach;
	}
	meterspersecond = mach * 343;
	cout << meterspersecond << " meters per second." << endl;
	return meterspersecond;
}
double machtomilesperhour(double mach)
{
	cout << "enter value in mach: ";
	double milesperhour;
	cin >> mach;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in mach: ";
		cin >> mach;
	}
	milesperhour = mach * 767.269148174660;
	cout << milesperhour << " miles per hour." << endl;
	return milesperhour;
}
//speed option 3
double meterspersecondtokilometersperhour(double meterspersecond)
{
	cout << "enter value in meters per second: ";
	double kilometersperhour;
	cin >> meterspersecond;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in meters per second: ";
		cin >> meterspersecond;
	}
	kilometersperhour = meterspersecond * 3.5999999999997119;
	cout << kilometersperhour << " kilometers per hour." << endl;
	return kilometersperhour;
}
double meterspersecondtomach(double meterspersecond)
{
	cout << "enter value in meters per second: ";
	double mach;
	cin >> meterspersecond;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in meters per second: ";
		cin >> meterspersecond;
	}
	mach = meterspersecond * 0.0029154518950437;
	cout << "mach " << mach << "." << endl;
	return mach;
}
double meterspersecondtomilesperhour(double meterspersecond)
{
	cout << "enter value in meters per second: ";
	double milesperhour;
	cin >> meterspersecond;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in meters per second: ";
		cin >> meterspersecond;
	}
	milesperhour = meterspersecond * 2.2369362920544;
	cout << milesperhour << " miles per hour." << endl;
	return milesperhour;
}
//speed option 4
double milesperhourtokilometersperhour(double milesperhour)
{
	cout << "enter value in miles per hour: ";
	double kilometersperhour;
	cin >> milesperhour;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in miles per hour: ";
		cin >> milesperhour;
	}
	kilometersperhour = milesperhour * 1.6093439999999;
	cout << kilometersperhour << " kilometers per hour." << endl;
	return kilometersperhour;
}
double milesperhourtomach(double milesperhour)
{
	cout << "enter value in miles per hour: ";
	double mach;
	cin >> milesperhour;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in miles per hour: ";
		cin >> milesperhour;
	}
	mach = milesperhour * 0.00130332361516034;
	cout << "mach " << mach << "." << endl;
	return mach;
}
double milesperhourtometerspersecond(double milesperhour)
{
	cout << "enter value in miles per hour: ";
	double meterspersecond;
	cin >> milesperhour;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in miles per hour: ";
		cin >> milesperhour;
	}
	meterspersecond = milesperhour * 0.44704;
	cout << meterspersecond << " meters per second." << endl;
	return meterspersecond;
}