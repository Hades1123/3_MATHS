#include<bits/stdc++.h>
using namespace std;

#define BOOST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
bool Prime[1000009];

int main()
{
    BOOST
    int n;
    cin >> n;
    memset(Prime,true,sizeof(Prime));

    Prime[0] = Prime[1] = false;
    for (int i = 2 ; i*i <= n ; ++i)
    {
        if (Prime[i] == true)
        {
            for (int j = i*2; j <= n ; j+=i)
                Prime[j] = false;
        }
    }

    for (int i = 0; i <=n ; ++i)
        if (Prime[i])
            cout << i << ' ';
    return 0;
}