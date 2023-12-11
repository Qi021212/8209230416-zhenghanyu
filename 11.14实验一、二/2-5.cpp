#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	char p;
	int a=0, b=0, c=0,d=0;
	while ((p = getchar()) != '\n')
	{
		if ((p >= 'a' && p <= 'z') || (p >= 'A' && p <= 'Z')) a++;
		else if (p == ' ') b++;
		else if (p >= '0' && p <= '9') c++;
		else d++;
	}
	cout <<"英文字母数量为："<< a << endl <<"空格数量为："<< b << endl<<"数字字符数量为：" << c << endl <<"其他字符数量为：" << d << endl;
	return 0;
}