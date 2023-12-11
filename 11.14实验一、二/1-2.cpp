#include<iostream>
#include<iomanip>
using namespace std;
const float pi = 3.14;
int main()
{
	double r, h, v;
	cin >> r >> h;
	v = pi * r * r * h / 3;
	cout << v << endl;
	return 0;
}