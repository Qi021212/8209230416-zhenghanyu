#include<iostream>
using namespace std;
#include"mytemperature.h"
int main()
{
	double cel, fah;
	cout << "����һ�������¶�:";
	cin >> cel;
	cout << "ת��Ϊ�����¶�Ϊ��" << celsius_to_fah(cel) << endl;
	cout << "����һ�������¶�:";
	cin >> fah;
	cout << "ת��Ϊ�����¶�Ϊ��" << fahrenheit_to_cels(fah) << endl;
}
