#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float sum=0,w=0,a=0;
	int n=2,i;
	for (i = 1; i <= 10; i++)
	{
		if (n > 100) break;
		w = w + 0.8 * n;
		sum = sum + n;
		n = n * 2;
	}
	a = w / (i-1);
	cout << a << endl;

}