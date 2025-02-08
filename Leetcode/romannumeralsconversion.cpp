class Solution
{
public:
	int romanToInt(string s)
	{
		int sum = 0;
		for (int i = 0; i < s.length(); i++)
		{
			sum += Looping(i, s);
		}
		return sum;
	}

	int Looping(int r, string s)
	{
		if (s[r] == 'M' && (r == 0 || s[r - 1] != 'C'))
		{
			return 1000;
		}
		if (s[r] == 'M' && s[r - 1] == 'C')
		{
			return 900;
		}
		if (s[r] == 'D' && (r == 0 || s[r - 1] != 'C'))
		{
			return 500;
		}
		if (s[r] == 'D' && s[r - 1] == 'C')
		{
			return 400;
		}
		if (s[r] == 'C' && (r == 0 || s[r - 1] != 'X'))
		{
			return 100;
		}
		if (s[r] == 'C' && s[r - 1] == 'X')
		{
			return 90;
		}
		if (s[r] == 'L' && (r == 0 || s[r - 1] != 'X'))
		{
			return 50;
		}
		if (s[r] == 'L' && s[r - 1] == 'X')
		{
			return 40;
		}
		if (s[r] == 'X' && (r == 0 || s[r - 1] != 'I'))
		{
			return 10;
		}
		if (s[r] == 'X' && s[r - 1] == 'I')
		{
			return 9;
		}
		if (s[r] == 'V' && (r == 0 || s[r - 1] != 'I'))
		{
			return 5;
		}
		if (s[r] == 'V' && s[r - 1] == 'I')
		{
			return 4;
		}
		if (s[r] == 'I')
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
};
