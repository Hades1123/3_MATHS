#include<iostream>
#include<iomanip>

#define ll long long
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main()
{
    BOOST
    int n,k; cin >> n >> k;

    if ( n >= k)
    {
        if (n % k == 0)
            cout << (n/k)*10;
        else
        {
            int res = n/k * 10;
            int temp = n % k;
            if (2*temp <= k)
                cout << res + 5;
            else cout << res + 10;
        }
    }
    else
    {
        cout << 10;
    }
    return 0;
}
