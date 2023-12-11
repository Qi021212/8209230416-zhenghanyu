#include<iostream>
using namespace std;
void merge(int list1[], int size1, int list2[], int size2, int list3[])
{
	for (int i = 0; i < size1; i++)
	{
		list3[i] = list1[i];
	}
	for (int i = size1; i < (size1 + size2); i++)
	{
		list3[i] = list2[i - size1];
	}
	for (int i = 0; i < (size1 + size2); i++)
	{
		for (int j = i+1; j < (size1 + size2); j++)
		{
			if (list3[j] < list3[i])
			{
				int temp = list3[i];
				list3[i] = list3[j];
				list3[j] = temp;
			}
		}
	}
}
int main( )
{
	int size1, size2, list1[10000], list2[10000], list3[10000];
	cout << "输入第一个数组的长度：" << endl;
	cin >> size1;
	cout << "输入第一个数组中的数据：" << endl;
	for (int i = 0; i < size1; i++)
	{
		cin >> list1[i];
	}
	cout << "输入第二个数组的长度：" << endl;
	cin >> size2;
	cout << "输入第二个数组中的数据：" << endl;
	for (int i = 0; i < size2; i++)
	{
		cin >> list2[i];
	}
	merge(list1, size1, list2, size2, list3);
	for (int i = 0; i < (size1 + size2); i++)
	{
		cout << list3[i] << " ";
	}
	return 0;
}