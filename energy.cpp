//option 1
double britishthermalunitstoelectronvolts(double britishthermalunits)
{
	cout << "enter value in british thermal units: ";
	double electronvolts;
	cin >> britishthermalunits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in british thermal units: ";
		cin >> britishthermalunits;
	}
	electronvolts = britishthermalunits * 6.5851409617891e+21;
	cout << electronvolts << " electronvolts." << endl;
	return electronvolts;
}
double britishthermalunitstofootpounds(double britishthermalunits)
{
	cout << "enter value in british thermal units: ";
	double footpounds;
	cin >> britishthermalunits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in british thermal units: ";
		cin >> britishthermalunits;
	}
	footpounds = britishthermalunits * 778.169262265964928;
	cout << footpounds << " foot pounds." << endl;
	return footpounds;
}
double britishthermalunitstogramcalories(double britishthermalunits)
{
	cout << "enter value in british thermal units: ";
	double gramcalories;
	cin >> britishthermalunits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in british thermal units: ";
		cin >> britishthermalunits;
	}
	gramcalories = britishthermalunits * 252.1644007217973248;
	cout << gramcalories << " gram calories." << endl;
	return gramcalories;
}
double britishthermalunitstojoules(double britishthermalunits)
{
	cout << "enter value in british thermal units: ";
	double joules;
	cin >> britishthermalunits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in british thermal units: ";
		cin >> britishthermalunits;
	}
	joules = britishthermalunits * 1055.06;
	cout << joules << " joules." << endl;
	return joules;
}
double britishthermalunitstokilocalories(double britishthermalunits)
{
	cout << "enter value in british thermal units: ";
	double kilocalories;
	cin >> britishthermalunits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in british thermal units: ";
		cin >> britishthermalunits;
	}
	kilocalories = britishthermalunits * 0.2521644007217973248;
	cout << kilocalories << " kilocalories." << endl;
	return kilocalories;
}
double britishthermalunitstokilojoules(double britishthermalunits)
{
	cout << "enter value in british thermal units: ";
	double kilojoules;
	cin >> britishthermalunits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in british thermal units: ";
		cin >> britishthermalunits;
	}
	kilojoules = britishthermalunits * 1.05505585262;
	cout << kilojoules << " kilojoules." << endl;
	return kilojoules;
}
double britishthermalunitstokilowatthours(double britishthermalunits)
{
	cout << "enter value in british thermal units: ";
	double kilowatthours;
	cin >> britishthermalunits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in british thermal units: ";
		cin >> britishthermalunits;
	}
	kilowatthours = britishthermalunits * 0.000293071070172222208;
	cout << kilowatthours << " kilowatt hours." << endl;
	return kilowatthours;
}
double britishthermalunitstowatthours(double britishthermalunits)
{
	cout << "enter value in british thermal units: ";
	double watthours;
	cin >> britishthermalunits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in british thermal units: ";
		cin >> britishthermalunits;
	}
	watthours = britishthermalunits * 0.29307107017222221824;
	cout << watthours << " watt hours." << endl;
	return watthours;
}
//option 2
double electronvoltstobritishthermalunits(double electronvolts)
{
	cout << "enter value in electronvolts: ";
	double britishthermalunits;
	cin >> electronvolts;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in electronvolts: ";
		cin >> electronvolts;
	}
	britishthermalunits = electronvolts * 1.51857037807178225e-22;
	cout << britishthermalunits << " british thermal units." << endl;
	return britishthermalunits;
}
double electronvoltstofootpounds(double electronvolts)
{
	cout << "enter value in electronvolts: ";
	double footpounds;
	cin >> electronvolts;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in electronvolts: ";
		cin >> electronvolts;
	}
	footpounds = electronvolts * 1.181704790803066368e-19;
	cout << footpounds << " foot pounds." << endl;
	return footpounds;
}
double electronvoltstogramcalories(double electronvolts)
{
	cout << "enter value in electronvolts: ";
	double gramcalories;
	cin >> electronvolts;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in electronvolts: ";
		cin >> electronvolts;
	}
	gramcalories = electronvolts * 3.8292938934034415616e-20;
	cout << gramcalories << " gram calories." << endl;
	return gramcalories;
}
double electronvoltstojoules(double electronvolts)
{
	cout << "enter value in electronvolts: ";
	double joules;
	cin >> electronvolts;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in electronvolts: ";
		cin >> electronvolts;
	}
	joules = electronvolts * 1.6021765649999998976e-19;
	cout << joules << " joules." << endl;
	return joules;
}
double electronvoltstokilocalories(double electronvolts)
{
	cout << "enter value in electronvolts: ";
	double kilocalories;
	cin >> electronvolts;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in electronvolts: ";
		cin >> electronvolts;
	}
	kilocalories = electronvolts * 3.8292938934034423808e-23;
	cout << kilocalories << " kilocalories." << endl;
	return kilocalories;
}
double electronvoltstokilojoules(double electronvolts)
{
	cout << "enter value in electronvolts: ";
	double kilojoules;
	cin >> electronvolts;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in electronvolts: ";
		cin >> electronvolts;
	}
	kilojoules = electronvolts * 1.6021765650000001024e-22;
	cout << kilojoules << " kilojoules." << endl;
	return kilojoules;
}
double electronvoltstokilowatthours(double electronvolts)
{
	cout << "enter value in electronvolts: ";
	double kilowatthours;
	cin >> electronvolts;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in electronvolts: ";
		cin >> electronvolts;
	}
	kilowatthours = electronvolts * 4.4504904583333330944e-26;
	cout << kilowatthours << " kilowatt hours." << endl;
	return kilowatthours;
}
double electronvoltstowatthours(double electronvolts)
{
	cout << "enter value in electronvolts: ";
	double watthours;
	cin >> electronvolts;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in electronvolts: ";
		cin >> electronvolts;
	}
	watthours = electronvolts * 4.4504904583333330944e-23;
	cout << watthours << " watt hours." << endl;
	return watthours;
}
//option 3
double footpoundstobritishthermalunits(double footpounds)
{
	cout << "enter value in foot-pounds: ";
	double britishthermalunits;
	cin >> footpounds;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in foot-pounds: ";
		cin >> footpounds;
	}
	britishthermalunits = footpounds * 0.0012850674634565777408;
	cout << britishthermalunits << " british thermal units." << endl;
	return britishthermalunits;
}
double footpoundstoelectronvolts(double footpounds)
{
	cout << "enter value in foot-pounds: ";
	double electronvolts;
	cin >> footpounds;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in foot-pounds: ";
		cin >> footpounds;
	}
	electronvolts = footpounds * 8.46235e+18;
	cout << electronvolts << " electronvolts." << endl;
	return electronvolts;
}
double footpoundstogramcalories(double footpounds)
{
	cout << "enter value in foot-pounds: ";
	double gramcalories;
	cin >> footpounds;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in foot-pounds: ";
		cin >> footpounds;
	}
	gramcalories = footpounds * 0.32404826680960811008;
	cout << gramcalories << " gram calories." << endl;
	return gramcalories;
}
double footpoundstojoules(double footpounds)
{
	cout << "enter value in foot-pounds: ";
	double joules;
	cin >> footpounds;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in foot-pounds: ";
		cin >> footpounds;
	}
	joules = footpounds * 1.3558179483314003968;
	cout << joules << " joules." << endl;
	return joules;
}
double footpoundstokilocalories(double footpounds)
{
	cout << "enter value in foot-pounds: ";
	double kilocalories;
	cin >> footpounds;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in foot-pounds: ";
		cin >> footpounds;
	}
	kilocalories = footpounds * 0.00032404826680960806912;
	cout << kilocalories << " kilocalories." << endl;
	return kilocalories;
}
double footpoundstokilojoules(double footpounds)
{
	cout << "enter value in foot-pounds: ";
	double kilojoules;
	cin >> footpounds;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in foot-pounds: ";
		cin >> footpounds;
	}
	kilojoules = footpounds * 0.0013558179483314003968;
	cout << kilojoules << " kilojoules." << endl;
	return kilojoules;
}
double footpoundstokilowatthours(double footpounds)
{
	cout << "enter value in foot-pounds: ";
	double kilowatthours;
	cin >> footpounds;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in foot-pounds: ";
		cin >> footpounds;
	}
	kilowatthours = footpounds * 3.7661609675872231424e-7;
	cout << kilowatthours << " kilowatt hours." << endl;
	return kilowatthours;
}
double footpoundstowatthours(double footpounds)
{
	cout << "enter value in foot-pounds: ";
	double watthours;
	cin >> footpounds;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in foot-pounds: ";
		cin >> footpounds;
	}
	watthours = footpounds * 0.00037661609675872231424;
	cout << watthours << " watt hours." << endl;
	return watthours;
}
//option 4
double gramcaloriestobritishthermalunits(double gramcalories)
{
	cout << "enter value in gramcalories: ";
	double britishthermalunits;
	cin >> gramcalories;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gramcalories: ";
		cin >> gramcalories;
	}
	britishthermalunits = gramcalories * 0.0039656668313909198848;
	cout << britishthermalunits << " british thermal units." << endl;
	return britishthermalunits;
}
double gramcaloriestoelectronvolts(double gramcalories)
{
	cout << "enter value in gramcalories: ";
	double electronvolts;
	cin >> gramcalories;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gramcalories: ";
		cin >> gramcalories;
	}
	electronvolts = gramcalories * 2.61145e+19;
	cout << electronvolts << " electronvolts." << endl;
	return electronvolts;
}
double gramcaloriestofootpounds(double gramcalories)
{
	cout << "enter value in gramcalories: ";
	double footpounds;
	cin >> gramcalories;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gramcalories: ";
		cin >> gramcalories;
	}
	footpounds = gramcalories * 3.0859600325760782336;
	cout << footpounds << " foot-pounds." << endl;
	return footpounds;
}
double gramcaloriestojoules(double gramcalories)
{
	cout << "enter value in gramcalories: ";
	double joules;
	cin >> gramcalories;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gramcalories: ";
		cin >> gramcalories;
	}
	joules = gramcalories * 4.184;
	cout << joules << " joules." << endl;
	return joules;
}
double gramcaloriestokilocalories(double gramcalories)
{
	cout << "enter value in gramcalories: ";
	double kilocalories;
	cin >> gramcalories;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gramcalories: ";
		cin >> gramcalories;
	}
	kilocalories = gramcalories * 0.001;
	cout << kilocalories << " kilocalories." << endl;
	return kilocalories;
}
double gramcaloriestokilojoules(double gramcalories)
{
	cout << "enter value in gramcalories: ";
	double kilojoules;
	cin >> gramcalories;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gramcalories: ";
		cin >> gramcalories;
	}
	kilojoules = gramcalories * 0.004184;
	cout << kilojoules << " kilojoules." << endl;
	return kilojoules;
}
double gramcaloriestokilowatthours(double gramcalories)
{
	cout << "enter value in gramcalories: ";
	double kilowatthours;
	cin >> gramcalories;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gramcalories: ";
		cin >> gramcalories;
	}
	kilowatthours = gramcalories * 1.16222222222222208e-6;
	cout << kilowatthours << " kilowatt hours." << endl;
	return kilowatthours;

}
double gramcaloriestowatthours(double gramcalories)
{
	cout << "enter value in gramcalories: ";
	double watthours;
	cin >> gramcalories;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gramcalories: ";
		cin >> gramcalories;
	}
	watthours = gramcalories * 0.00116222222222222208;
	cout << watthours << " watt hours." << endl;
	return watthours;
}
//option 5
double joulestobritishthermalunits(double joules)
{
	cout << "enter value in joules: ";
	double britishthermalunits;
	cin >> joules;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in joules: ";
		cin >> joules;
	}
	britishthermalunits = joules * 0.00094781712031331713024;
	cout << britishthermalunits << " british thermal units." << endl;
	return britishthermalunits;
}
double joulestoelectronvolts(double joules)
{
	cout << "enter value in joules: ";
	double electronvolts;
	cin >> joules;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in joules: ";
		cin >> joules;
	}
	electronvolts = joules * 6.24151e+18;
	cout << electronvolts << " electronvolts." << endl;
	return electronvolts;
}
double joulestofootpounds(double joules)
{
	cout << "enter value in joules: ";
	double footpounds;
	cin >> joules;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in joules: ";
		cin >> joules;
	}
	footpounds = joules * 0.73756214927726542848;
	cout << footpounds << " foot-pounds." << endl;
	return footpounds;
}
double joulestogramcalories(double joules)
{
	cout << "enter value in joules: ";
	double gramcalories;
	cin >> joules;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in joules: ";
		cin >> joules;
	}
	gramcalories = joules * 0.23900573613766729728;
	cout << gramcalories << " gramcalories." << endl;
	return gramcalories;
}
double joulestokilocalories(double joules)
{
	cout << "enter value in joules: ";
	double kilocalories;
	cin >> joules;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in joules: ";
		cin >> joules;
	}
	kilocalories = joules * 0.00023900573613766729728;
	cout << kilocalories << " kilocalories." << endl;
	return kilocalories;
}
double joulestokilojoules(double joules)
{
	cout << "enter value in joules: ";
	double kilojoules;
	cin >> joules;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in joules: ";
		cin >> joules;
	}
	kilojoules = joules * 0.001;
	cout << joules << " joules." << endl;
	return joules;
}
double joulestokilowatthours(double joules)
{
	cout << "enter value in joules: ";
	double kilowatthours;
	cin >> joules;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in joules: ";
		cin >> joules;
	}
	kilowatthours = joules * 2.7777777777777778688e-7;
	cout << kilowatthours << " kilowatt hours." << endl;
	return kilowatthours;
}
double joulestowatthours(double joules)
{
	cout << "enter value in joules: ";
	double watthours;
	cin >> joules;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in joules: ";
		cin >> joules;
	}
	watthours = joules * 0.00027777777777777778688;
	cout << watthours << " watthours." << endl;
	return watthours;
}
//option 6
double kilocaloriestobritishthermalunits(double kilocalories)
{
	cout << "enter value in kilocalories: ";
	double britishthermalunits;
	cin >> kilocalories;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilocalories: ";
		cin >> kilocalories;
	}
	britishthermalunits = kilocalories * 3.9656668313909198848;
	cout << britishthermalunits << " british thermal units." << endl;
	return britishthermalunits;
}
double kilocaloriestoelectronvolts(double kilocalories)
{
	cout << "enter value in joules: ";
	double electronvolts;
	cin >> kilocalories;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in joules: ";
		cin >> kilocalories;
	}
	electronvolts = kilocalories * 2.61145e+22;
	cout << electronvolts << " electronvolts." << endl;
	return electronvolts;
}
double kilocaloriestofootpounds(double kilocalories)
{
	cout << "enter value in joules: ";
	double footpounds;
	cin >> kilocalories;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in joules: ";
		cin >> kilocalories;
	}
	footpounds = kilocalories * 3.08596;
	cout << footpounds << " foot-pounds." << endl;
	return footpounds;
}
double kilocaloriestogramcalories(double kilocalories)
{
	cout << "enter value in joules: ";
	double gramcalories;
	cin >> kilocalories;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in joules: ";
		cin >> kilocalories;
	}
	gramcalories = kilocalories * 1000;
	cout << gramcalories << " gramcalories." << endl;
	return gramcalories;
}
double kilocaloriestojoules(double kilocalories)
{
	cout << "enter value in joules: ";
	double joules;
	cin >> kilocalories;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in joules: ";
		cin >> kilocalories;
	}
	joules = kilocalories * 4184;
	cout << joules << " joules." << endl;
	return joules;
}
double kilocaloriestokilojoules(double kilocalories)
{
	cout << "enter value in joules: ";
	double kilojoules;
	cin >> kilocalories;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in joules: ";
		cin >> kilocalories;
	}
	kilojoules = kilocalories * 4.184;
	cout << kilojoules << " kilojoules." << endl;
	return kilojoules;
}
double kilocaloriestokilowatthours(double kilocalories)
{
	cout << "enter value in joules: ";
	double kilowatthours;
	cin >> kilocalories;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in joules: ";
		cin >> kilocalories;
	}
	kilowatthours = kilocalories * 0.00116222222222222213;
	cout << kilowatthours << " kilowatt hours." << endl;
	return kilowatthours;
}
double kilocaloriestowatthours(double kilocalories)
{
	cout << "enter value in joules: ";
	double watthours;
	cin >> kilocalories;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in joules: ";
		cin >> kilocalories;
	}
	watthours = kilocalories * 1.16222222222222213;
	cout << watthours << " watt hours." << endl;
	return watthours;
}
//option 7
double kilojoulestobritishthermalunits(double kilojoules)
{
	cout << "enter value in kilojoules: ";
	double britishthermalunits;
	cin >> kilojoules;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilojoules: ";
		cin >> kilojoules;
	}
	britishthermalunits = kilojoules * 0.94781712031331713024;
	cout << britishthermalunits << " british thermal units." << endl;
	return britishthermalunits;
}
double kilojoulestoelectronvolts(double kilojoules)
{
	cout << "enter value in kilojoules: ";
	double electronvolts;
	cin >> kilojoules;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilojoules: ";
		cin >> kilojoules;
	}
	electronvolts = kilojoules * 6.24151e+21;
	cout << electronvolts << " electronvolts." << endl;
	return electronvolts;
}
double kilojoulestofootpounds(double kilojoules)
{
	cout << "enter value in kilojoules: ";
	double footpounds;
	cin >> kilojoules;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilojoules: ";
		cin >> kilojoules;
	}
	footpounds = kilojoules * 737.56214927726542848;
	cout << footpounds << " foot-pounds." << endl;
	return footpounds;
}
double kilojoulestogramcalories(double kilojoules)
{
	cout << "enter value in kilojoules: ";
	double gramcalories;
	cin >> kilojoules;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilojoules: ";
		cin >> kilojoules;
	}
	gramcalories = kilojoules * 239.00573613766729728;
	cout << gramcalories << " gramcalories." << endl;
	return gramcalories;
}
double kilojoulestojoules(double kilojoules)
{
	cout << "enter value in kilojoules: ";
	double joules;
	cin >> kilojoules;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilojoules: ";
		cin >> kilojoules;
	}
	joules = kilojoules * 1000;
	cout << joules << " joules." << endl;
	return joules;
}
double kilojoulestokilocalories(double kilojoules)
{
	cout << "enter value in kilojoules: ";
	double kilocalories;
	cin >> kilojoules;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilojoules: ";
		cin >> kilojoules;
	}
	kilocalories = kilojoules * 0.23900573613766729728;
	cout << kilocalories << " kilocalories." << endl;
	return kilocalories;
}
double kilojoulestokilowatthours(double kilojoules)
{
	cout << "enter value in kilojoules: ";
	double kilowatthours;
	cin >> kilojoules;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilojoules: ";
		cin >> kilojoules;
	}
	kilowatthours = kilojoules * 0.00027777777777777774592;
	cout << kilowatthours << " kilowatt hours." << endl;
	return kilowatthours;
}
double kilojoulestowatthours(double kilojoules)
{
	cout << "enter value in kilojoules: ";
	double watthours;
	cin >> kilojoules;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilojoules: ";
		cin >> kilojoules;
	}
	watthours = kilojoules * 0.27777777777777774592;
	cout << watthours << " watthours." << endl;
	return watthours;
}
//option 8
double kilowatthourstobritishthermalunits(double kilowatthours)
{
	cout << "enter value in kilowatt hours: ";
	double britishthermalunits;
	cin >> kilowatthours;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilowatt hours: ";
		cin >> kilowatthours;
	}
	britishthermalunits = kilowatthours * 3412.14;
	cout << britishthermalunits << " british thermal units." << endl;
	return britishthermalunits;
}
double kilowatthourstoelectronvolts(double kilowatthours)
{
	cout << "enter value in kilowatt hours: ";
	double electronvolts;
	cin >> kilowatthours;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilowatt hours: ";
		cin >> kilowatthours;
	}
	electronvolts = kilowatthours * 2.24694e+25;
	cout << electronvolts << " electronvolts." << endl;
	return electronvolts;
}
double kilowatthourstofootpounds(double kilowatthours)
{
	cout << "enter value in kilowatt hours: ";
	double footpounds;
	cin >> kilowatthours;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilowatt hours: ";
		cin >> kilowatthours;
	}
	footpounds = kilowatthours * 2.65522;
	cout << footpounds << " foot-pounds." << endl;
	return footpounds;
}
double kilowatthourstogramcalories(double kilowatthours)
{
	cout << "enter value in kilowatt hours: ";
	double gramcalories;
	cin >> kilowatthours;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilowatt hours: ";
		cin >> kilowatthours;
	}
	gramcalories = kilowatthours * 860421;
	cout << gramcalories << " gramcalories." << endl;
	return gramcalories;
}
double kilowatthourstojoules(double kilowatthours)
{
	cout << "enter value in kilowatt hours: ";
	double joules;
	cin >> kilowatthours;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilowatt hours: ";
		cin >> kilowatthours;
	}
	joules = kilowatthours * 3.6e+6;
	cout << joules << " joules." << endl;
	return joules;
}
double kilowatthourstokilocalories(double kilowatthours)
{
	cout << "enter value in kilowatt hours: ";
	double kilocalories;
	cin >> kilowatthours;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilowatt hours: ";
		cin >> kilowatthours;
	}
	kilocalories = kilowatthours * 860.42065009560223744;
	cout << kilocalories << " kilocalories." << endl;
	return kilocalories;
}
double kilowatthourstokilojoules(double kilowatthours)
{
	cout << "enter value in kilowatt hours: ";
	double kilojoules;
	cin >> kilowatthours;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilowatt hours: ";
		cin >> kilowatthours;
	}
	kilojoules = kilowatthours * 3600;
	cout << kilojoules << " kilojoules." << endl;
	return kilojoules;
}
double kilowatthourstowatthours(double kilowatthours)
{
	cout << "enter value in kilowatt hours: ";
	double watthours;
	cin >> kilowatthours;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilowatt hours: ";
		cin >> kilowatthours;
	}
	watthours = kilowatthours * 1000;
	cout << watthours << " watt hours." << endl;
	return watthours;
}
//option 9
double watthourstobritishthermalunits(double watthours)
{
	cout << "enter value in watt hours: ";
	double britishthermalunits;
	cin >> watthours;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in watt hours: ";
		cin >> watthours;
	}
	britishthermalunits = watthours * 3.4121416331279417344;
	cout << britishthermalunits << " britishthermalunits." << endl;
	return britishthermalunits;
}
double watthourstoelectronvolts(double watthours)
{
	cout << "enter value in watt hours: ";
	double electronvolts;
	cin >> watthours;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in watt hours: ";
		cin >> watthours;
	}
	electronvolts = watthours * 2.24694e+22;
	cout << electronvolts << " electronvolts." << endl;
	return electronvolts;
}
double watthourstofootpounds(double watthours)
{
	cout << "enter value in watt hours: ";
	double footpounds;
	cin >> watthours;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in watt hours: ";
		cin >> watthours;
	}
	footpounds = watthours * 2655.22;
	cout << footpounds << " foot-pounds." << endl;
	return footpounds;
}
double watthourstogramcalories(double watthours)
{
	cout << "enter value in watt hours: ";
	double gramcalories;
	cin >> watthours;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in watt hours: ";
		cin >> watthours;
	}
	gramcalories = watthours * 860.42065009560223744;
	cout << gramcalories << " gramcalories." << endl;
	return gramcalories;
}
double watthourstojoules(double watthours)
{
	cout << "enter value in watt hours: ";
	double joules;
	cin >> watthours;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in watt hours: ";
		cin >> watthours;
	}
	joules = watthours * 3600;
	cout << joules << " joules." << endl;
	return joules;
}
double watthourstokilocalories(double watthours)
{
	cout << "enter value in watt hours: ";
	double kilocalories;
	cin >> watthours;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in watt hours: ";
		cin >> watthours;
	}
	kilocalories = watthours * 0.86042065009560223744;
	cout << kilocalories << " kilocalories." << endl;
	return kilocalories;
}
double watthourstokilojoules(double watthours)
{
	cout << "enter value in watt hours: ";
	double kilojoules;
	cin >> watthours;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in watt hours: ";
		cin >> watthours;
	}
	kilojoules = watthours * 3.6;
	cout << kilojoules << " kilojoules." << endl;
	return kilojoules;
}
double watthourstokilowatthours(double watthours)
{
	cout << "enter value in watt hours: ";
	double kilowatthours;
	cin >> watthours;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in watt hours: ";
		cin >> watthours;
	}
	kilowatthours = watthours * 0.001;
	cout << kilowatthours << " kilowatt hours." << endl;
	return kilowatthours;
}