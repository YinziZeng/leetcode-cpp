class Solution {
public:
	string intToRoman(int num) {
		string res;
		int digit = 1;
		while (num%10!=0 || num/10!=0)
		{
			res+=getInt2Roman(num % 10, digit++);
			num /= 10;
		}
		reverse(res.begin(), res.end());
		return res;
	}

	string getInt2Roman(int num, int digit)
	{
		string res;
		//vector<int> temp;
		switch (num)
		{
		case 1: res = "I"; break;
		case 2: res = "II"; break;
		case 3: res = "III"; break;
		case 4: res = "IV"; break;
		case 5: res = "V"; break;
		case 6: res = "VI"; break;
		case 7: res = "VII"; break;
		case 8: res = "VIII"; break;
		case 9: res = "IX"; break;
		}
		for (int i = 0; i<res.length(); i++)
		{
			res[i] = fun(res[i], digit);
		}
		reverse(res.begin(), res.end());
		return res;
	}

	char fun(char ch, int digit)
	{
		if (digit == 1)
			return ch;
		if (digit == 2)
		{
			if (ch == 'I')
				return 'X';
			if (ch == 'V')
				return 'L';
			if (ch == 'X')
				return 'C';
		}
		if (digit == 3)
		{
			if (ch == 'I')
				return 'C';
			if (ch == 'V')
				return 'D';
			if (ch == 'X')
				return 'M';
		}
		if (digit == 4)
			return 'M';
	}
};
