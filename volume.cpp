//Option 12: Volume option 1
double gallonstoliters(double gallons)
{
	cout << "enter value in gallons: ";
	double liters;
	cin >> gallons;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gallons: ";
		cin >> gallons;
	}
	liters = gallons * 3.7854117840000003;
	cout << liters << " liters."<<endl;
	return liters;
}
double gallonstomilliliters(double gallons)
{
	cout << "enter value in gallons: ";
	double milliliters;
	cin >> gallons;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gallons: ";
		cin >> gallons;
	}
	milliliters = gallons * 3785.4117840000004;
	cout << milliliters << " milliliters." << endl;
	return milliliters;
}
double gallonstopints(double gallons)
{
	cout << "enter value in gallons: ";
	double pints;
	cin >> gallons;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gallons: ";
		cin >> gallons;
	}
	pints = gallons * 8;
	cout << pints << " pints."<<endl;
	return pints;
}
double gallonstoquarts(double gallons)
{
	cout << "enter value in gallons: ";
	double quarts;
	cin >> gallons;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gallons: ";
		cin >> gallons;
	}
	quarts = gallons * 4;
	cout << quarts << " quarts."<<endl;
	return quarts;
}
//volume option 2
double literstogallons(double liters)
{
	cout << "enter value in liters: ";
	double gallons;
	cin >> liters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in liters: ";
		cin >> liters;
	}
	gallons = liters * 0.2641720523581484;
	cout << gallons << " gallons."<<endl;
	return gallons;
}
double literstomilliliters(double liters)
{
	cout << "enter value in liters: ";
	double milliliters;
	cin >> liters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in liters: ";
		cin >> liters;
	}
	milliliters = liters * 1000;
	cout << milliliters << " milliliters."<<endl;
	return milliliters;
}
double literstopints(double liters)
{
	cout << "enter value in liters: ";
	double pints;
	cin >> liters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in liters: ";
		cin >> liters;
	}
	pints = liters * 2.113376418865187;
	cout << pints << " pints."<<endl;
	return pints;
}
double literstoquarts(double liters)
{
	cout << "enter value in liters: ";
	double quarts;
	cin >> liters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in liters: ";
		cin >> liters;
	}
	quarts = liters * 1.056688209432594;
	cout << quarts << " quarts."<<endl;
	return quarts;
}
//volume option 3
double milliliterstogallons(double milliliters)
{
	cout << "enter value in milliliters: ";
	double gallons;
	cin >> milliliters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in milliliters: ";
		cin >> milliliters;
	}
	gallons = milliliters * 0.000264172052358148;
	cout << gallons << " gallons."<<endl;
	return gallons;
}
double milliliterstoliters(double milliliters)
{
	cout << "enter value in milliliters: ";
	double liters;
	cin >> milliliters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in milliliters: ";
		cin >> milliliters;
	}
	liters = milliliters * 0.001;
	cout << liters << " liters."<<endl;
	return liters;
}
double milliliterstopints(double milliliters)
{
	cout << "enter value in milliliters: ";
	double pints;
	cin >> milliliters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in milliliters: ";
		cin >> milliliters;
	}
	pints = milliliters * 0.002113376418865187;
	cout << pints << " pints."<<endl;
	return pints;
}
double milliliterstoquarts(double milliliters)
{
	cout << "enter value in milliliters: ";
	double quarts;
	cin >> milliliters;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in milliliters: ";
		cin >> milliliters;
	}
	quarts = milliliters * 0.001056688209432594;
	cout << quarts << " quarts."<<endl;
	return quarts;
}
//volume option 4
double pintstogallons(double pints)
{
	cout << "enter value in pints: ";
	double gallons;
	cin >> pints;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in pints: ";
		cin >> pints;
	}
	gallons = pints * 0.125;
	cout << gallons << " gallons."<<endl;
	return gallons;
}
double pintstoliters(double pints)
{
	cout << "enter value in pints: ";
	double liters;
	cin >> pints;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in pints: ";
		cin >> pints;
	}
	liters = pints * 0.47317647300000004;
	cout << liters << " liters."<<endl;
	return liters;
}
double pintstomilliliters(double pints)
{
	cout << "enter value in pints: ";
	double milliliters;
	cin >> pints;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in pints: ";
		cin >> pints;
	}
	milliliters = pints * 473.17647300000004;
	cout << milliliters << " milliliters."<<endl;
	return milliliters;
}
double pintstoquarts(double pints)
{
	cout << "enter value in pints: ";
	double quarts;
	cin >> pints;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in pints: ";
		cin >> pints;
	}
	quarts = pints * 0.5;
	cout << quarts << " quarts."<<endl;
	return quarts;
}
//volume option 5
double quartstogallons(double quarts)
{
	cout << "enter value in quarts: ";
	double gallons;
	cin >> quarts;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in quarts: ";
		cin >> quarts;
	}
	gallons = quarts * 0.25;
	cout << gallons << " gallons."<<endl;
	return gallons;
}
double quartstoliters(double quarts)
{
	cout << "enter value in quarts: ";
	double liters;
	cin >> quarts;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in quarts: ";
		cin >> quarts;
	}
	liters = quarts * 0.9463529460000001;
	cout << liters << " liters."<<endl;
	return liters;
}
double quartstomilliliters(double quarts)
{
	cout << "enter value in quarts: ";
	double milliliters;
	cin >> quarts;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in quarts: ";
		cin >> quarts;
	}
	milliliters = quarts * 946.3529460000001;
	cout << milliliters << " milliliters."<<endl;
	return milliliters;
}
double quartstopints(double quarts)
{
	cout << "enter value in quarts: ";
	double pints;
	cin >> quarts;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in quarts: ";
		cin >> quarts;
	}
	pints = quarts * 2;
	cout << pints << " pints."<<endl;
	return pints;
}