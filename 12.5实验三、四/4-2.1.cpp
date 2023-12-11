#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int indexof(const char * s1, const char * s2)
{
	int l1 = strlen(s1);
	int l2 = strlen(s2);
	int i, j, n = 0;
	for (i = 0; i < l2; i++)
	{
		if (*(s2+i) == *s1)
		{
			for (j = 0; j < l1; j++)
			{
				if (*(s2+i + j) == *(s1+j)) n++;
				else
				{
					n = 0;
					break;
				}
			}
		}
		if (n == l1) break;
	}
	if (n == l1) return i;
	else return -1;
}
int main()
{
	char a[100], b[100];
	int num;
	cout << "Enter the first string: " << endl;
	cin >> a;
	cout << "Enter the second string: " << endl;
	cin >> b;
	num = indexof(a, b);
	if (num == -1) cout << "S1不是S2的子字符串" << endl;
	else cout << "S1是S2的子字符串，第一次匹配的下标为："  << num << endl;
}