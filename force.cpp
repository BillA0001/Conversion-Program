//Option 4: Force, Option 1
double kilogramsofforcetokilonewtons(double kilogramsofforce)
{
	cout << " enter value in kilograms of force: ";
	double kilonewtons;
	cin >> kilogramsofforce;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << " enter value in kilograms of force: ";
		cin >> kilogramsofforce;
	}
	kilonewtons = kilogramsofforce * 0.00980665;
	cout << kilonewtons << " kilonewtons." << endl;
	return kilonewtons;
}
double kilogramsofforcetomillinewtons(double kilogramsofforce)
{
	cout << " enter value in kilograms of force: ";
	double millinewtons;
	cin >> kilogramsofforce;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilograms of force: ";
		cin >> kilogramsofforce;
	}
	millinewtons = kilogramsofforce * 9806.65;
	cout << millinewtons << " millinewtons." << endl;
	return millinewtons;
}
double kilogramsofforcetoouncesofforce(double kilogramsofforce)
{
	cout << " enter value in kilograms of force: ";
	double ouncesofforce;
	cin >> kilogramsofforce;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilograms of force: ";
		cin >> kilogramsofforce;
	}
	ouncesofforce = kilogramsofforce * 35.273961950;
	cout << ouncesofforce << " ounces of force." << endl;
	return ouncesofforce;
}
double kilogramsofforcetopoundsofforce(double kilogramsofforce)
{
	cout << " enter value in kilograms of force: ";
	double poundsofforce;
	cin >> kilogramsofforce;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilograms of force: ";
		cin >> kilogramsofforce;
	}
	poundsofforce = kilogramsofforce * 2.204622622;
	cout << poundsofforce << " pounds of force." << endl;
	return poundsofforce;
}
double kilogramsofforcetonewtons(double kilogramsofforce)
{
	cout << " enter value in kilograms of force: ";
	double newtons;
	cin >> kilogramsofforce;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilograms of force: ";
		cin >> kilogramsofforce;
	}
	newtons = kilogramsofforce * 9.80665;
	cout << newtons << " newtons." << endl;
	return newtons;
}
//Force Option 2
double kilonewtonstokilogramsofforce(double kilonewtons)
{
	cout << "enter value in kilonewtons: ";
	double kilogramsofforce;
	cin >> kilonewtons;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilonewtons: ";
		cin >> kilonewtons;
	}
	kilogramsofforce = kilonewtons * 101.9716212977899902344;
	cout << kilogramsofforce << " kilograms of force." << endl;
	return kilogramsofforce;
}
double kilonewtonstomillinewtons(double kilonewtons)
{
	cout << "enter value in kilonewtons: ";
	double millinewtons;
	cin >> kilonewtons;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilonewtons: ";
		cin >> kilonewtons;
	}
	millinewtons = kilonewtons * 1000000;
	cout << millinewtons << " millinewtons." << endl;
	return millinewtons;
}
double kilonewtonstoouncesofforce(double kilonewtons)
{
	cout << "enter value in kilonewtons: ";
	double ouncesofforce;
	cin >> kilonewtons;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilonewtons: ";
		cin >> kilonewtons;
	}
	ouncesofforce = kilonewtons * 3596.943089638200195313;
	cout << ouncesofforce << " ounces of force." << endl;
	return ouncesofforce;
}
double kilonewtonstopoundsofforce(double kilonewtons)
{
	cout << "enter value in kilonewtons: ";
	double poundsofforce;
	cin >> kilonewtons;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilonewtons: ";
		cin >> kilonewtons;
	}
	poundsofforce = kilonewtons * 224.8089431151300292969;
	cout << poundsofforce << " pounds of force." << endl;
	return poundsofforce;
}
double kilonewtonstonewtons(double kilonewtons)
{
	cout << "enter value in kilonewtons: ";
	double newtons;
	cin >> kilonewtons;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilonewtons: ";
		cin >> kilonewtons;
	}
	newtons = kilonewtons * 1000;
	cout << newtons << " newtons." << endl;
	return newtons;
}
//force option 3
double millinewtonstokilogramsofforce(double millinewtons)
{
	cout << "enter value in millinewtons: ";
	double kilogramsofforce;
	cin >> millinewtons;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in millinewtons: ";
		cin >> millinewtons;
	}
	kilogramsofforce = millinewtons * 0.0001019716212977900024414;
	cout << kilogramsofforce << " kilograms of force." << endl;
	return kilogramsofforce;
}
double millinewtonstokilonewtons(double millinewtons)
{
	cout << "enter value in millinewtons: ";
	double kilonewtons;
	cin >> millinewtons;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in millinewtons: ";
		cin >> millinewtons;
	}
	kilonewtons = millinewtons * 0.000001;
	cout << kilonewtons << " kilonewtons." << endl;
	return kilonewtons;
}
double millinewtonstoouncesofforce(double millinewtons)
{
	cout << "enter value in millinewtons: ";
	double ouncesofforce;
	cin >> millinewtons;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in millinewtons: ";
		cin >> millinewtons;
	}
	ouncesofforce = millinewtons * 0.003596943089638200195313;
	cout << ouncesofforce << " ounces of force." << endl;
	return ouncesofforce;
}
double millinewtonstopoundsofforce(double millinewtons)
{
	cout << "enter value in millinewtons: ";
	double poundsofforce;
	cin >> millinewtons;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in millinewtons: ";
		cin >> millinewtons;
	}
	poundsofforce = millinewtons * 0.0002248089431151299804688;
	cout << poundsofforce << " pounds of force." << endl;
	return poundsofforce;
}
double millinewtonstonewtons(double millinewtons)
{
	cout << "enter value in millinewtons: ";
	double newtons;
	cin >> millinewtons;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in millinewtons: ";
		cin >> millinewtons;
	}
	newtons = millinewtons * 0.001;
	cout << newtons << " newtons." << endl;
	return newtons;
}
//force option 4
double newtonstokilogramsofforce(double newtons)
{
	cout << "enter value in newtons: ";
	double kilogramsofforce;
	cin >> newtons;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in newtons: ";
		cin >> newtons;
	}
	kilogramsofforce = newtons * 0.1019716212977900024414;
	cout << kilogramsofforce << " kilograms of force." << endl;
	return kilogramsofforce;
}
double newtonstokilonewtons(double newtons)
{
	cout << "enter value in newtons: ";
	double kilonewtons;
	cin >> newtons;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in newtons: ";
		cin >> newtons;
	}
	kilonewtons = newtons * 0.001;
	cout << kilonewtons << " kilonewtons." << endl;
	return kilonewtons;
}
double newtonstomillinewtons(double newtons)
{
	cout << "enter value in newtons: ";
	double millinewtons;
	cin >> newtons;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in newtons: ";
		cin >> newtons;
	}
	millinewtons = newtons * 1000;
	cout << millinewtons << " millinewtons." << endl;
	return millinewtons;
}
double newtonstoouncesofforce(double newtons)
{
	cout << "enter value in newtons: ";
	double ouncesofforce;
	cin >> newtons;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in newtons: ";
		cin >> newtons;
	}
	ouncesofforce = newtons * 3.596943089638200195313;
	cout << ouncesofforce << " ounces of force." << endl;
	return ouncesofforce;
}
double newtonstopoundsofforce(double newtons)
{
	cout << "enter value in newtons: ";
	double poundsofforce;
	cin >> newtons;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in newtons: ";
		cin >> newtons;
	}
	poundsofforce = newtons * 0.2248089431151299804688;
	cout << poundsofforce << " pounds of force." << endl;
	return poundsofforce;
}
//force option 5
double ouncesofforcetokilogramsofforce(double ouncesofforce)
{
	cout << "enter value in ounces of force: ";
	double kilogramsofforce;
	cin >> ouncesofforce;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in ounces of force: ";
		cin >> ouncesofforce;
	}
	kilogramsofforce = ouncesofforce * 0.02834952312466299804688;
	cout << kilogramsofforce << " kilograms of force." << endl;
	return kilogramsofforce;
}
double ouncesofforcetokilonewtons(double ouncesofforce)
{
	cout << "enter value in ounces of force: ";
	double kilonewtons;
	cin >> ouncesofforce;
	while (!cin || cin.fail());
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in ounces of force: ";
		cin >> ouncesofforce;
	}
	kilonewtons = ouncesofforce * 0.0002780138509504700195313;
	cout << kilonewtons << " kilonewtons." << endl;
	return kilonewtons;
}
double ouncesofforcetomillinewtons(double ouncesofforce)
{
	cout << "enter value in ounces of force: ";
	double millinewtons;
	cin >> ouncesofforce;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in ounces of force: ";
		cin >> ouncesofforce;
	}
	millinewtons = ouncesofforce * 278.0138509504699707031;
	cout << millinewtons << " millinewtons." << endl;
	return millinewtons;
}
double ouncesofforcetopoundsofforce(double ouncesofforce)
{
	cout << "enter value in ounces of force: ";
	double poundsofforce;
	cin >> ouncesofforce;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in ounces of force: ";
		cin >> ouncesofforce;
	}
	poundsofforce = ouncesofforce * 0.06250000000354399414063;
	cout << poundsofforce << " pounds of force." << endl;
	return poundsofforce;
}
double ouncesofforcetonewtons(double ouncesofforce)
{
	cout << "enter value in ounces of force: ";
	double newtons;
	cin >> ouncesofforce;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in ounces of force: ";
		cin >> ouncesofforce;
	}
	newtons = ouncesofforce * 0.2780138509504699707031;
	cout << newtons << " newtons." << endl;
	return newtons;
}
//force option 6
double poundsofforcetokilogramsofforce(double poundsofforce)
{
	cout << "enter value in pounds of force: ";
	double kilogramsofforce;
	cin >> poundsofforce;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in pounds of force: ";
		cin >> poundsofforce;
	}
	kilogramsofforce = poundsofforce * 0.4535923699688900390625;
	cout << kilogramsofforce << " kilograms of force." << endl;
	return kilogramsofforce;
}
double poundsofforcetokilonewtons(double poundsofforce)
{
	cout << "enter value in pounds of force: ";
	double kilonewtons;
	cin >> poundsofforce;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in pounds of force: ";
		cin >> poundsofforce;
	}
	kilonewtons = poundsofforce * 0.0044482216149553995776;
	cout << kilonewtons << " kilonewtons." << endl;
	return kilonewtons;
}
double poundsofforcetomillinewtons(double poundsofforce)
{
	cout << "enter value in pounds of force: ";
	double millinewtons;
	cin >> poundsofforce;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in pounds of force: ";
		cin >> poundsofforce;
	}
	millinewtons = poundsofforce * 4448.221614955399414063;
	cout << millinewtons << " millinewtons." << endl;
	return millinewtons;
}
double poundsofforcetoouncesofforce(double poundsofforce)
{
	cout << "enter value in pounds of force: ";
	double ouncesofforce;
	cin >> poundsofforce;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in pounds of force: ";
		cin >> poundsofforce;
	}
	ouncesofforce = poundsofforce * 15.99999999909300048828;
	cout << ouncesofforce << " ounces of force." << endl;
	return ouncesofforce;
}
double poundsofforcetonewtons(double poundsofforce)
{
	cout << "enter value in pounds of force: ";
	double newtons;
	cin >> poundsofforce;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in pounds of force: ";
		cin >> poundsofforce;
	}
	newtons = poundsofforce * 4.448221614955399414063;
	cout << newtons << " newtons." << endl;
	return newtons;
}
