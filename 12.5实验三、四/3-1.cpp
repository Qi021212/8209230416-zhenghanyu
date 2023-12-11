#include<iostream>
using namespace std;
int sum1(int a, int b)
{
	int gys, i;
	gys = min(a, b);
	for (i = 1; i <= 100000; i++)
	{
		if (a % gys == 0 && b % gys == 0) break;
		else gys--;
	}
	return gys;
}
int sum2(int a, int b)
{
	int gbs, i;
	gbs = max(a, b);
	for (i = 1; i <= 100000; i++)
	{
		if (gbs % a == 0 && gbs % b == 0) break;
		else gbs++;
	}
	return gbs;
}
int main()
{
	int m, n, gys, gbs ;
	cin >> m >> n;
	gys=sum1(m, n);
	gbs = sum2(m, n);
	cout << "最大公约数为：" << gys << endl;
	cout << "最小公倍数为：" << gbs << endl;
	return 0;
}