#include<iostream>
#include<iomanip>

#define ll long long
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main()
{
    BOOST
    int x; int sum = 0;
    while(cin >> x)
    {
        sum += x;
    }
    cout << 21 - sum;
    return 0;
}