#include<iostream>
using namespace std;
bool is_prime(int num);

bool is_prime(int num)
{
    int i=1,m=0;
    for (i = 1; i <=num; i++)
    {
        if (num % i == 0)  m++;   
    }
    if (m == 2) return true;
    else return false;
}

int main()
{
    int n = 0;
    for (int a = 1; a <= 200; a++)
    {
        bool result = is_prime(a);
        if (result == true)
        {
            cout << a << " ";
            n++;
            if (n%10==0) cout << endl;
        }
    }
    return 0;
}
