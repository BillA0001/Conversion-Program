//Option 10: Time option 1
double daystohours(double days)
{
	cout << "enter value in days: ";
	double hours;
	cin >> days;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in days: ";
		cin >> days;
	}
	hours = days * 24;
	cout << hours << " hours." << endl;
	return hours;
}
double daystominutes(double days)
{
	cout << "enter value in days: ";
	double minutes;
	cin >> days;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in days: ";
		cin >> days;
	}
	minutes = days * 1440;
	cout << minutes << " minutes." << endl;
	return minutes;
}
double daystomonths(double days)
{
	cout << "enter value in days: ";
	double months;
	cin >> days;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in days: ";
		cin >> days;
	}
	months = days * 0.0328767123;
	cout << months << " months." << endl;
	return months;
}
double daystoseconds(double days)
{
	cout << "enter value in days: ";
	double seconds;
	cin >> days;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in days: ";
		cin >> days;
	}
	seconds = days * 86400;
	cout << seconds << " seconds." << endl;
	return seconds;
}
double daystoweeks(double days)
{
	cout << "enter value in days: ";
	double weeks;
	cin >> days;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in days: ";
		cin >> days;
	}
	weeks = 1428571429;
	cout << weeks << " weeks." << endl;
	return weeks;
}
double daystoyears(double days)
{
	cout << "enter value in days: ";
	double years;
	cin >> days;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in days: ";
		cin >> days;
	}
	years = days * 0.002739726;
	cout << years << " years." << endl;
	return years;
}
//time option 2
double hourstodays(double hours)
{
	cout << "enter value in hours: ";
	double days;
	cin >> hours;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in hours: ";
		cin >> hours;
	}
	days = hours * 0.0416666666666667;
	cout << days << " days." << endl;
	return days;
}
double hourstominutes(double hours)
{
	cout << "enter value in hours: ";
	double minutes;
	cin >> hours;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in hours: ";
		cin >> hours;
	}
	minutes = hours * 60;
	cout << minutes << " minutes." << endl;
	return minutes;
}
double hourstomonths(double hours)
{
	cout << "enter value in hours: ";
	double months;
	cin >> hours;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in hours: ";
		cin >> hours;
	}
	months = hours * 0.001369863;
	cout << months << " months." << endl;
	return months;
}
double hourstoseconds(double hours)
{
	cout << "enter value in hours: ";
	double seconds;
	cin >> hours;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in hours: ";
		cin >> hours;
	}
	seconds = hours * 3600;
	cout << seconds << " seconds." << endl;
	return seconds;
}
double hourstoweeks(double hours)
{
	cout << "enter value in hours: ";
	double weeks;
	cin >> hours;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in hours: ";
		cin >> hours;
	}
	weeks = hours * 0.005952381;
	cout << weeks << " weeks." << endl;
	return weeks;
}
double hourstoyears(double hours)
{
	cout << "enter value in hours: ";
	double years;
	cin >> hours;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in hours: ";
		cin >> hours;
	}
	years = hours * 0.0001141552;
	cout << years << " years." << endl;
	return years;
}
//time option 3
double minutestodays(double minutes)
{
	cout << "enter value in minutes: ";
	double days;
	cin >> minutes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		cout << "enter value in minutes: ";
		cin >> minutes;
	}
	days = minutes * 0.000694444444444444;
	cout << days << " days." << endl;
	return days;
}
double minutestohours(double minutes)
{
	cout << "enter value in minutes: ";
	double hours;
	cin >> minutes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		cout << "enter value in minutes: ";
		cin >> minutes;
	}
	hours = minutes * 0.0166666666666666666666667;
	cout << hours << " hours." << endl;
	return hours;
}
double minutestomonths(double minutes)
{
	cout << "enter value in minutes: ";
	double months;
	cin >> minutes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		cout << "enter value in minutes: ";
		cin >> minutes;
	}
	months = minutes * 0.0000228310502283105;//1/60/24/365*12
	cout << months << " months." << endl;
	return months;
}
double minutestoseconds(double minutes)
{
	cout << "enter value in minutes: ";
	double seconds;
	cin >> minutes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		cout << "enter value in minutes: ";
		cin >> minutes;
	}
	seconds = minutes * 60;
	cout << seconds << " seconds." << endl;
	return seconds;
}
double minutestoweeks(double minutes)
{
	cout << "enter value in minutes: ";
	double weeks;
	cin >> minutes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		cout << "enter value in minutes: ";
		cin >> minutes;
	}
	weeks = minutes * 0.000099206349206349;
	cout << weeks << " weeks." << endl;
	return weeks;
}
double minutestoyears(double minutes)
{
	cout << "enter value in minutes: ";
	double years;
	cin >> minutes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		cout << "enter value in minutes: ";
		cin >> minutes;
	}
	years = minutes * 0.00000190258751902587;
	cout << years << " years." << endl;
	return years;
}
//time option 4
double monthstodays(double months)
{
	cout << "enter value in months: ";
	double days;
	cin >> months;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in months: ";
		cin >> months;
	}
	days = months * 30.4167;
	cout << days << " days." << endl;
	return days;
}
double monthstohours(double months)
{
	cout << "enter value in months: ";
	double hours;
	cin >> months;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in months: ";
		cin >> months;
	}
	hours = months * 730.0008000000;
	cout << hours << " hours." << endl;
	return hours;
}
double monthstominutes(double months)
{
	cout << "enter value in months: ";
	double minutes;
	cin >> months;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in months: ";
		cin >> months;
	}
	minutes = months * 43800;
	cout << minutes << " minutes." << endl;
	return minutes;
}
double monthstoseconds(double months)
{
	cout << "enter value in months: ";
	double seconds;
	cin >> months;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in months: ";
		cin >> months;
	}
	seconds = months * 2628000;
	cout << seconds << " seconds." << endl;
	return seconds;
}
double monthstoweeks(double months)
{
	cout << "enter value in months: ";
	double weeks;
	cin >> months;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in months: ";
		cin >> months;
	}
	weeks = months * 4.345242857143;
	cout << weeks << " weeks." << endl;
	return weeks;
}
double monthstoyears(double months)
{
	cout << "enter value in months: ";
	double years;
	cin >> months;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in months: ";
		cin >> months;
	}
	years = months * 0.083333424657534;
	cout << years << " years." << endl;
	return years;
}
//time option 5
double secondstodays(double seconds)
{
	cout << "enter value in seconds: ";
	double days;
	cin >> seconds;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in seconds: ";
		cin >> seconds;
	}
	days = seconds * 0.000011574074074074;
	cout << days << " days." << endl;
	return days;
}
double secondstohours(double seconds)
{
	cout << "enter value in seconds: ";
	double hours;
	cin >> seconds;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in seconds: ";
		cin >> seconds;
	}
	hours = seconds * 0.0002777777777777777778;
	cout << hours << " hours." << endl;
	return hours;
}
double secondstominutes(double seconds)
{
	cout << "enter value in seconds: ";
	double minutes;
	cin >> seconds;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in seconds: ";
		cin >> seconds;
	}
	minutes = seconds * 0.16666666666666666667;
	cout << minutes << " minutes." << endl;
	return minutes;
}
double secondstomonths(double seconds)
{
	cout << "enter value in seconds: ";
	double months;
	cin >> seconds;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in seconds: ";
		cin >> seconds;
	}
	months = seconds * 3.80517503805175e-7;//months based on avg 30.44 days
	cout << months << " months." << endl;//1/60/60/24/365*12
	return months;
}
double secondstoweeks(double seconds)
{
	cout << "enter value in seconds: ";
	double weeks;
	cin >> seconds;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in seconds: ";
		cin >> seconds;
	}
	weeks = seconds * 0.0000016534391534391;
	cout << weeks << " weeks." << endl;
	return weeks;
}
double secondstoyears(double seconds)
{
	cout << "enter value in seconds: ";
	double years;
	cin >> seconds;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in seconds: ";
	}
	years = seconds * 3.17097919837645e-8;
	cout << years << " years." << endl;
	return years;
}
//time option 6
double weekstodays(double weeks)
{
	cout << "enter value in weeks: ";
	double days;
	cin >> weeks;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in weeks: ";
		cin >> weeks;
	}
	days = weeks * 7;
	cout << days << " days." << endl;
	return days;
}
double weekstohours(double weeks)
{
	cout << "enter value in weeks: ";
	double hours;
	cin >> weeks;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in weeks: ";
		cin >> weeks;
	}
	hours = weeks * 168;
	cout << hours << " hours." << endl;
	return hours;
}
double weekstominutes(double weeks)
{
	cout << "enter value in weeks: ";
	double minutes;
	cin >> weeks;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in weeks: ";
		cin >> weeks;
	}
	minutes = weeks * 10080;
	cout << minutes << " minutes." << endl;
	return minutes;
}
double weekstomonths(double weeks)
{
	cout << "enter value in weeks: ";
	double months;
	cin >> weeks;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in weeks: ";
		cin >> weeks;
	}
	months = weeks * 0.2301367340967298;
	cout << months << " months." << endl;
	return months;
}
double weekstoseconds(double weeks)
{
	cout << "enter value in weeks: ";
	double seconds;
	cin >> weeks;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in weeks: ";
		cin >> weeks;
	}
	seconds = weeks * 604800;
	cout << seconds << " seconds." << endl;
	return seconds;
}
double weekstoyears(double weeks)
{
	cout << "enter value in weeks: ";
	double years;
	cin >> weeks;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in weeks: ";
		cin >> weeks;
	}
	years = weeks * 0.0191780821917808;
	cout << years << " years." << endl;
	return years;
}
//time option 7
double yearstodays(double years)
{
	cout << "enter value in years: ";
	double days;
	cin >> years;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in years: ";
		cin >> years;
	}
	days = years * 365;
	cout << days << " days." << endl;
	return days;
}
double yearstohours(double years)
{
	cout << "enter value in years: ";
	double hours;
	cin >> years;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in years: ";
		cin >> years;
	}
	hours = years * 8760;
	cout << hours << " hours." << endl;
	return hours;
}
double yearstominutes(double years)
{
	cout << "enter value in years: ";
	double minutes;
	cin >> years;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in years: ";
		cin >> years;
	}
	minutes = years * 525600;
	cout << minutes << " minutes." << endl;
	return minutes;
}
double yearstomonths(double years)
{
	cout << "enter value in years: ";
	double months;
	cin >> years;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in years: ";
		cin >> years;
	}
	months = years * 11.99998684932948;
	cout << months << " months." << endl;
	return months;
}
double yearstoseconds(double years)
{
	cout << "enter value in years: ";
	double seconds;
	cin >> years;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in years: ";
		cin >> years;
	}
	seconds = years * 31536000;
	cout << seconds << " seconds." << endl;
	return seconds;
}
double yearstoweeks(double years)
{
	cout << "enter value in years: ";
	double weeks;
	cin >> years;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in years: ";
		cin >> years;
	}
	weeks = years * 52.1428571428571;
	cout << weeks << " weeks." << endl;
	return weeks;
}