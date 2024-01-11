#include<bits/stdc++.h>

using namespace std;

void xinchao(int n)
{
    if(n > 0)
    {
        cout << n << ' ';
        xinchao(n-1);
    }
}


int main()
{
    xinchao(5);
    return 0;
}