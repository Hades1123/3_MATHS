#include<iostream>
#include<iomanip>

#define ll long long
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main()
{
    BOOST
    int a,b; 
    cin >> a >> b;
    ll sum = 0;

    for (int i  = 1 ; i*i <= a; ++i)
    {
        if (a % i == 0)
        {
            if (b % i != 0)
                sum += i;
            if (a/i != i && b % (a/i) != 0)
                sum += a/i;
        }
    }
    cout << sum;

    return 0;
}