#include <iostream>
using namespace std;
int main()
{
	int num[10],i,j;
	bool y[10];
	for (i = 0; i < 10; i++)
	{
		cin >> num[i];
		y[i] = 1;
	}
	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (num[j] == num[i]) y[j] = 0;
		}
	}
	for (i = 0; i < 10; i++)
	{
		if (y[i] == 1) cout << num[i] << " ";
	}
	return 0;
}