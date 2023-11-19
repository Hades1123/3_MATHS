#include<iostream>
#include<iomanip>

#define ll long long
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

ll phan_tich(ll n)
{
    ll res = 2;
    for (ll i = 2 ; i*i <= n ; ++i)
    {
        while (n % i == 0)
        {
            res = i;
            n/=i;
        }
        
    }
    if (n!=1) res = n;
    return res;
}
int main()
{
    BOOST
    int t; cin >> t;
    while(t --)
    {
        ll n; cin >> n;
        cout << phan_tich(n) << "\n";
    }
    return 0;
}
