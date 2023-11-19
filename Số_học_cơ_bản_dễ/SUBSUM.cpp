#include<iostream>
#include<iomanip>

#define ll long long
#define BOOST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

int main()
{
    BOOST
    ll a,b; cin >> a >> b;

    cout << (a+b)/2 << ' ' << (a+b)/2 - b;

    return 0;
}