setlocale(0, "");
	int a, k;
	int bin = 0, kek = 1;
	long long int result;
	vector<int> binary;
	cout << "Число" << endl;
	cin >> a;
	cout << "Степень" << endl;
	cin >> k;
	
	while (k)
	{
		bin += (k % 2) * kek;
		kek *= 10;
		k /= 2;
	}

	while (bin)
	{
		binary.push_back(bin % 10);
		bin = bin / 10;
	}
	for (size_t i = 0; i < binary.size()/2; i++)
	{
		swap(binary[i], binary[binary.size() - 1 - i]);
	}
	for (size_t i = 0; i < binary.size(); i++)
	{
		cout << binary[i];
	}
	cout << endl;
	result = pow(1 * pow(a, binary[0]),2);
	for (size_t i = 1; i < binary.size(); i++)
	{		
		if (i != binary.size()-1)
		{
			result *= pow(a, binary[i]);
			result = pow(result, 2);
		}
		else
		{
			result *= pow(a, binary[i]);
		}
	}
	
	cout << "________" << endl;
	cout << result << endl;
