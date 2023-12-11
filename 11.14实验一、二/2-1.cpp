#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	char a;
	cin >> a;
	if (int(a)>=97&&int(a)<=122) cout << char(a - 32) << endl;
	else cout << int(a)+1 << endl;
}