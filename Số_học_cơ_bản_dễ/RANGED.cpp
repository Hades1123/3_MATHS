#include<iostream>
#include<iomanip>

#define ll long long
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

bool check (ll a, ll b, ll c, ll d)
{
    if ( b < c || d < a)
        return false;
    return true;
}
int main()
{
    BOOST
    ll a,b,c,d;
    cin >> a >> b >> c >> d;

    if (check(a,b,c,d))
        cout << "YES";
    else cout << "NO";
    return 0;
}