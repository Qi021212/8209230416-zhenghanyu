#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double a, x1, xn, t, m, n;
	cin >> a;
	if (a >= 0)
	{
		x1 = a;
		xn = (x1 + a / x1) / 2;
		m = max(x1, xn);
		n = min(x1, xn);
		while (m - n >= 1e-5)
		{
			x1 = xn;
			xn = 1.0 / 2.0 * (x1 + a / x1);
			m = max(x1, xn);
			n = min(x1, xn);
		}
		cout << xn << endl;
	}
	else cout << "无平方根" << endl;
	return 0;
}