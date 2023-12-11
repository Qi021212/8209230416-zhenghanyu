#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float x,sum;
	cin >> x;
	if (x > 0 && x < 1) sum = 3 - 2 * x;
	else if (x >= 1 && x < 5) sum = 2 / (4 * x) + 1;
	else if (x >= 5 && x < 10) sum = x*x;
	cout << sum << endl;
	return 0;
}