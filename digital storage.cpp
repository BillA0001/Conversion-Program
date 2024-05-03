//Option 2: Digital Storage, Option 1
double bitstobytes(double bits)
{
	cout << "enter value in bits: ";
	double bytes;
	cin >> bits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in bits: ";
		cin >> bits;
	}
	bytes = bits * 0.125;
	cout << bytes << " bytes." << endl;
	return bytes;
}
double bitstokibibits(double bits)
{
	cout << "enter value in bits: ";
	double kibibits;
	cin >> bits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in bits: ";
		cin >> bits;
	}
	kibibits = bits * 0.0009765625;
	cout << kibibits << " kibibits." << endl;
	return kibibits;
}
double bitstokibibytes(double bits)
{
	cout << "enter value in bits: ";
	double kibibytes;
	cin >> bits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in bits: ";
		cin >> bits;
	}
	kibibytes = bits * 0.0001220703;
	cout << kibibytes << " kibibytes." << endl;
	return kibibytes;
}
double bitstokilobits(double bits)
{
	cout << "enter value in bits: ";
	double kilobits;
	cin >> bits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in bits: ";
		cin >> bits;
	}
	kilobits = bits * 0.001;
	cout << kilobits << " kilobits." << endl;
	return kilobits;
}
double bitstokilobytes(double bits)
{
	cout << "enter value in bits: ";
	double kilobytes;
	cin >> bits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in bits: ";
		cin >> bits;
	}
	kilobytes = bits * 0.000125;
	cout << kilobytes << " kilobytes" << endl;
	return kilobytes;
}
double bitstomebibits(double bits)
{
	cout << "enter value in bits: ";
	double mebibits;
	cin >> bits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in bits: ";
		cin >> bits;
	}
	mebibits = bits * 9.5367431e-7;
	cout << mebibits << " mebibits." << endl;
	return mebibits;
}
double bitstomebibytes(double bits)
{
	cout << "enter value in bits: ";
	double mebibytes;
	cin >> bits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in bits: ";
		cin >> bits;
	}
	mebibytes = bits * 1.1920928e-7;
	cout << mebibytes << " mebibytes." << endl;
	return mebibytes;
}
double bitstomegabits(double bits)
{
	cout << "enter value in bits: ";
	double megabits;
	cin >> bits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in bits: ";
		cin >> bits;
	}
	megabits = bits * 0.000001;
	cout << megabits << " megabits." << endl;
	return megabits;
}
double bitstomegabytes(double bits)
{
	cout << "enter value in bits: ";
	double megabytes;
	cin >> bits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in bits: ";
		cin >> bits;
	}
	megabytes = bits * 0.000000125;
	cout << megabytes << " megabytes." << endl;
	return megabytes;
}
double bitstogibibits(double bits)
{
	cout << "enter value in bits: ";
	double gibibits;
	cin >> bits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in bits: ";
		cin >> bits;
	}
	gibibits = bits * 9.313225e-10;
	cout << gibibits << " gibibits." << endl;
	return gibibits;
}
double bitstogibibytes(double bits)
{
	cout << "enter value in bits: ";
	double gibibytes;
	cin >> bits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in bits: ";
		cin >> bits;
	}
	gibibytes = bits * 1.164153e-10;
	cout << gibibytes << " gibibytes." << endl;
	return gibibytes;
}
double bitstogigabits(double bits)
{
	cout << "enter value in bits: ";
	double gigabits;
	cin >> bits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in bits: ";
		cin >> bits;
	}
	gigabits = bits * 1e-9;
	cout << gigabits << " gigabits." << endl;
	return gigabits;
}
double bitstogigabytes(double bits)
{
	cout << "enter value in bits: ";
	double gigabytes;
	cin >> bits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in bits: ";
		cin >> bits;
	}
	gigabytes = bits * 1.25e-10;
	cout << gigabytes << " gigabytes." << endl;
	return gigabytes;
}
double bitstotebibits(double bits)
{
	cout << "enter value in bits: ";
	double tebibits;
	cin >> bits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in bits: ";
		cin >> bits;
	}
	tebibits = bits * 9.094947e-13;
	cout << tebibits << " tebibits." << endl;
	return tebibits;
}
double bitstotebibytes(double bits)
{
	cout << "enter value in bits: ";
	double tebibytes;
	cin >> bits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in bits: ";
		cin >> bits;
	}
	tebibytes = bits * 1.136868e-13;
	cout << tebibytes << " tebibytes." << endl;
	return tebibytes;
}
double bitstoterabits(double bits)
{
	cout << "enter value in bits: ";
	double terabits;
	cin >> bits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in bits: ";
		cin >> bits;
	}
	terabits = bits * 1e-12;
	cout << terabits << " terabits." << endl;
	return terabits;
}
double bitstoterabytes(double bits)
{
	cout << "enter value in bits: ";
	double terabytes;
	cin >> bits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in bits: ";
		cin >> bits;
	}
	terabytes = bits * 1.25e-13;
	cout << terabytes << " terabytes." << endl;
	return terabytes;
}
//Digital Storage Option 2
double bytestobits(double bytes)
{
	cout << "enter value in bytes: ";
	double bits;
	cin >> bytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in bytes: ";
		cin >> bytes;
	}
	bits = bytes * 8;
	cout << bits << " bits." << endl;
	return bits;
}
double bytestokibibits(double bytes)
{
	cout << "enter value in bytes: ";
	double kibibits;
	cin >> bytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in bytes: ";
		cin >> bytes;
	}
	kibibits = bytes * 0.0078125;
	cout << kibibits << " kibibits." << endl;
	return kibibits;
}
double bytestokibibytes(double bytes)
{
	cout << "enter value in bytes: ";
	double kibibytes;
	cin >> bytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in bytes: ";
		cin >> bytes;
	}
	kibibytes = bytes * 0.0009765625;
	cout << kibibytes << " kibibytes." << endl;
	return kibibytes;
}
double bytestokilobits(double bytes)
{
	cout << "enter value in bytes: ";
	double kilobits;
	cin >> bytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in bytes: ";
		cin >> bytes;
	}
	kilobits = bytes * 0.008;
	cout << kilobits << " kilobits." << endl;
	return kilobits;
}
double bytestokilobytes(double bytes)
{
	cout << "enter value in bytes: ";
	double kilobytes;
	cin >> bytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in bytes: ";
		cin >> bytes;
	}
	kilobytes = bytes * 0.001;
	cout << kilobytes << " kilobytes" << endl;
	return kilobytes;
}
double bytestomebibits(double bytes)
{
	cout << "enter value in bytes: ";
	double mebibits;
	cin >> bytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in bytes: ";
		cin >> bytes;
	}
	mebibits = bytes * 7.6293939453e-6;
	cout << mebibits << " mebibits." << endl;
	return mebibits;
}
double bytestomebibytes(double bytes)
{
	cout << "enter value in bytes: ";
	double mebibytes;
	cin >> bytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in bytes: ";
		cin >> bytes;
	}
	mebibytes = bytes * 9.53674316e-7;
	cout << mebibytes << " mebibytes." << endl;
	return mebibytes;
}
double bytestomegabits(double bytes)
{
	cout << "enter value in bytes: ";
	double megabits;
	cin >> bytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in bytes: ";
		cin >> bytes;
	}
	megabits = bytes * 8e-6;
	cout << megabits << " megabits." << endl;
	return megabits;
}
double bytestomegabytes(double bytes)
{
	cout << "enter value in bytes: ";
	double megabytes;
	cin >> bytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in bytes: ";
		cin >> bytes;
	}
	megabytes = bytes * 1e-6;
	cout << megabytes << " megabytes." << endl;
	return megabytes;
}
double bytestogibibits(double bytes)
{
	cout << "enter value in bytes: ";
	double gibibits;
	cin >> bytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in bytes: ";
		cin >> bytes;
	}
	gibibits = bytes * 7.4505806e-9;
	cout << gibibits << " gibibits." << endl;
	return gibibits;
}
double bytestogibibytes(double bytes)
{
	cout << "enter value in bytes: ";
	double gibibytes;
	cin >> bytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in bytes: ";
		cin >> bytes;
	}
	gibibytes = bytes * 9.31322575e-10;
	cout << gibibytes << " gibibytes." << endl;
	return gibibytes;
}
double bytestogigabits(double bytes)
{
	cout << "enter value in bytes: ";
	double gigabits;
	cin >> bytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in bytes: ";
		cin >> bytes;
	}
	gigabits = bytes * 8e-9;
	cout << gigabits << " gigabits." << endl;
	return gigabits;
}
double bytestogigabytes(double bytes)
{
	cout << "enter value in bytes: ";
	double gigabytes;
	cin >> bytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in bytes: ";
		cin >> bytes;
	}
	gigabytes = bytes * 1e-9;
	cout << gigabytes << " gigabytes." << endl;
	return gigabytes;
}
double bytestotebibits(double bytes)
{
	cout << "enter value in bytes: ";
	double tebibits;
	cin >> bytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in bytes: ";
		cin >> bytes;
	}
	tebibits = bytes * 7.27595761e-12;
	cout << tebibits << " tebibits." << endl;
	return tebibits;
}
double bytestotebibytes(double bytes)
{
	cout << "enter value in bytes: ";
	double tebibytes;
	cin >> bytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in bytes: ";
		cin >> bytes;
	}
	tebibytes = bytes * 9.09494702e-13;
	cout << tebibytes << " tebibytes." << endl;
	return tebibytes;
}
double bytestoterabits(double bytes)
{
	cout << "enter value in bytes: ";
	double terabits;
	cin >> bytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in bytes: ";
		cin >> bytes;
	}
	terabits = bytes * 8e-12;
	cout << terabits << " terabits." << endl;
	return terabits;
}
double bytestoterabytes(double bytes)
{
	cout << "enter value in bytes: ";
	double terabytes;
	cin >> bytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in bytes: ";
		cin >> bytes;
	}
	terabytes = bytes * 1e-12;
	cout << terabytes << " terabytes." << endl;
	return terabytes;
}
//Digital Storage Option 3
double kibibitstobits(double kibibits)
{
	cout << "enter value in kibibits: ";
	double bits;
	cin >> kibibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kibibits: ";
		cin >> kibibits;
	}
	bits = kibibits * 1024;
	cout << bits << " bits." << endl;
	return bits;
}
double kibibitstobytes(double kibibits)
{
	cout << "enter value in kibibits: ";
	double bytes;
	cin >> kibibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kibibits: ";
		cin >> kibibits;
	}
	bytes = kibibits * 128;
	cout << bytes << " bytes." << endl;
	return bytes;
}
double kibibitstokibibytes(double kibibits)
{
	cout << "enter value in kibibits: ";
	double kibibytes;
	cin >> kibibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kibibits: ";
		cin >> kibibits;
	}
	kibibytes = kibibits * 0.125;
	cout << kibibytes << " kibibytes." << endl;
	return kibibytes;
}
double kibibitstokilobits(double kibibits)
{
	cout << "enter value in kibibits: ";
	double kilobits;
	cin >> kibibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kibibits: ";
		cin >> kibibits;
	}
	kilobits = kibibits * 1.024;
	cout << kilobits << " kilobits." << endl;
	return kilobits;
}
double kibibitstokilobytes(double kibibits)
{
	cout << "enter value in kibibits: ";
	double kilobytes;
	cin >> kibibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kibibits: ";
		cin >> kibibits;
	}
	kilobytes = kibibits * 0.128;
	cout << kilobytes << " kilobytes";
	return kilobytes;
}
double kibibitstomebibits(double kibibits)
{
	cout << "enter value in kibibits: ";
	double mebibits;
	cin >> kibibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kibibits: ";
		cin >> kibibits;
	}
	mebibits = kibibits * 0.000976563;
	cout << mebibits << " mebibits." << endl;
	return mebibits;
}
double kibibitstomebibytes(double kibibits)
{
	cout << "enter value in kibibits: ";
	double mebibytes;
	cin >> kibibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kibibits: ";
		cin >> kibibits;
	}
	mebibytes = kibibits * 0.00012207;
	cout << mebibytes << " mebibytes." << endl;
	return mebibytes;
}
double kibibitstomegabits(double kibibits)
{
	cout << "enter value in kibibits: ";
	double megabits;
	cin >> kibibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kibibits: ";
		cin >> kibibits;
	}
	megabits = kibibits * 0.001024;
	cout << megabits << " megabits." << endl;

	return megabits;
}
double kibibitstomegabytes(double kibibits)
{
	cout << "enter value in kibibits: ";
	double megabytes;
	cin >> kibibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kibibits: ";
		cin >> kibibits;
	}
	megabytes = kibibits * 0.000122;
	cout << megabytes << " megabytes." << endl;
	return megabytes;
}
double kibibitstogibibits(double kibibits)
{
	cout << "enter value in kibibits: ";
	double gibibits;
	cin >> kibibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kibibits: ";
		cin >> kibibits;
	}
	gibibits = kibibits * 9.53674316e-7;
	cout << gibibits << " gibibits." << endl;
	return gibibits;
}
double kibibitstogibibytes(double kibibits)
{
	cout << "enter value in kibibits: ";
	double gibibytes;
	cin >> kibibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kibibits: ";
		cin >> kibibits;
	}
	gibibytes = kibibits * 1.1920929e-7;
	cout << gibibytes << " gibibytes." << endl; return gibibytes;
}
double kibibitstogigabits(double kibibits)
{
	cout << "enter value in kibibits: ";
	double gigabits;
	cin >> kibibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kibibits: ";
		cin >> kibibits;
	}
	gigabits = kibibits * 1.024e-6;
	cout << gigabits << " gigabits." << endl;
	return gigabits;
}
double kibibitstogigabytes(double kibibits)
{
	cout << "enter value in kibibits: ";
	double gigabytes;
	cin >> kibibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kibibits: ";
		cin >> kibibits;
	}
	gigabytes = kibibits * 1.28e-7;
	cout << gigabytes << " gigabytes";
	return gigabytes;
}
double kibibitstotebibits(double kibibits)
{
	cout << "enter value in kibibits: ";
	double tebibits;
	cin >> kibibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kibibits: ";
		cin >> kibibits;
	}
	tebibits = kibibits * 9.31322575e-10;
	cout << tebibits << " tebibits." << endl;
	return tebibits;
}
double kibibitstotebibytes(double kibibits)
{
	cout << "enter value in kibibits: ";
	double tebibytes;
	cin >> kibibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kibibits: ";
		cin >> kibibits;
	}
	tebibytes = kibibits * 1.16415322e-10;
	cout << tebibytes << " tebibytes." << endl;
	return tebibytes;
}
double kibibitstoterabits(double kibibits)
{
	cout << "enter value in kibibits: ";
	double terabits;
	cin >> kibibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kibibits: ";
		cin >> kibibits;
	}
	terabits = kibibits * 1.024e-9;
	cout << terabits << " terabits." << endl;
	return terabits;
}
double kibibitstoterabytes(double kibibits)
{
	cout << "enter value in kibibits: ";
	double terabytes;
	cin >> kibibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kibibits: ";
		cin >> kibibits;
	}
	terabytes = kibibits * 1.28e-10;
	cout << terabytes << " terabytes." << endl;
	return terabytes;
}
//Digital Storage Option 4
double kibibytestobits(double kibibytes)
{
	cout << "enter value in kibibytes: ";
	double bits;
	cin >> kibibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kibibytes: ";
		cin >> kibibytes;
	}
	bits = kibibytes * 8192;
	cout << bits << " bits." << endl;
	return bits;
}
double kibibytestobytes(double kibibytes)
{
	cout << "enter value in kibibytes: ";
	double bytes;
	cin >> kibibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kibibytes: ";
		cin >> kibibytes;
	}
	bytes = kibibytes * 1024;
	cout << bytes << " bytes." << endl;
	return bytes;
}
double kibibytestokibibits(double kibibytes)
{
	cout << "enter value in kibibytes: ";
	double kibibits;
	cin >> kibibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kibibytes: ";
		cin >> kibibytes;
	}
	kibibits = kibibytes * 8;
	cout << kibibits << " kibibits." << endl;
	return kibibits;
}
double kibibytestokilobits(double kibibytes)
{
	cout << "enter value in kibibytes: ";
	double kilobits;
	cin >> kibibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kibibytes: ";
		cin >> kibibytes;
	}
	kilobits = kibibytes * 8.192;
	cout << kilobits << " kilobits." << endl;
	return kilobits;
}
double kibibytestokilobytes(double kibibytes)
{
	cout << "enter value in kibibytes: ";
	double kilobytes;
	cin >> kibibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kibibytes: ";
		cin >> kibibytes;
	}
	kilobytes = kibibytes * 1.024;
	cout << kilobytes << " kilobytes";
	return kilobytes;
}
double kibibytestomebibits(double kibibytes)
{
	cout << "enter value in kibibytes: ";
	double mebibits;
	cin >> kibibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kibibytes: ";
		cin >> kibibytes;
	}
	mebibits = kibibytes * 0.0078125;
	cout << mebibits << " mebibits." << endl;
	return mebibits;
}
double kibibytestomebibytes(double kibibytes)
{
	cout << "enter value in kibibytes: ";
	double mebibytes;
	cin >> kibibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kibibytes: ";
		cin >> kibibytes;
	}
	mebibytes = kibibytes * 0.0009765625;
	cout << mebibytes << " mebibytes." << endl;
	return mebibytes;
}
double kibibytestomegabits(double kibibytes)
{
	cout << "enter value in kibibytes: ";
	double megabits;
	cin >> kibibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kibibytes: ";
		cin >> kibibytes;
	}
	megabits = kibibytes * 0.001;
	cout << megabits << " megabits." << endl;
	return megabits;
}
double kibibytestomegabytes(double kibibytes)
{
	cout << "enter value in kibibytes: ";
	double megabytes;
	cin >> kibibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kibibytes: ";
		cin >> kibibytes;
	}
	megabytes = kibibytes * 0.001024;
	cout << megabytes << " megabytes." << endl;
	return megabytes;
}
double kibibytestogibibits(double kibibytes)
{
	cout << "enter value in kibibytes: ";
	double gibibits;
	cin >> kibibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kibibytes: ";
		cin >> kibibytes;
	}
	gibibits = kibibytes * 7.62939453e-6;
	cout << gibibits << " gibibits." << endl;
	return gibibits;
}
double kibibytestogibibytes(double kibibytes)
{
	cout << "enter value in kibibytes: ";
	double gibibytes;
	cin >> kibibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kibibytes: ";
		cin >> kibibytes;
	}
	gibibytes = kibibytes * 9.53674316e-7;
	cout << gibibytes << " gibibytes." << endl;
	return gibibytes;
}
double kibibytestogigabits(double kibibytes)
{
	cout << "enter value in kibibytes: ";
	double gigabits;
	cin >> kibibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kibibytes: ";
		cin >> kibibytes;
	}
	gigabits = kibibytes * 8.192e-6;
	cout << gigabits << " gigabits." << endl;
	return gigabits;
}
double kibibytestogigabytes(double kibibytes)
{
	cout << "enter value in kibibytes: ";
	double gigabytes;
	cin >> kibibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kibibytes: ";
		cin >> kibibytes;
	}
	gigabytes = kibibytes * 1.024e-6;
	cout << gigabytes << " gigabytes." << endl;
	return gigabytes;
}
double kibibytestotebibits(double kibibytes)
{
	cout << "enter value in kibibytes: ";
	double tebibits;
	cin >> kibibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kibibytes: ";
		cin >> kibibytes;
	}
	tebibits = kibibytes * 7.4505806e-9;
	cout << tebibits << " tebibits." << endl;
	return tebibits;
}
double kibibytestotebibytes(double kibibytes)
{
	cout << "enter value in kibibytes: ";
	double tebibytes;
	cin >> kibibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kibibytes: ";
		cin >> kibibytes;
	}
	tebibytes = kibibytes * 9.31322575;
	cout << tebibytes << " tebibytes." << endl;
	return tebibytes;
}
double kibibytestoterabits(double kibibytes)
{
	cout << "enter value in kibibytes: ";
	double terabits;
	cin >> kibibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kibibytes: ";
		cin >> kibibytes;
	}
	terabits = kibibytes * 8.192e-9;
	cout << terabits << " terabits." << endl;
	return terabits;
}
double kibibytestoterabytes(double kibibytes)
{
	cout << "enter value in kibibytes: ";
	double terabytes;
	cin >> kibibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kibibytes: ";
		cin >> kibibytes;
	}
	terabytes = kibibytes * 1.024e-9;
	cout << terabytes << " terabytes." << endl;
	return terabytes;
}
//Digital Storage Option 5
double kilobitstobits(double kilobits)
{
	cout << "enter value in kilobits: ";
	double bits;
	cin >> kilobits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilobits: ";
		cin >> kilobits;
	}
	bits = kilobits * 1000;
	cout << bits << " bits." << endl;
	return bits;
}
double kilobitstobytes(double kilobits)
{
	cout << "enter value in kilobits: ";
	double bytes;
	cin >> kilobits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilobits: ";
		cin >> kilobits;
	}
	bytes = kilobits * 125;
	cout << bytes << " bytes." << endl;
	return bytes;
}
double kilobitstokibibits(double kilobits)
{
	cout << "enter value in kilobits: ";
	double kibibits;
	cin >> kilobits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilobits: ";
		cin >> kilobits;
	}
	kibibits = kilobits * 0.9765625;
	cout << kibibits << " kibibits." << endl;
	return kibibits;
}
double kilobitstokibibytes(double kilobits)
{
	cout << "enter value in kilobits: ";
	double kibibytes;
	cin >> kilobits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilobits: ";
		cin >> kilobits;
	}
	kibibytes = kilobits * 0.122070312;
	cout << kibibytes << " kibibytes." << endl;
	return kibibytes;
}
double kilobitstokilobytes(double kilobits)
{
	cout << "enter value in kilobits: ";
	double kilobytes;
	cin >> kilobits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilobits: ";
		cin >> kilobits;
	}
	kilobytes = kilobits * 0.125;
	cout << kilobytes << " kilobytes" << endl;
	return kilobytes;
}
double kilobitstomebibits(double kilobits)
{
	cout << "enter value in kilobits: ";
	double mebibits;
	cin >> kilobits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilobits: ";
		cin >> kilobits;
	}
	mebibits = kilobits * 0.000953674316;
	cout << mebibits << " mebibits." << endl;
	return mebibits;
}
double kilobitstomebibytes(double kilobits)
{
	cout << "enter value in kilobits: ";
	double mebibytes;
	cin >> kilobits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilobits: ";
		cin >> kilobits;
	}
	mebibytes = kilobits * 0.00011920929;
	cout << mebibytes << " mebibytes." << endl;
	return mebibytes;
}
double kilobitstomegabits(double kilobits)
{
	cout << "enter value in kilobits: ";
	double megabits;
	cin >> kilobits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilobits: ";
		cin >> kilobits;
	}
	megabits = kilobits * 0.001;
	cout << megabits << " megabits." << endl;
	return megabits;
}
double kilobitstomegabytes(double kilobits)
{
	cout << "enter value in kilobits: ";
	double megabytes;
	cin >> kilobits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilobits: ";
		cin >> kilobits;
	}
	megabytes = kilobits * 0.000125;
	cout << megabytes << " megabytes." << endl;
	return megabytes;
}
double kilobitstogibibits(double kilobits)
{
	cout << "enter value in kilobits: ";
	double gibibits;
	cin >> kilobits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilobits: ";
		cin >> kilobits;
	}
	gibibits = kilobits * 9.31322575e-7;
	cout << gibibits << " gibibits." << endl;
	return gibibits;
}
double kilobitstogibibytes(double kilobits)
{
	cout << "enter value in kilobits: ";
	double gibibytes;
	cin >> kilobits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilobits: ";
		cin >> kilobits;
	}
	gibibytes = kilobits * 1.16415322;
	cout << gibibytes << " gibibytes." << endl;
	return gibibytes;
}
double kilobitstogigabits(double kilobits)
{
	cout << "enter value in kilobits: ";
	double gigabits;
	cin >> kilobits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilobits: ";
		cin >> kilobits;
	}
	gigabits = kilobits * 1e-6;
	cout << gigabits << " gigabits." << endl;
	return gigabits;
}
double kilobitstogigabytes(double kilobits)
{
	cout << "enter value in kilobits: ";
	double gigabytes;
	cin >> kilobits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilobits: ";
		cin >> kilobits;
	}
	gigabytes = kilobits * 1.25e-7;
	cout << gigabytes << " gigabytes." << endl;
	return gigabytes;
}
double kilobitstotebibits(double kilobits)
{
	cout << "enter value in kilobits: ";
	double tebibits;
	cin >> kilobits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilobits: ";
		cin >> kilobits;
	}
	tebibits = kilobits * 9.09494702e-10;
	cout << tebibits << " tebibits." << endl;
	return tebibits;
}
double kilobitstotebibytes(double kilobits)
{
	cout << "enter value in kilobits: ";
	double tebibytes;
	cin >> kilobits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilobits: ";
		cin >> kilobits;
	}
	tebibytes = kilobits * 1.13686838e-10;
	cout << tebibytes << " tebibytes." << endl;
	return tebibytes;
}
double kilobitstoterabits(double kilobits)
{
	cout << "enter value in kilobits: ";
	double terabits;
	cin >> kilobits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilobits: ";
		cin >> kilobits;
	}
	terabits = kilobits * 1e-9;
	cout << terabits << " terabits." << endl;
	return terabits;
}
double kilobitstoterabytes(double kilobits)
{
	cout << "enter value in kilobits: ";
	double terabytes;
	cin >> kilobits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilobits: ";
		cin >> kilobits;
	}
	terabytes = kilobits * 1.25e-10;
	cout << terabytes << " terabytes." << endl;
	return terabytes;
}
//Digital Storage Option 6
double kilobytestobits(double kilobytes)
{
	cout << "enter value in kilobytes: ";
	double bits;
	cin >> kilobytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilobytes: ";
		cin >> kilobytes;
	}
	bits = kilobytes * 8000;
	cout << bits << " bits." << endl;
	return bits;
}
double kilobytestobytes(double kilobytes)
{
	cout << "enter value in kilobytes: ";
	double bytes;
	cin >> kilobytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilobytes: ";
		cin >> kilobytes;
	}
	bytes = kilobytes * 1000;
	cout << bytes << " bytes." << endl;
	return bytes;
}
double kilobytestokibibits(double kilobytes)
{
	cout << "enter value in kilobytes: ";
	double kibibits;
	cin >> kilobytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilobytes: ";
		cin >> kilobytes;
	}
	kibibits = kilobytes * 7.8125;
	cout << kibibits << " kibibits." << endl;
	return kibibits;
}
double kilobytestokibibytes(double kilobytes)
{
	cout << "enter value in kilobytes: ";
	double kibibytes;
	cin >> kilobytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilobytes: ";
		cin >> kilobytes;
	}
	kibibytes = kilobytes * 0.9765625;
	cout << kibibytes << " kibibytes." << endl;
	return kibibytes;
}
double kilobytestokilobits(double kilobytes)
{
	cout << "enter value in kilobytes: ";
	double kilobits;
	cin >> kilobytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilobytes: ";
		cin >> kilobytes;
	}
	kilobits = kilobytes * 8;
	cout << kilobits << "kilobits" << endl;
	return kilobits;
}
double kilobytestomebibits(double kilobytes)
{
	cout << "enter value in kilobytes: ";
	double mebibits;
	cin >> kilobytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilobytes: ";
		cin >> kilobytes;
	}
	mebibits = kilobytes * 0.00762939453;
	cout << mebibits << " mebibits." << endl;
	return mebibits;
}
double kilobytestomebibytes(double kilobytes)
{
	cout << "enter value in kilobytes: ";
	double mebibytes;
	cin >> kilobytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilobytes: ";
		cin >> kilobytes;
	}
	mebibytes = kilobytes * 0.000953674316;
	cout << mebibytes << " mebibytes." << endl;
	return mebibytes;
}
double kilobytestomegabits(double kilobytes)
{
	cout << "enter value in kilobytes: ";
	double megabits;
	cin >> kilobytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilobytes: ";
		cin >> kilobytes;
	}
	megabits = kilobytes * 0.008;
	cout << megabits << " megabits." << endl;
	return megabits;
}
double kilobytestomegabytes(double kilobytes)
{
	cout << "enter value in kilobytes: ";
	double megabytes;
	cin >> kilobytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilobytes: ";
		cin >> kilobytes;
	}
	megabytes = kilobytes * 0.001;
	cout << megabytes << " megabytes." << endl;
	return megabytes;
}
double kilobytestogibibits(double kilobytes)
{
	cout << "enter value in kilobytes: ";
	double gibibits;
	cin >> kilobytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilobytes: ";
		cin >> kilobytes;
	}
	gibibits = kilobytes * 7.4505806e-6;
	cout << gibibits << " gibibits." << endl;
	return gibibits;
}
double kilobytestogibibytes(double kilobytes)
{
	cout << "enter value in kilobytes: ";
	double gibibytes;
	cin >> kilobytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilobytes: ";
		cin >> kilobytes;
	}
	gibibytes = kilobytes * 9.31322575e-7;
	cout << gibibytes << " gibibytes" << endl;
	return gibibytes;
}
double kilobytestogigabits(double kilobytes)
{
	cout << "enter value in kilobytes: ";
	double gigabits;
	cin >> kilobytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilobytes: ";
		cin >> kilobytes;
	}
	gigabits = kilobytes * 8e+6;
	cout << gigabits << " gigabits." << endl;
	return gigabits;
}
double kilobytestogigabytes(double kilobytes)
{
	cout << "enter value in kilobytes: ";
	double gigabytes;
	cin >> kilobytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilobytes: ";
		cin >> kilobytes;
	}
	gigabytes = kilobytes * 1e-6;
	cout << gigabytes << " gigabytes." << endl;
	return gigabytes;
}
double kilobytestotebibits(double kilobytes)
{
	cout << "enter value in kilobytes: ";
	double tebibits;
	cin >> kilobytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilobytes: ";
		cin >> kilobytes;
	}
	tebibits = kilobytes * 7.27595761e-9;
	cout << tebibits << " tebibits." << endl;
	return tebibits;
}
double kilobytestotebibytes(double kilobytes)
{
	cout << "enter value in kilobytes: ";
	double tebibytes;
	cin >> kilobytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilobytes: ";
		cin >> kilobytes;
	}
	tebibytes = kilobytes * 9.09495e-10;
	cout << tebibytes << " tebibytes." << endl;
	return tebibytes;
}
double kilobytestoterabits(double kilobytes)
{
	cout << "enter value in kilobytes: ";
	double terabits;
	cin >> kilobytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilobytes: ";
		cin >> kilobytes;
	}
	terabits = kilobytes * 8e-9;
	cout << terabits << " terabits." << endl;
	return terabits;
}
double kilobytestoterabytes(double kilobytes)
{
	cout << "enter value in kilobytes: ";
	double terabytes;
	cin >> kilobytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in kilobytes: ";
		cin >> kilobytes;
	}
	terabytes = kilobytes * 1e-9;
	cout << terabytes << " terabytes." << endl;
	return terabytes;
}
//Digital Storage Option 7
double mebibitstobits(double mebibits)
{
	cout << "enter value in mebibits: ";
	double bits;
	cin >> mebibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in mebibits: ";
		cin >> mebibits;
	}
	bits = mebibits * 1048576;
	cout << bits << " bits." << endl;
	return bits;
}
double mebibitstobytes(double mebibits)
{
	cout << "enter value in mebibits: ";
	double bytes;
	cin >> mebibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in mebibits: ";
		cin >> mebibits;
	}
	bytes = mebibits * 131072;
	cout << bytes << " bytes." << endl;
	return bytes;
}
double mebibitstokibibits(double mebibits)
{
	cout << "enter value in mebibits: ";
	double kibibits;
	cin >> mebibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in mebibits: ";
		cin >> mebibits;
	}
	kibibits = mebibits * 1024;
	cout << kibibits << " kibibits." << endl;
	return kibibits;
}
double mebibitstokibibytes(double mebibits)
{
	cout << "enter value in mebibits: ";
	double kibibytes;
	cin >> mebibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in mebibits: ";
		cin >> mebibits;
	}
	kibibytes = mebibits * 128;
	cout << kibibytes << " kibibytes." << endl;
	return kibibytes;
}
double mebibitstokilobits(double mebibits)
{
	cout << "enter value in mebibits: ";
	double kilobits;
	cin >> mebibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in mebibits: ";
		cin >> mebibits;
	}
	kilobits = mebibits * 1048.576;
	cout << kilobits << " kilobits." << endl;
	return kilobits;
}
double mebibitstokilobytes(double mebibits)
{
	cout << "enter value in mebibits: ";
	double kilobytes;
	cin >> mebibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in mebibits: ";
		cin >> mebibits;
	}
	kilobytes = mebibits * 131.072;
	cout << kilobytes << " kilobytes" << endl;
	return kilobytes;
}
double mebibitstomebibytes(double mebibits)
{
	cout << "enter value in mebibits: ";
	double mebibytes;
	cin >> mebibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in mebibits: ";
		cin >> mebibits;
	}
	mebibytes = mebibits * 0.125;
	cout << mebibytes << " mebibytes" << endl;
	return mebibytes;
}
double mebibitstomegabits(double mebibits)
{
	cout << "enter value in mebibits: ";
	double megabits;
	cin >> mebibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in mebibits: ";
		cin >> mebibits;
	}
	megabits = mebibits * 1.048576;
	cout << megabits << " megabits." << endl;
	return megabits;
}
double mebibitstomegabytes(double mebibits)
{
	cout << "enter value in mebibits: ";
	double megabytes;
	cin >> mebibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in mebibits: ";
		cin >> mebibits;
	}
	megabytes = mebibits * 0.131072;
	cout << megabytes << " megabytes." << endl;
	return megabytes;
}
double mebibitstogibibits(double mebibits)
{
	cout << "enter value in mebibits: ";
	double gibibits;
	cin >> mebibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in mebibits: ";
		cin >> mebibits;
	}
	gibibits = mebibits * 0.000976563;
	cout << gibibits << " gibibits." << endl;
	return gibibits;
}
double mebibitstogibibytes(double mebibits)
{
	cout << "enter value in mebibits: ";
	double gibibytes;
	cin >> mebibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in mebibits: ";
		cin >> mebibits;
	}
	gibibytes = mebibits * 0.00012207;
	cout << gibibytes << " gibibytes." << endl;
	return gibibytes;
}
double mebibitstogigabits(double mebibits)
{
	cout << "enter value in mebibits: ";
	double gigabits;
	cin >> mebibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in mebibits: ";
		cin >> mebibits;
	}
	gigabits = mebibits * 0.001048576;
	cout << gigabits << " gigabits." << endl;
	return gigabits;
}
double mebibitstogigabytes(double mebibits)
{
	cout << "enter value in mebibits: ";
	double gigabytes;
	cin >> mebibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in mebibits: ";
		cin >> mebibits;
	}
	gigabytes = mebibits * 0.000131072;
	cout << gigabytes << " gigabytes." << endl;
	return gigabytes;
}
double mebibitstotebibits(double mebibits)
{
	cout << "enter value in mebibits: ";
	double tebibits;
	cin >> mebibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in mebibits: ";
		cin >> mebibits;
	}
	tebibits = mebibits * 9.54e-7;
	cout << tebibits << " tebibits." << endl;
	return tebibits;
}
double mebibitstotebibytes(double mebibits)
{
	cout << "enter value in mebibits: ";
	double tebibytes;
	cin >> mebibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in mebibits: ";
		cin >> mebibits;
	}
	tebibytes = mebibits * 1.1920929e-7;
	cout << tebibytes << " tebibytes." << endl;
	return tebibytes;
}
double mebibitstoterabits(double mebibits)
{
	cout << "enter value in mebibits: ";
	double terabits;
	cin >> mebibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in mebibits: ";
		cin >> mebibits;
	}
	terabits = mebibits * 0.000001048576;
	cout << terabits << " terabits." << endl;
	return terabits;
}
double mebibitstoterabytes(double mebibits)
{
	cout << "enter value in mebibits: ";
	double terabytes;
	cin >> mebibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in mebibits: ";
		cin >> mebibits;
	}
	terabytes = mebibits * 1.31072e-7;
	cout << terabytes << " terabytes." << endl;
	return terabytes;
}
//Digital Storage Option 8
double mebibytestobits(double mebibytes)
{
	cout << "enter value in mebibytes: ";
	double bits;
	cin >> mebibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in mebibytes: ";
		cin >> mebibytes;
	}
	bits = mebibytes * 8388608;
	cout << bits << " bits." << endl;
	return bits;
}
double mebibytestobytes(double mebibytes)
{
	cout << "enter value in mebibytes: ";
	double bytes;
	cin >> mebibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in mebibytes: ";
		cin >> mebibytes;
	}
	bytes = mebibytes * 1048576;
	cout << bytes << " bytes." << endl;
	return bytes;
}
double mebibytestokibibits(double mebibytes)
{
	cout << "enter value in mebibytes: ";
	double kibibits;
	cin >> mebibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in mebibytes: ";
		cin >> mebibytes;
	}
	kibibits = mebibytes * 8192;
	cout << kibibits << " kibibits." << endl;
	return kibibits;
}
double mebibytestokibibytes(double mebibytes)
{
	cout << "enter value in mebibytes: ";
	double kibibytes;
	cin >> mebibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in mebibytes: ";
		cin >> mebibytes;
	}
	kibibytes = mebibytes * 1024;
	cout << kibibytes << " kibibytes." << endl;
	return kibibytes;
}
double mebibytestokilobits(double mebibytes)
{
	cout << "enter value in mebibytes: ";
	double kilobits;
	cin >> mebibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in mebibytes: ";
		cin >> mebibytes;
	}

	kilobits = mebibytes * 8388.608;
	cout << kilobits << " kilobits." << endl;
	return kilobits;
}
double mebibytestokilobytes(double mebibytes)
{
	cout << "enter value in mebibytes: ";
	double kilobytes;
	cin >> mebibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in mebibytes: ";
		cin >> mebibytes;
	}
	kilobytes = mebibytes * 1048.576;
	cout << kilobytes << " kilobytes." << endl;
	return kilobytes;
}
double mebibytestomebibits(double mebibytes)
{
	cout << "enter value in mebibytes: ";
	double mebibits;
	cin >> mebibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in mebibytes: ";
		cin >> mebibytes;
	}

	mebibits = mebibytes * 8;
	cout << mebibits << " mebibits." << endl;
	return mebibits;
}
double mebibytestomegabits(double mebibytes)
{
	cout << "enter value in mebibytes: ";
	double megabits;
	cin >> mebibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in mebibytes: ";
		cin >> mebibytes;
	}

	megabits = mebibytes * 8.388608;
	cout << megabits << " megabits." << endl;
	return megabits;
}
double mebibytestomegabytes(double mebibytes)
{
	cout << "enter value in mebibytes: ";
	double megabytes;
	cin >> mebibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in mebibytes: ";
		cin >> mebibytes;
	}
	megabytes = mebibytes * 1.048576;
	cout << megabytes << " megabytes." << endl;
	return megabytes;
}
double mebibytestogibibits(double mebibytes)
{
	cout << "enter value in mebibytes: ";
	double gibibits;
	cin >> mebibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in mebibytes: ";
		cin >> mebibytes;
	}
	gibibits = mebibytes * 0.0078125;
	cout << gibibits << " gibibits." << endl;
	return gibibits;
}
double mebibytestogibibytes(double mebibytes)
{
	cout << "enter value in mebibytes: ";
	double gibibytes;
	cin >> mebibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in mebibytes: ";
		cin >> mebibytes;
	}
	gibibytes = mebibytes * 0.0009765625;
	cout << gibibytes << " gibibytes." << endl;
	return gibibytes;
}
double mebibytestogigabits(double mebibytes)
{
	cout << "enter value in mebibytes: ";
	double gigabits;
	cin >> mebibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in mebibytes: ";
		cin >> mebibytes;
	}

	gigabits = mebibytes * 0.008388608;
	cout << gigabits << " gigabits." << endl;
	return gigabits;
}
double mebibytestogigabytes(double mebibytes)
{
	cout << "enter value in mebibytes: ";
	double gigabytes;
	cin >> mebibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in mebibytes: ";
		cin >> mebibytes;
	}
	gigabytes = mebibytes * 0.001048576;
	cout << gigabytes << " gigabytes." << endl;
	return gigabytes;
}
double mebibytestotebibits(double mebibytes)
{
	cout << "enter value in mebibytes: ";
	double tebibits;
	cin >> mebibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in mebibytes: ";
		cin >> mebibytes;
	}
	tebibits = mebibytes * 0.000007629394531;
	cout << tebibits << " tebibits." << endl;
	return tebibits;
}
double mebibytestotebibytes(double mebibytes)
{
	cout << "enter value in mebibytes: ";
	double tebibytes;
	cin >> mebibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in mebibytes: ";
		cin >> mebibytes;
	}
	tebibytes = mebibytes * 9.53674316e-7;
	cout << tebibytes << " tebibytes." << endl;
	return tebibytes;
}
double mebibytestoterabits(double mebibytes)
{
	cout << "enter value in mebibytes: ";
	double terabits;
	cin >> mebibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in mebibytes: ";
		cin >> mebibytes;
	}
	terabits = mebibytes * 0.000008388608;
	cout << terabits << " terabits." << endl;
	return terabits;
}
double mebibytestoterabytes(double mebibytes)
{
	cout << "enter value in mebibytes: ";
	double terabytes;
	cin >> mebibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in mebibytes: ";
		cin >> mebibytes;
	}
	terabytes = mebibytes * 0.000001048576;
	cout << terabytes << " terabytes." << endl;
	return terabytes;
}
//Digital Storage Option 9
double megabitstobits(double megabits)
{
	cout << "enter value in megabits: ";
	double bits;
	cin >> megabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in megabits: ";
		cin >> megabits;
	}
	bits = megabits * 1e+6;
	cout << bits << " bits." << endl;
	return bits;
}
double megabitstobytes(double megabits)
{
	cout << "enter value in megabits: ";
	double bytes;
	cin >> megabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in megabits: ";
		cin >> megabits;
	}
	bytes = megabits * 125000;
	cout << bytes << " bytes." << endl;
	return bytes;
}
double megabitstokibibits(double megabits)
{
	cout << "enter value in megabits: ";
	double kibibits;
	cin >> megabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in megabits: ";
		cin >> megabits;
	}
	kibibits = megabits * 976.5625;
	cout << kibibits << " kibibits." << endl;
	return kibibits;
}
double megabitstokibibytes(double megabits)
{
	cout << "enter value in megabits: ";
	double kibibytes;
	cin >> megabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in megabits: ";
		cin >> megabits;
	}
	kibibytes = megabits * 122.0703125;
	cout << kibibytes << " kibibytes." << endl;
	return kibibytes;
}
double megabitstokilobits(double megabits)
{
	cout << "enter value in megabits: ";
	double kilobits;
	cin >> megabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in megabits: ";
		cin >> megabits;
	}
	kilobits = megabits * 1000;
	cout << kilobits << " kilobits." << endl;
	return kilobits;
}
double megabitstokilobytes(double megabits)
{
	cout << "enter value in megabits: ";
	double kilobytes;
	cin >> megabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in megabits: ";
		cin >> megabits;
	}
	kilobytes = megabits * 125;
	cout << kilobytes << " kilobytes" << endl;
	return kilobytes;
}
double megabitstomebibits(double megabits)
{
	cout << "enter value in megabits: ";
	double mebibits;
	cin >> megabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in megabits: ";
		cin >> megabits;
	}
	mebibits = megabits * 0.95367431640625;
	cout << mebibits << " mebibits." << endl;
	return mebibits;
}
double megabitstomebibytes(double megabits)
{
	cout << "enter value in megabits: ";
	double mebibytes;
	cin >> megabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in megabits: ";
		cin >> megabits;
	}
	mebibytes = megabits * 0.119209289550781;
	cout << mebibytes << " mebibytes." << endl;
	return mebibytes;
}
double megabitstomegabytes(double megabits)
{
	cout << "enter value in megabits: ";
	double megabytes;
	cin >> megabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in megabits: ";
		cin >> megabits;
	}
	megabytes = megabits * 0.125;
	cout << megabytes << " megabytes." << endl;
	return megabytes;
}
double megabitstogibibits(double megabits)
{
	cout << "enter value in megabits: ";
	double gibibits;
	cin >> megabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in megabits: ";
		cin >> megabits;
	}
	gibibits = megabits * 0.000931322574615;
	cout << gibibits << " gibibits." << endl;
	return gibibits;
}
double megabitstogibibytes(double megabits)
{
	cout << "enter value in megabits: ";
	double gibibytes;
	cin >> megabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in megabits: ";
		cin >> megabits;
	}
	gibibytes = megabits * 0.000116415321827;
	cout << gibibytes << " gibibytes." << endl;
	return gibibytes;
}
double megabitstogigabits(double megabits)
{
	cout << "enter value in megabits: ";
	double gigabits;
	cin >> megabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in megabits: ";
		cin >> megabits;
	}
	gigabits = megabits * 0.001;
	cout << gigabits << " gigabits." << endl;
	return gigabits;
}
double megabitstogigabytes(double megabits)
{
	cout << "enter value in megabits: ";
	double gigabytes;
	cin >> megabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in megabits: ";
		cin >> megabits;
	}
	gigabytes = megabits * 0.000125;
	cout << gigabytes << " gigabytes." << endl;
	return gigabytes;
}
double megabitstotebibits(double megabits)
{
	cout << "enter value in megabits: ";
	double tebibits;
	cin >> megabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in megabits: ";
		cin >> megabits;
	}
	tebibits = megabits * 9.09494702e-7;
	cout << tebibits << " tebibits." << endl;
	return tebibits;
}
double megabitstotebibytes(double megabits)
{
	cout << "enter value in megabits: ";
	double tebibytes;
	cin >> megabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in megabits: ";
		cin >> megabits;
	}
	tebibytes = megabits * 1.13686838e-7;
	cout << tebibytes << " tebibytes." << endl;
	return tebibytes;
}
double megabitstoterabits(double megabits)
{
	cout << "enter value in megabits: ";
	double terabits;
	cin >> megabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in megabits: ";
		cin >> megabits;
	}
	terabits = megabits * 0.000001;
	cout << terabits << " terabits." << endl;
	return terabits;
}
double megabitstoterabytes(double megabits)
{
	cout << "enter value in megabits: ";
	double terabytes;
	cin >> megabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in megabits: ";
		cin >> megabits;
	}
	terabytes = megabits * 1.25e-7;
	cout << terabytes << " terabytes." << endl;
	return terabytes;
}
//Digital Storage Option 10
double megabytestobits(double megabytes)
{
	cout << "enter value in megabytes: ";
	double bits;
	cin >> megabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in megabytes: ";
		cin >> megabytes;
	}
	bits = megabytes * 8000000;
	cout << bits << " bits." << endl;
	return bits;
}
double megabytestobytes(double megabytes)
{
	cout << "enter value in megabytes: ";
	double bytes;
	cin >> megabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in megabytes: ";
		cin >> megabytes;
	}
	bytes = megabytes * 1000000;
	cout << bytes << " bytes." << endl;
	return bytes;
}
double megabytestokibibits(double megabytes)
{
	cout << "enter value in megabytes: ";
	double kibibits;
	cin >> megabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in megabytes: ";
		cin >> megabytes;
	}

	kibibits = megabytes * 7812.5;
	cout << kibibits << " kibibits." << endl;
	return kibibits;
}
double megabytestokibibytes(double megabytes)
{
	cout << "enter value in megabytes: ";
	double kibibytes;
	cin >> megabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in megabytes: ";
		cin >> megabytes;
	}
	kibibytes = megabytes * 976.5625;
	cout << kibibytes << " kibibytes." << endl;
	return kibibytes;
}
double megabytestokilobits(double megabytes)
{
	cout << "enter value in megabytes: ";
	double kilobits;
	cin >> megabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in megabytes: ";
		cin >> megabytes;
	}
	kilobits = megabytes * 8000;
	cout << kilobits << " kilobits." << endl;
	return kilobits;
}
double megabytestokilobytes(double megabytes)
{
	cout << "enter value in megabytes: ";
	double kilobytes;
	cin >> megabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in megabytes: ";
		cin >> megabytes;
	}
	kilobytes = megabytes * 1000;
	cout << kilobytes << " kilobytes" << endl;
	return kilobytes;
}
double megabytestomebibits(double megabytes)
{
	cout << "enter value in megabytes: ";
	double mebibits;
	cin >> megabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in megabytes: ";
		cin >> megabytes;
	}
	mebibits = megabytes * 7.62939453125;
	cout << mebibits << " mebibits." << endl;
	return mebibits;
}
double megabytestomebibytes(double megabytes)
{
	cout << "enter value in megabytes: ";
	double mebibytes;
	cin >> megabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in megabytes: ";
		cin >> megabytes;
	}
	mebibytes = megabytes * 0.95367431640625;
	cout << mebibytes << " mebibytes." << endl;
	return mebibytes;
}
double megabytestomegabits(double megabytes)
{
	cout << "enter value in megabytes: ";
	double megabits;
	cin >> megabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in megabytes: ";
		cin >> megabytes;
	}
	megabits = megabytes * 8;
	cout << megabits << " megabits." << endl;
	return megabits;
}
double megabytestogibibits(double megabytes)
{
	cout << "enter value in megabytes: ";
	double gibibits;
	cin >> megabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in megabytes: ";
		cin >> megabytes;
	}
	gibibits = megabytes * 0.007450580596924;
	cout << gibibits << " gibibits." << endl;
	return gibibits;
}
double megabytestogibibytes(double megabytes)
{
	cout << "enter value in megabytes: ";
	double gibibytes;
	cin >> megabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in megabytes: ";
		cin >> megabytes;
	}
	gibibytes = megabytes * 0.000931322574615;
	cout << gibibytes << " gibibytes." << endl;
	return gibibytes;
}
double megabytestogigabits(double megabytes)
{
	cout << "enter value in megabytes: ";
	double gigabits;
	cin >> megabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in megabytes: ";
		cin >> megabytes;
	}
	gigabits = megabytes * 0.008;
	cout << gigabits << " gigabits." << endl;
	return gigabits;
}
double megabytestogigabytes(double megabytes)
{
	cout << "enter value in megabytes: ";
	double gigabytes;
	cin >> megabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in megabytes: ";
		cin >> megabytes;
	}
	gigabytes = megabytes * 0.001;
	cout << gigabytes << " gigabytes." << endl;
	return gigabytes;
}
double megabytestotebibits(double megabytes)
{
	cout << "enter value in megabytes: ";
	double tebibits;
	cin >> megabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in megabytes: ";
		cin >> megabytes;
	}
	tebibits = megabytes * 0.000007275957614;
	cout << tebibits << " tebibits." << endl;
	return tebibits;
}
double megabytestotebibytes(double megabytes)
{
	cout << "enter value in megabytes: ";
	double tebibytes;
	cin >> megabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in megabytes: ";
		cin >> megabytes;
	}
	tebibytes = megabytes * 9.09494702e-7;
	cout << tebibytes << " tebibytes." << endl;
	return tebibytes;
}
double megabytestoterabits(double megabytes)
{
	cout << "enter value in megabytes: ";
	double terabits;
	cin >> megabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in megabytes: ";
		cin >> megabytes;
	}
	terabits = megabytes * 0.000008;
	cout << terabits << " terabits." << endl;
	return terabits;
}
double megabytestoterabytes(double megabytes)
{
	cout << "enter value in megabytes: ";
	double terabytes;
	cin >> megabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in megabytes: ";
		cin >> megabytes;
	}
	terabytes = megabytes * 0.000001;
	cout << terabytes << " terabytes." << endl;
	return terabytes;
}
//Digital Storage Option 11
double gibibitstobits(double gibibits)
{
	cout << "enter value in gibibits: ";
	double bits;
	cin >> gibibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gibibits: ";
		cin >> gibibits;
	}
	bits = gibibits * 1073741824;
	cout << bits << " bits." << endl;
	return bits;
}
double gibibitstobytes(double gibibits)
{
	cout << "enter value in gibibits: ";
	double bytes;
	cin >> gibibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gibibits: ";
		cin >> gibibits;
	}
	bytes = gibibits * 134217728;
	cout << bytes << " bytes." << endl;
	return bytes;
}
double gibibitstokibibits(double gibibits)
{
	cout << "enter value in gibibits: ";
	double kibibits;
	cin >> gibibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gibibits: ";
		cin >> gibibits;
	}
	kibibits = gibibits * 1048576;
	cout << kibibits << " kibibits." << endl;
	return kibibits;
}
double gibibitstokibibytes(double gibibits)
{
	cout << "enter value in gibibits: ";
	double kibibytes;
	cin >> gibibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gibibits: ";
		cin >> gibibits;
	}
	kibibytes = gibibits * 131072;
	cout << kibibytes << " kibibytes." << endl;
	return kibibytes;
}
double gibibitstokilobits(double gibibits)
{
	cout << "enter value in gibibits: ";
	double kilobits;
	cin >> gibibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gibibits: ";
		cin >> gibibits;
	}
	kilobits = gibibits * 1073741.824;
	cout << kilobits << "kilobits" << endl;
	return kilobits;
}
double gibibitstokilobytes(double gibibits)
{
	cout << "enter value in gibibits: ";
	double kilobytes;
	cin >> gibibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gibibits: ";
		cin >> gibibits;
	}
	kilobytes = gibibits * 134217.728;
	cout << kilobytes << " kilobytes" << endl;
	return kilobytes;
}
double gibibitstomebibits(double gibibits)
{
	cout << "enter value in gibibits: ";
	double mebibits;
	cin >> gibibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gibibits: ";
		cin >> gibibits;
	}
	mebibits = gibibits * 1024;
	cout << mebibits << " mebibits." << endl;
	return mebibits;
}
double gibibitstomebibytes(double gibibits)
{
	cout << "enter value in gibibits: ";
	double mebibytes;
	cin >> gibibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gibibits: ";
		cin >> gibibits;
	}
	mebibytes = gibibits * 128;
	cout << mebibytes << " mebibytes." << endl;
	return mebibytes;
}
double gibibitstomegabits(double gibibits)
{
	cout << "enter value in gibibits: ";
	double megabits;
	cin >> gibibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gibibits: ";
		cin >> gibibits;
	}
	megabits = gibibits * 1073.741824;
	cout << megabits << " megabits." << endl;
	return megabits;
}
double gibibitstomegabytes(double gibibits)
{
	cout << "enter value in gibibits: ";
	double megabytes;
	cin >> gibibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gibibits: ";
		cin >> gibibits;
	}
	megabytes = gibibits * 134.217728;
	cout << megabytes << " megabytes." << endl;
	return megabytes;
}
double gibibitstogibibytes(double gibibits)
{
	cout << "enter value in gibibits: ";
	double gibibytes;
	cin >> gibibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gibibits: ";
		cin >> gibibits;
	}
	gibibytes = gibibits * 0.125;
	cout << gibibytes << " gibibytes." << endl;
	return gibibytes;
}
double gibibitstogigabits(double gibibits)
{
	cout << "enter value in gibibits: ";
	double gigabits;
	cin >> gibibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gibibits: ";
		cin >> gibibits;
	}
	gigabits = gibibits * 1.073741824;
	cout << gigabits << " gigabits." << endl;
	return gigabits;
}
double gibibitstogigabytes(double gibibits)
{
	cout << "enter value in gibibits: ";
	double gigabytes;
	cin >> gibibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gibibits: ";
		cin >> gibibits;
	}
	gigabytes = gibibits * 0.134217728;
	cout << gigabytes << " gigabytes." << endl;
	return gigabytes;
}
double gibibitstotebibits(double gibibits)
{
	cout << "enter value in gibibits: ";
	double tebibits;
	cin >> gibibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gibibits: ";
		cin >> gibibits;
	}
	tebibits = gibibits * 0.0009765625;
	cout << tebibits << " tebibits." << endl;
	return tebibits;
}
double gibibitstotebibytes(double gibibits)
{
	cout << "enter value in gibibits: ";
	double tebibytes;
	cin >> gibibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gibibits: ";
		cin >> gibibits;
	}
	tebibytes = gibibits * 0.0001220703125;
	cout << tebibytes << " tebibytes." << endl;
	return tebibytes;
}
double gibibitstoterabits(double gibibits)
{
	cout << "enter value in gibibits: ";
	double terabits;
	cin >> gibibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gibibits: ";
		cin >> gibibits;
	}
	terabits = gibibits * 0.001073741824;
	cout << terabits << " terabits." << endl;
	return terabits;
}
double gibibitstoterabytes(double gibibits)
{
	cout << "enter value in gibibits: ";
	double terabytes;
	cin >> gibibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gibibits: ";
		cin >> gibibits;
	}
	terabytes = gibibits * 0.000134217728;
	cout << terabytes << " terabytes." << endl;
	return terabytes;
}
//Digital Storage Option 12
double gibibytestobits(double gibibytes)
{
	cout << "enter value in gibibytes: ";
	double bits;
	cin >> gibibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gibibytes: ";
		cin >> gibibytes;
	}
	bits = gibibytes * 8589934592;
	cout << bits << " bits." << endl;
	return bits;
}
double gibibytestobytes(double gibibytes)
{
	cout << "enter value in gibibytes: ";
	double bytes;
	cin >> gibibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gibibytes: ";
		cin >> gibibytes;
	}
	bytes = gibibytes * 1073741824;
	cout << bytes << " bytes." << endl;
	return bytes;
}
double gibibytestokibibits(double gibibytes)
{
	cout << "enter value in gibibytes: ";
	double kibibits;
	cin >> gibibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gibibytes: ";
		cin >> gibibytes;
	}
	kibibits = gibibytes * 8388608;
	cout << kibibits << " kibibits." << endl;
	return kibibits;
}
double gibibytestokibibytes(double gibibytes)
{
	cout << "enter value in gibibytes: ";
	double kibibytes;
	cin >> gibibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gibibytes: ";
		cin >> gibibytes;
	}
	kibibytes = gibibytes * 1048576;
	cout << kibibytes << " kibibytes." << endl;
	return kibibytes;
}
double gibibytestokilobits(double gibibytes)
{
	cout << "enter value in gibibytes: ";
	double kilobits;
	cin >> gibibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gibibytes: ";
		cin >> gibibytes;
	}
	kilobits = gibibytes * 8589934.592;
	cout << kilobits << " kilobits." << endl;
	return kilobits;
}
double gibibytestokilobytes(double gibibytes)
{
	cout << "enter value in gibibytes: ";
	double kilobytes;
	cin >> gibibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gibibytes: ";
		cin >> gibibytes;
	}
	kilobytes = gibibytes * 1073741.824;
	cout << kilobytes << " kilobytes" << endl;
	return kilobytes;
}
double gibibytestomebibits(double gibibytes)
{
	cout << "enter value in gibibytes: ";
	double mebibits;
	cin >> gibibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gibibytes: ";
		cin >> gibibytes;
	}
	mebibits = gibibytes * 8192;
	cout << mebibits << " mebibits." << endl;
	return mebibits;
}
double gibibytestomebibytes(double gibibytes)
{
	cout << "enter value in gibibytes: ";
	double mebibytes;
	cin >> gibibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gibibytes: ";
		cin >> gibibytes;
	}
	mebibytes = gibibytes * 1024;
	cout << mebibytes << " mebibytes." << endl;
	return mebibytes;
}
double gibibytestomegabits(double gibibytes)
{
	cout << "enter value in gibibytes: ";
	double megabits;
	cin >> gibibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gibibytes: ";
		cin >> gibibytes;
	}
	megabits = gibibytes * 8589.934592;
	cout << megabits << " megabits." << endl;
	return megabits;
}
double gibibytestomegabytes(double gibibytes)
{
	cout << "enter value in gibibytes: ";
	double megabytes;
	cin >> gibibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gibibytes: ";
		cin >> gibibytes;
	}
	megabytes = gibibytes * 1073.741824;
	cout << megabytes << " megabytes." << endl;
	return megabytes;
}
double gibibytestogibibits(double gibibytes)
{
	cout << "enter value in gibibytes: ";
	double gibibits;
	cin >> gibibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gibibytes: ";
		cin >> gibibytes;
	}
	gibibits = gibibytes * 8;
	cout << gibibits << " gibibits." << endl;
	return gibibits;
}
double gibibytestogigabits(double gibibytes)
{
	cout << "enter value in gibibytes: ";
	double gigabits;
	cin >> gibibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gibibytes: ";
		cin >> gibibytes;
	}
	gigabits = gibibytes * 8.589934592;
	cout << gigabits << " gigabits." << endl;
	return gigabits;
}
double gibibytestogigabytes(double gibibytes)
{
	cout << "enter value in gibibytes: ";
	double gigabytes;
	cin >> gibibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gibibytes: ";
		cin >> gibibytes;
	}
	gigabytes = gibibytes * 1.073741824;
	cout << gigabytes << " gigabytes." << endl;
	return gigabytes;
}
double gibibytestotebibits(double gibibytes)
{
	cout << "enter value in gibibytes: ";
	double tebibits;
	cin >> gibibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gibibytes: ";
		cin >> gibibytes;
	}
	tebibits = gibibytes * 0.0078125;
	cout << tebibits << " tebibits." << endl;
	return tebibits;
}
double gibibytestotebibytes(double gibibytes)
{
	cout << "enter value in gibibytes: ";
	double tebibytes;
	cin >> gibibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gibibytes: ";
		cin >> gibibytes;
	}
	tebibytes = gibibytes * 0.0009765625;
	cout << tebibytes << "tebibytes" << endl;
	return tebibytes;
}
double gibibytestoterabits(double gibibytes)
{
	cout << "enter value in gibibytes: ";
	double terabits;
	cin >> gibibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gibibytes: ";
		cin >> gibibytes;
	}
	terabits = gibibytes * 0.008589934592;
	cout << terabits << " terabits." << endl;
	return terabits;
}
double gibibytestoterabytes(double gibibytes)
{
	cout << "enter value in gibibytes: ";
	double terabytes;
	cin >> gibibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gibibytes: ";
		cin >> gibibytes;
	}
	terabytes = gibibytes * 0.001073741824;
	cout << terabytes << " terabytes." << endl;
	return terabytes;
}
//Digital Storage Option 13
double gigabitstobits(double gigabits)
{
	cout << "enter value in gigabits: ";
	double bits;
	cin >> gigabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gigabits: ";
		cin >> gigabits;
	}
	bits = gigabits * 1000000000;
	cout << bits << " bits." << endl;
	return bits;
}
double gigabitstobytes(double gigabits)
{
	cout << "enter value in gigabits: ";
	double bytes;
	cin >> gigabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gigabits: ";
		cin >> gigabits;
	}
	bytes = gigabits * 125000000;
	cout << bytes << " bytes." << endl;
	return bytes;
}
double gigabitstokibibits(double gigabits)
{
	cout << "enter value in gigabits: ";
	double kibibits;
	cin >> gigabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gigabits: ";
		cin >> gigabits;
	}
	kibibits = gigabits * 976562.5;
	cout << kibibits << " kibibits." << endl;
	return kibibits;
}
double gigabitstokibibytes(double gigabits)
{
	cout << "enter value in gigabits: ";
	double kibibytes;
	cin >> gigabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gigabits: ";
		cin >> gigabits;
	}
	kibibytes = gigabits * 122070.3125;
	cout << kibibytes << " kibibytes." << endl;
	return kibibytes;
}
double gigabitstokilobits(double gigabits)
{
	cout << "enter value in gigabits: ";
	double kilobits;
	cin >> gigabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gigabits: ";
		cin >> gigabits;
	}
	kilobits = gigabits * 1000000;
	cout << kilobits << " kilobits." << endl;
	return kilobits;
}
double gigabitstokilobytes(double gigabits)
{
	cout << "enter value in gigabits: ";
	double kilobytes;
	cin >> gigabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gigabits: ";
		cin >> gigabits;
	}
	kilobytes = gigabits * 125000;
	cout << kilobytes << " kilobytes" << endl;
	return kilobytes;
}
double gigabitstomebibits(double gigabits)
{
	cout << "enter value in gigabits: ";
	double mebibits;
	cin >> gigabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gigabits: ";
		cin >> gigabits;
	}
	mebibits = gigabits * 953.67431640625;
	cout << mebibits << " mebibits." << endl;
	return mebibits;
}
double gigabitstomebibytes(double gigabits)
{
	cout << "enter value in gigabits: ";
	double mebibytes;
	cin >> gigabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gigabits: ";
		cin >> gigabits;
	}
	mebibytes = gigabits * 119.20928955078125;
	cout << mebibytes << " mebibytes." << endl;
	return mebibytes;
}
double gigabitstomegabits(double gigabits)
{
	cout << "enter value in gigabits: ";
	double megabits;
	cin >> gigabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gigabits: ";
		cin >> gigabits;
	}
	megabits = gigabits * 1000;
	cout << megabits << " megabits." << endl;
	return megabits;
}
double gigabitstomegabytes(double gigabits)
{
	cout << "enter value in gigabits: ";
	double megabytes;
	cin >> gigabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gigabits: ";
		cin >> gigabits;
	}
	megabytes = gigabits * 125;
	cout << megabytes << " megabytes." << endl;
	return megabytes;
}
double gigabitstogibibits(double gigabits)
{
	cout << "enter value in gigabits: ";
	double gibibits;
	cin >> gigabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gigabits: ";
		cin >> gigabits;
	}
	gibibits = gigabits * 0.931322574615479;
	cout << gibibits << " gibibits." << endl;
	return gibibits;
}
double gigabitstogibibytes(double gigabits)
{
	cout << "enter value in gigabits: ";
	double gibibytes;
	cin >> gigabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gigabits: ";
		cin >> gigabits;
	}
	gibibytes = gigabits * 0.116415321826935;
	cout << gibibytes << " gibibytes." << endl;
	return gibibytes;
}
double gigabitstogigabytes(double gigabits)
{
	cout << "enter value in gigabits: ";
	double gigabytes;
	cin >> gigabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gigabits: ";
		cin >> gigabits;
	}
	gigabytes = gigabits * 0.125;
	cout << gigabytes << " gigabytes." << endl;
	return gigabytes;
}
double gigabitstotebibits(double gigabits)
{
	cout << "enter value in gigabits: ";
	double tebibits;
	cin >> gigabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gigabits: ";
		cin >> gigabits;
	}
	tebibits = gigabits * 0.000909494701773;
	cout << tebibits << " tebibits." << endl;
	return tebibits;
}
double gigabitstotebibytes(double gigabits)
{
	cout << "enter value in gigabits: ";
	double tebibytes;
	cin >> gigabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gigabits: ";
		cin >> gigabits;
	}
	tebibytes = gigabits * 0.000113686837722;
	cout << tebibytes << " tebibytes." << endl;
	return tebibytes;
}
double gigabitstoterabits(double gigabits)
{
	cout << "enter value in gigabits: ";
	double terabits;
	cin >> gigabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gigabits: ";
		cin >> gigabits;
	}
	terabits = gigabits * 0.001;
	cout << terabits << " terabits." << endl;
	return terabits;
}
double gigabitstoterabytes(double gigabits)
{
	cout << "enter value in gigabits: ";
	double terabytes;
	cin >> gigabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gigabits: ";
		cin >> gigabits;
	}
	terabytes = gigabits * 0.000125;
	cout << terabytes << " terabytes." << endl;
	return terabytes;
}
//Digital Storage Option 14
double gigabytestobits(double gigabytes)
{
	cout << "enter value in gigabytes: ";
	double bits;
	cin >> gigabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gigabytes: ";
		cin >> gigabytes;
	}
	bits = gigabytes * 8000000000;
	cout << bits << " bits." << endl;
	return bits;
}
double gigabytestobytes(double gigabytes)
{
	cout << "enter value in gigabytes: ";
	double bytes;
	cin >> gigabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gigabytes: ";
		cin >> gigabytes;
	}
	bytes = gigabytes * 1000000000;
	cout << bytes << " bytes." << endl;
	return bytes;
}
double gigabytestokibibits(double gigabytes)
{
	cout << "enter value in gigabytes: ";
	double kibibits;
	cin >> gigabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gigabytes: ";
		cin >> gigabytes;
	}
	kibibits = gigabytes * 976562.5;
	cout << kibibits << " kibibits." << endl;
	return kibibits;
}
double gigabytestokibibytes(double gigabytes)
{
	cout << "enter value in gigabytes: ";
	double kibibytes;
	cin >> gigabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gigabytes: ";
		cin >> gigabytes;
	}
	kibibytes = gigabytes * 976562.5;
	cout << kibibytes << " kibibytes." << endl;
	return kibibytes;
}
double gigabytestokilobits(double gigabytes)
{
	cout << "enter value in gigabytes: ";
	double kilobits;
	cin >> gigabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gigabytes: ";
		cin >> gigabytes;
	}
	kilobits = gigabytes * 8000000;
	cout << kilobits << " kilobits." << endl;
	return kilobits;
}
double gigabytestokilobytes(double gigabytes)
{
	cout << "enter value in gigabytes: ";
	double kilobytes;
	cin >> gigabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gigabytes: ";
		cin >> gigabytes;
	}
	kilobytes = gigabytes * 1000000;
	cout << kilobytes << " kilobytes" << endl;
	return kilobytes;
}
double gigabytestomebibits(double gigabytes)
{
	cout << "enter value in gigabytes: ";
	double mebibits;
	cin >> gigabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gigabytes: ";
		cin >> gigabytes;
	}
	mebibits = gigabytes * 7629.39453125;
	cout << mebibits << " mebibits." << endl;
	return mebibits;
}
double gigabytestomebibytes(double gigabytes)
{
	cout << "enter value in gigabytes: ";
	double mebibytes;
	cin >> gigabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gigabytes: ";
		cin >> gigabytes;
	}
	mebibytes = gigabytes * 953.67431640625;
	cout << mebibytes << " mebibytes." << endl;
	return mebibytes;
}
double gigabytestomegabits(double gigabytes)
{
	cout << "enter value in gigabytes: ";
	double megabits;
	cin >> gigabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gigabytes: ";
		cin >> gigabytes;
	}
	megabits = gigabytes * 8000;
	cout << megabits << " megabits." << endl;
	return megabits;
}
double gigabytestomegabytes(double gigabytes)
{
	cout << "enter value in gigabytes: ";
	double megabytes;
	cin >> gigabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gigabytes: ";
		cin >> gigabytes;
	}
	megabytes = gigabytes * 1000;
	cout << megabytes << " megabytes." << endl;
	return megabytes;
}
double gigabytestogibibits(double gigabytes)
{
	cout << "enter value in gigabytes: ";
	double gibibits;
	cin >> gigabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gigabytes: ";
		cin >> gigabytes;
	}
	gibibits = gigabytes * 7.450580596923828;
	cout << gibibits << " gibibits." << endl;
	return gibibits;
}
double gigabytestogibibytes(double gigabytes)
{
	cout << "enter value in gigabytes: ";
	double gibibytes;
	cin >> gigabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gigabytes: ";
		cin >> gigabytes;
	}
	gibibytes = gigabytes * 0.931322574615479;
	cout << gibibytes << " gibibytes." << endl;
	return gibibytes;
}
double gigabytestogigabits(double gigabytes)
{
	cout << "enter value in gigabytes: ";
	double gigabits;
	cin >> gigabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gigabytes: ";
		cin >> gigabytes;
	}
	gigabits = gigabytes * 8;
	cout << gigabits << " gigabits." << endl;
	return gigabits;
}
double gigabytestotebibits(double gigabytes)
{
	cout << "enter value in gigabytes: ";
	double tebibits;
	cin >> gigabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gigabytes: ";
		cin >> gigabytes;
	}
	tebibits = gigabytes * 0.007275957614183426;
	cout << tebibits << " tebibits." << endl;
	return tebibits;
}
double gigabytestotebibytes(double gigabytes)
{
	cout << "enter value in gigabytes: ";
	double tebibytes;
	cin >> gigabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gigabytes: ";
		cin >> gigabytes;
	}
	tebibytes = gigabytes * 0.000909494701772928;
	cout << tebibytes << " tebibytes." << endl;
	return tebibytes;
}
double gigabytestoterabits(double gigabytes)
{
	cout << "enter value in gigabytes: ";
	double terabits;
	cin >> gigabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gigabytes: ";
		cin >> gigabytes;
	}
	terabits = gigabytes * 0.008;
	cout << terabits << " terabits." << endl;
	return terabits;
}
double gigabytestoterabytes(double gigabytes)
{
	cout << "enter value in gigabytes: ";
	double terabytes;
	cin >> gigabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in gigabytes: ";
		cin >> gigabytes;
	}
	terabytes = gigabytes * 0.001;
	cout << terabytes << " terabytes." << endl;
	return terabytes;
}
//Digital Storage Option 15
double tebibitstobits(double tebibits)
{
	cout << "enter value in tebibits: ";
	double bits;
	cin >> tebibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in tebibits: ";
		cin >> tebibits;
	}
	bits = tebibits * 1099511627776;
	cout << bits << " bits." << endl;
	return bits;
}
double tebibitstobytes(double tebibits)
{
	cout << "enter value in tebibits: ";
	double bytes;
	cin >> tebibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in tebibits: ";
		cin >> tebibits;
	}
	bytes = tebibits * 137438953472;
	cout << bytes << " bytes." << endl;
	return bytes;
}
double tebibitstokibibits(double tebibits)
{
	cout << "enter value in tebibits: ";
	double kibibits;
	cin >> tebibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in tebibits: ";
		cin >> tebibits;
	}
	kibibits = tebibits * 1073741824;
	cout << kibibits << " kibibits." << endl;
	return kibibits;
}
double tebibitstokibibytes(double tebibits)
{
	cout << "enter value in tebibits: ";
	double kibibytes;
	cin >> tebibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in tebibits: ";
		cin >> tebibits;
	}
	kibibytes = tebibits * 134217728;
	cout << kibibytes << " kibibytes." << endl;
	return kibibytes;
}
double tebibitstokilobits(double tebibits)
{
	cout << "enter value in tebibits: ";
	double kilobits;
	cin >> tebibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in tebibits: ";
		cin >> tebibits;
	}
	kilobits = tebibits * 1099511627.776;
	cout << kilobits << " kilobits." << endl;
	return kilobits;
}
double tebibitstokilobytes(double tebibits)
{
	cout << "enter value in tebibits: ";
	double kilobytes;
	cin >> tebibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in tebibits: ";
		cin >> tebibits;
	}
	kilobytes = tebibits * 137438953.472;
	cout << kilobytes << " kilobytes" << endl;
	return kilobytes;
}
double tebibitstomebibits(double tebibits)
{
	cout << "enter value in tebibits: ";
	double mebibits;
	cin >> tebibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in tebibits: ";
		cin >> tebibits;
	}
	mebibits = tebibits * 1048576;
	cout << mebibits << " mebibits." << endl;
	return mebibits;
}
double tebibitstomebibytes(double tebibits)
{
	cout << "enter value in tebibits: ";
	double mebibytes;
	cin >> tebibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in tebibits: ";
		cin >> tebibits;
	}
	mebibytes = tebibits * 131072;
	cout << mebibytes << " mebibytes." << endl;
	return mebibytes;
}
double tebibitstomegabits(double tebibits)
{
	cout << "enter value in tebibits: ";
	double megabits;
	cin >> tebibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in tebibits: ";
		cin >> tebibits;
	}
	megabits = tebibits * 1099511.627776;
	cout << megabits << " megabits." << endl;
	return megabits;
}
double tebibitstomegabytes(double tebibits)
{
	cout << "enter value in tebibits: ";
	double megabytes;
	cin >> tebibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in tebibits: ";
		cin >> tebibits;
	}
	megabytes = tebibits * 137438.953472;
	cout << megabytes << " megabytes." << endl;
	return megabytes;
}
double tebibitstogibibits(double tebibits)
{
	cout << "enter value in tebibits: ";
	double gibibits;
	cin >> tebibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in tebibits: ";
		cin >> tebibits;
	}
	gibibits = tebibits * 1024;
	cout << gibibits << " gibibits." << endl;
	return gibibits;
}
double tebibitstogibibytes(double tebibits)
{
	cout << "enter value in tebibits: ";
	double gibibytes;
	cin >> tebibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in tebibits: ";
		cin >> tebibits;
	}
	gibibytes = tebibits * 128;
	cout << gibibytes << " gibibytes." << endl;
	return gibibytes;
}
double tebibitstogigabits(double tebibits)
{
	cout << "enter value in tebibits: ";
	double gigabits;
	cin >> tebibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in tebibits: ";
		cin >> tebibits;
	}
	gigabits = tebibits * 1099.511627776;
	cout << gigabits << " gigabits." << endl;
	return gigabits;
}
double tebibitstogigabytes(double tebibits)
{
	cout << "enter value in tebibits: ";
	double gigabytes;
	cin >> tebibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in tebibits: ";
		cin >> tebibits;
	}
	gigabytes = tebibits * 137.438953472;
	cout << gigabytes << " gigabytes." << endl;
	return gigabytes;
}
double tebibitstotebibytes(double tebibits)
{
	cout << "enter value in tebibits: ";
	double tebibytes;
	cin >> tebibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in tebibits: ";
		cin >> tebibits;
	}
	tebibytes = tebibits * 0.125;
	cout << tebibytes << " tebibytes." << endl;
	return tebibytes;
}
double tebibitstoterabits(double tebibits)
{
	cout << "enter value in tebibits: ";
	double terabits;
	cin >> tebibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in tebibits: ";
		cin >> tebibits;
	}
	terabits = tebibits * 1.099511627776;
	cout << terabits << " terabits." << endl;
	return terabits;
}
double tebibitstoterabytes(double tebibits)
{
	cout << "enter value in tebibits: ";
	double terabytes;
	cin >> tebibits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in tebibits: ";
		cin >> tebibits;
	}
	terabytes = tebibits * 0.137438953472;
	cout << terabytes << " terabytes." << endl;
	return terabytes;
}
//Digital Storage Option 16
double tebibytestobits(double tebibytes)
{
	cout << "enter value in tebibytes: ";
	double bits;
	cin >> tebibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in tebibytes: ";
		cin >> tebibytes;
	}
	bits = tebibytes * 8796093022208;
	cout << bits << " bits." << endl;
	return bits;
}
double tebibytestobytes(double tebibytes)
{
	cout << "enter value in tebibytes: ";
	double bytes;
	cin >> tebibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in tebibytes: ";
		cin >> tebibytes;
	}
	bytes = tebibytes * 1099511627776;
	cout << bytes << " bytes." << endl;
	return bytes;
}
double tebibytestokibibits(double tebibytes)
{
	cout << "enter value in tebibytes: ";
	double kibibits;
	cin >> tebibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in tebibytes: ";
		cin >> tebibytes;
	}
	kibibits = tebibytes * 8589934592;
	cout << kibibits << " kibibits." << endl;
	return kibibits;
}
double tebibytestokibibytes(double tebibytes)
{
	cout << "enter value in tebibytes: ";
	double kibibytes;
	cin >> tebibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in tebibytes: ";
		cin >> tebibytes;
	}
	kibibytes = tebibytes * 1073741824;
	cout << kibibytes << " kibibytes." << endl;
	return kibibytes;
}
double tebibytestokilobits(double tebibytes)
{
	cout << "enter value in tebibytes: ";
	double kilobits;
	cin >> tebibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in tebibytes: ";
		cin >> tebibytes;
	}
	kilobits = tebibytes * 8796093022.208;
	cout << kilobits << " kilobits." << endl;
	return kilobits;
}
double tebibytestokilobytes(double tebibytes)
{
	cout << "enter value in tebibytes: ";
	double kilobytes;
	cin >> tebibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in tebibytes: ";
		cin >> tebibytes;
	}
	kilobytes = tebibytes * 1099511627.776;
	cout << kilobytes << " kilobytes" << endl;
	return kilobytes;
}
double tebibytestomebibits(double tebibytes)
{
	cout << "enter value in tebibytes: ";
	double mebibits;
	cin >> tebibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in tebibytes: ";
		cin >> tebibytes;
	}
	mebibits = tebibytes * 8388608;
	cout << mebibits << " mebibits." << endl;
	return mebibits;
}
double tebibytestomebibytes(double tebibytes)
{
	cout << "enter value in tebibytes: ";
	double mebibytes;
	cin >> tebibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in tebibytes: ";
		cin >> tebibytes;
	}
	mebibytes = tebibytes * 1048576;
	cout << mebibytes << " mebibytes." << endl;
	return mebibytes;
}
double tebibytestomegabits(double tebibytes)
{
	cout << "enter value in tebibytes: ";
	double megabits;
	cin >> tebibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in tebibytes: ";
		cin >> tebibytes;
	}
	megabits = tebibytes * 8796093.022208;
	cout << megabits << " megabits." << endl;
	return megabits;
}
double tebibytestomegabytes(double tebibytes)
{
	cout << "enter value in tebibytes: ";
	double megabytes;
	cin >> tebibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in tebibytes: ";
		cin >> tebibytes;
	}
	megabytes = tebibytes * 1099511.627776;
	cout << megabytes << " megabytes." << endl;
	return megabytes;
}
double tebibytestogibibits(double tebibytes)
{
	cout << "enter value in tebibytes: ";
	double gibibits;
	cin >> tebibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in tebibytes: ";
		cin >> tebibytes;
	}
	gibibits = tebibytes * 8192;
	cout << gibibits << " gibibits." << endl;
	return gibibits;
}
double tebibytestogibibytes(double tebibytes)
{
	cout << "enter value in tebibytes: ";
	double gibibytes;
	cin >> tebibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in tebibytes: ";
		cin >> tebibytes;
	}
	gibibytes = tebibytes * 1024;
	cout << gibibytes << " gibibytes." << endl;
	return gibibytes;
}
double tebibytestogigabits(double tebibytes)
{
	cout << "enter value in tebibytes: ";
	double gigabits;
	cin >> tebibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in tebibytes: ";
		cin >> tebibytes;
	}
	gigabits = tebibytes * 8796.093022208;
	cout << gigabits << " gigabits." << endl;
	return gigabits;
}
double tebibytestogigabytes(double tebibytes)
{
	cout << "enter value in tebibytes: ";
	double gigabytes;
	cin >> tebibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in tebibytes: ";
		cin >> tebibytes;
	}
	gigabytes = tebibytes * 1099.511627776;
	cout << gigabytes << " gigabytes." << endl;
	return gigabytes;
}
double tebibytestotebibits(double tebibytes)
{
	cout << "enter value in tebibytes: ";
	double tebibits;
	cin >> tebibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in tebibytes: ";
		cin >> tebibytes;
	}
	tebibits = tebibytes * 8;
	cout << tebibits << " tebibits." << endl;
	return tebibits;
}
double tebibytestoterabits(double tebibytes)
{
	cout << "enter value in tebibytes: ";
	double terabits;
	cin >> tebibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in tebibytes: ";
		cin >> tebibytes;
	}
	terabits = tebibytes * 8.796093022208;
	cout << terabits << " terabits." << endl;
	return terabits;
}
double tebibytestoterabytes(double tebibytes)
{
	cout << "enter value in tebibytes: ";
	double terabytes;
	cin >> tebibytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in tebibytes: ";
		cin >> tebibytes;
	}
	terabytes = tebibytes * 1.099511627776;
	cout << terabytes << " terabytes." << endl;
	return terabytes;
}
//Digital Storage Option 17
double terabitstobits(double terabits)
{
	cout << "enter value in terabits: ";
	double bits;
	cin >> terabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in terabits: ";
		cin >> terabits;
	}
	bits = terabits * 1000000000000;
	cout << bits << " bits." << endl;
	return bits;
}
double terabitstobytes(double terabits)
{
	cout << "enter value in terabits: ";
	double bytes;
	cin >> terabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in terabits: ";
		cin >> terabits;
	}
	bytes = terabits * 125000000000;
	cout << bytes << " bytes." << endl;
	return bytes;
}
double terabitstokibibits(double terabits)
{
	cout << "enter value in terabits: ";
	double kibibits;
	cin >> terabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in terabits: ";
		cin >> terabits;
	}
	kibibits = terabits * 976562500;
	cout << kibibits << " kibibits." << endl;
	return kibibits;
}
double terabitstokibibytes(double terabits)
{
	cout << "enter value in terabits: ";
	double kibibytes;
	cin >> terabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in terabits: ";
		cin >> terabits;
	}
	kibibytes = terabits * 122070312.5;
	cout << kibibytes << " kibibytes." << endl;
	return kibibytes;
}
double terabitstokilobits(double terabits)
{
	cout << "enter value in terabits: ";
	double kilobits;
	cin >> terabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in terabits: ";
		cin >> terabits;
	}
	kilobits = terabits * 1000000000;
	cout << kilobits << " kilobits." << endl;
	return kilobits;
}
double terabitstokilobytes(double terabits)
{
	cout << "enter value in terabits: ";
	double kilobytes;
	cin >> terabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in terabits: ";
		cin >> terabits;
	}
	kilobytes = terabits * 125000000;
	cout << kilobytes << " kilobytes" << endl;
	return kilobytes;
}
double terabitstomebibits(double terabits)
{
	cout << "enter value in terabits: ";
	double mebibits;
	cin >> terabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in terabits: ";
		cin >> terabits;
	}
	mebibits = terabits * 953674.31640625;
	cout << mebibits << " mebibits." << endl;
	return mebibits;
}
double terabitstomebibytes(double terabits)
{
	cout << "enter value in terabits: ";
	double mebibytes;
	cin >> terabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in terabits: ";
		cin >> terabits;
	}
	mebibytes = terabits * 119209.28955078125;
	cout << mebibytes << " mebibytes." << endl;
	return mebibytes;
}
double terabitstomegabits(double terabits)
{
	cout << "enter value in terabits: ";
	double megabits;
	cin >> terabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in terabits: ";
		cin >> terabits;
	}
	megabits = terabits * 1000000;
	cout << megabits << " megabits." << endl;
	return megabits;
}
double terabitstomegabytes(double terabits)
{
	cout << "enter value in terabits: ";
	double megabytes;
	cin >> terabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in terabits: ";
		cin >> terabits;
	}
	megabytes = terabits * 125000;
	cout << megabytes << " megabytes." << endl;
	return megabytes;
}
double terabitstogibibits(double terabits)
{
	cout << "enter value in terabits: ";
	double gibibits;
	cin >> terabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in terabits: ";
		cin >> terabits;
	}
	gibibits = terabits * 931.3225746154785;
	cout << gibibits << " gibibits." << endl;
	return gibibits;
}
double terabitstogibibytes(double terabits)
{
	cout << "enter value in terabits: ";
	double gibibytes;
	cin >> terabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in terabits: ";
		cin >> terabits;
	}
	gibibytes = terabits * 116.41532182693481;
	cout << gibibytes << " gibibytes." << endl;
	return gibibytes;
}
double terabitstogigabits(double terabits)
{
	cout << "enter value in terabits: ";
	double gigabits;
	cin >> terabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in terabits: ";
		cin >> terabits;
	}
	gigabits = terabits * 1000;
	cout << gigabits << " gigabits." << endl;
	return gigabits;
}
double terabitstogigabytes(double terabits)
{
	cout << "enter value in terabits: ";
	double gigabytes;
	cin >> terabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in terabits: ";
		cin >> terabits;
	}
	gigabytes = terabits * 125;
	cout << gigabytes << " gigabytes." << endl;
	return gigabytes;
}
double terabitstotebibits(double terabits)
{
	cout << "enter value in terabits: ";
	double tebibits;
	cin >> terabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in terabits: ";
		cin >> terabits;
	}
	tebibits = terabits * 0.9094947017729282;
	cout << tebibits << " tebibits." << endl;
	return tebibits;
}
double terabitstotebibytes(double terabits)
{
	cout << "enter value in terabits: ";
	double tebibytes;
	cin >> terabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in terabits: ";
		cin >> terabits;
	}
	tebibytes = terabits * 0.11368683772161603;
	cout << tebibytes << " tebibytes." << endl;
	return tebibytes;
}
double terabitstoterabytes(double terabits)
{
	cout << "enter value in terabits: ";
	double terabytes;
	cin >> terabits;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in terabits: ";
		cin >> terabits;
	}
	terabytes = terabits * 0.125;
	cout << terabytes << " terabtyes" << endl;
	return terabytes;
}
//Digital Storage Option 18
double terabytestobits(double terabytes)
{
	cout << "enter value in terabytes: ";
	double bits;
	cin >> terabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in terabytes: ";
		cin >> terabytes;
	}
	bits = terabytes * 8000000000000;
	cout << bits << " bits." << endl;
	return bits;
}
double terabytestobytes(double terabytes)
{
	cout << "enter value in terabytes: ";
	double bytes;
	cin >> terabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in terabytes: ";
		cin >> terabytes;
	}
	bytes = terabytes * 1000000000000;
	cout << bytes << " bytes." << endl;
	return bytes;
}
double terabytestokibibits(double terabytes)
{
	cout << "enter value in terabytes: ";
	double kibibits;
	cin >> terabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in terabytes: ";
		cin >> terabytes;
	}
	kibibits = terabytes * 7812500000;
	cout << kibibits << " kibibits." << endl;
	return kibibits;
}
double terabytestokibibytes(double terabytes)
{
	cout << "enter value in terabytes: ";
	double kibibytes;
	cin >> terabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in terabytes: ";
		cin >> terabytes;
	}
	kibibytes = terabytes * 976562500;
	cout << kibibytes << " kibibytes." << endl;
	return kibibytes;
}
double terabytestokilobits(double terabytes)
{
	cout << "enter value in terabytes: ";
	double kilobits;
	cin >> terabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in terabytes: ";
		cin >> terabytes;
	}
	kilobits = terabytes * 8000000000;
	cout << kilobits << " kilobits." << endl;
	return kilobits;
}
double terabytestokilobytes(double terabytes)
{
	cout << "enter value in terabytes: ";
	double kilobytes;
	cin >> terabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in terabytes: ";
		cin >> terabytes;
	}
	kilobytes = terabytes * 1000000000;
	cout << kilobytes << " kilobytes" << endl;
	return kilobytes;
}
double terabytestomebibits(double terabytes)
{
	cout << "enter value in terabytes: ";
	double mebibits;
	cin >> terabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in terabytes: ";
		cin >> terabytes;
	}
	mebibits = terabytes * 7629394.53125;
	cout << mebibits << " mebibits." << endl;
	return mebibits;
}
double terabytestomebibytes(double terabytes)
{
	cout << "enter value in terabytes: ";
	double mebibytes;
	cin >> terabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in terabytes: ";
		cin >> terabytes;
	}
	mebibytes = terabytes * 953674.31640625;
	cout << mebibytes << " mebibytes." << endl;
	return mebibytes;
}
double terabytestomegabits(double terabytes)
{
	cout << "enter value in terabytes: ";
	double megabits;
	cin >> terabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in terabytes: ";
		cin >> terabytes;
	}
	megabits = terabytes * 8000000;
	cout << megabits << " megabits." << endl;

	return megabits;
}
double terabytestomegabytes(double terabytes)
{
	cout << "enter value in terabytes: ";
	double megabytes;
	cin >> terabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in terabytes: ";
		cin >> terabytes;
	}
	megabytes = terabytes * 1000000;
	cout << megabytes << " megabytes." << endl;
	return megabytes;
}
double terabytestogibibits(double terabytes)
{
	cout << "enter value in terabytes: ";
	double gibibits;
	cin >> terabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in terabytes: ";
		cin >> terabytes;
	}
	gibibits = terabytes * 7450.580596923828;
	cout << gibibits << " gibibits." << endl;
	return gibibits;
}
double terabytestogibibytes(double terabytes)
{
	cout << "enter value in terabytes: ";
	double gibibytes;
	cin >> terabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in terabytes: ";
		cin >> terabytes;
	}
	gibibytes = terabytes * 931.3225746154785;
	cout << gibibytes << " gibibytes." << endl;
	return gibibytes;
}
double terabytestogigabits(double terabytes)
{
	cout << "enter value in terabytes: ";
	double gigabits;
	cin >> terabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in terabytes: ";
		cin >> terabytes;
	}
	gigabits = terabytes * 8000;
	cout << gigabits << " gigabits." << endl;
	return gigabits;
}
double terabytestogigabytes(double terabytes)
{
	cout << "enter value in terabytes: ";
	double gigabytes;
	cin >> terabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in terabytes: ";
		cin >> terabytes;
	}
	gigabytes = terabytes * 1000;
	cout << gigabytes << " gigabytes." << endl;
	return gigabytes;
}
double terabytestotebibits(double terabytes)
{
	cout << "enter value in terabytes: ";
	double tebibits;
	cin >> terabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in terabytes: ";
		cin >> terabytes;
	}
	tebibits = terabytes * 7.275957614183426;
	cout << tebibits << " tebibits." << endl;
	return tebibits;
}
double terabytestotebibytes(double terabytes)
{
	cout << "enter value in terabytes: ";
	double tebibytes;
	cin >> terabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in terabytes: ";
		cin >> terabytes;
	}
	tebibytes = terabytes * 0.9094947017729282;
	cout << tebibytes << " tebibytes." << endl;
	return tebibytes;
}
double terabytestoterabits(double terabytes)
{
	cout << "enter value in terabytes: ";
	double terabits;
	cin >> terabytes;
	while (!cin || cin.fail())
	{
		cin.clear();
		string junk;
		getline(cin, junk);
		cout << "enter value in terabytes: ";
		cin >> terabytes;
	}
	terabits = terabytes * 8;
	cout << terabits << " terabits." << endl;
	return terabits;
}
