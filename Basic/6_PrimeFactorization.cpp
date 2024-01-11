#include<bits/stdc++.h>

using namespace std;

//The way i often use to factorize prime
void primeFactor(int n)
{
    int cnt;
    bool check_first = false;

    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            cnt = 0;
            if (check_first) cout << " * ";
            check_first = true;
            cout << i << '^';
            while(n % i == 0)
            {
                cnt ++;
                n/=i;
            }
            cout << cnt;
        }
    }
    if (check_first && n != 1) cout << " * ";
    if (n != 1) cout << n << "^1";
}
int main()
{
    int n; cin >> n;
    primeFactor(n);
    return 0;
}