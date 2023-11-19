#include<iostream>
#include<iomanip>
#include<cmath>

#define ll long long
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int max_num(int n)
{
    int res = 1;
        for (int i = 2 ; i*i <= n; ++i)
        {
            if (n % i == 0)
            {
                if (i % 2 == 1) res = max(res,i);
                if ((n/i) % 2 == 1 && n/i != n)
                {
                    res = max(res,n/i);
                    break;
                }
            }
        }
    return res;
}
int main()
{
    BOOST

    int t; cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        
        cout << max_num(n) << "\n";
    }
    return 0;
}