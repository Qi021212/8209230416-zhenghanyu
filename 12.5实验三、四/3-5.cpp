#include<iostream>
using namespace std;
int main()
{
	int sum=1,n;
	for (n = 9; n >= 1; n--)
	{
		sum = (sum + 1) * 2;
	}
	cout << "��һ����ӹ�ժ��������" << sum << endl;
	return 0;
}