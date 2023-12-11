#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float a, b, c,l;
	cin >> a >> b >> c;
	l = a + b + c;
	if (a + b <= c || a + c <= b || b + c <= a)
		cout << "不能构成三角形" << endl;
	else
	{
		if (a == b || a == c || b == c)
			{
				cout << "是等腰三角形 周长为：" << l << endl;
			}
		else cout << "周长为：" << l << endl;
	}
}