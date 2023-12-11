#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double c,f;
	cin >> f;
	c = (f - 32) / 1.8;
	cout << fixed << setprecision(2) << c << endl;
 }