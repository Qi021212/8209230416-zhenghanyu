#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
void count(const char s[], int counts[])
{
	int i, j;
	for (j = 0; j < 26; j++)
	{
		counts[j] = 0;
	}
	for (i = 0; i <= strlen(s); i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (int(s[i]) == j + 65 || int(s[i]) == j + 97) counts[j]++;
		}
	}
	for (i = 0; i < 26; i++)
	{
		if (counts[i] != 0) cout << char(i + 97) << "出现的次数为：" << counts[i] << endl;
	}
}
int main()
{
	char s[10000];
	int counts[26], i = 0;
	cin >> s;
	count(s, counts);
	return 0;
}