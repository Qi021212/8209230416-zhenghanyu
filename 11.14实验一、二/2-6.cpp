#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a, b, m, n;
	cin >> a >> b;
	int c = max(a, b);
	int d = min(a, b);
	while (c % a != 0 || c % b != 0) c++;
	while (a % d != 0 || b % d != 0) d--;
	cout << "最大公约数为：" << d << endl << "最小公倍数为：" << c << endl;
	return 0;

}