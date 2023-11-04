#include<bits/stdc++.h>

using namespace std;

// sieve of eratosthene

int main()
{
    int n; cin >> n;
    bool Prime[n+10];

    memset(Prime,true,sizeof(Prime));
    Prime[0] = Prime[1] = false;

    for (int i = 0; i <= sqrt(n) ; ++i)
    {
        if (Prime[i])
        {
            for (int j = i*2; j <= n; j+=i)
                Prime[j] = false;
        }
    }

    for(int i = 0; i <= n ; ++i)
        if (Prime[i])
            cout << i << " ";
    return 0;
}