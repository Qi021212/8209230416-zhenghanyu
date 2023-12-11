#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int parseHex(const char* const hexString)
{
	int num=0,i,l,n;
	l = strlen(hexString);
	for (i = 0;i<l;i++)
	{
		n = l - 1 - i;
		if (*(hexString + i) <= '9' && *(hexString + i) >= '0')
			num = num + (int(*(hexString + i)) - 48) * pow(16, l - i - 1);
		else if (*(hexString + i) <= 'F' && *(hexString + i) >= 'A')
			num = num + (int(*(hexString + i)) - 55) * pow(16, l - i - 1);
		else if (*(hexString + i) <= 'f' && *(hexString + i) >= 'a')
			num = num + (int(*(hexString + i)) - 87) * pow(16, l - i - 1);
	}
	cout << num << endl;
	return num;
}
int main()
{
	char hexString[1000];
	cin >> hexString;
	parseHex(hexString);
	return 0;
}