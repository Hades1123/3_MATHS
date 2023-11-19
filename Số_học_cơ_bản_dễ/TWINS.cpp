#include<iostream>
#include<iomanip>
#include<cstring>
#define ll long long
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

bool Prime[1000009];

int main()
{
    BOOST
    int n,k; cin >> n >> k;
    memset(Prime,true,sizeof(Prime));

    Prime [0] = Prime[1] = false;
    for (int i = 0; i*i <= n ; ++i)
    {
        if (Prime[i])
        {
            for (int j = 2*i ; j <=n ; j+=i)
                Prime[j] = false;
        }
    }

    int cnt = 0;
    for (int i = 2 ; i < n; ++i)
    {
        if (i + k <= n)
            if (Prime[i] && Prime[i+k])
                ++cnt;
    }
    cout << cnt;

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// #include <iostream>
// #include <vector>
// #include <cmath>

// vector<bool> sang_nt(int n)
// {
//     n += 3;
//     vector<bool> f(n+1,true);
//     f[1] = f[0] = false;
//     f[2] = true;
//     for (int i = 2; i <= sqrt(n); i ++)
//     {
//         if (f[i])
//         {
//             for (int p = i * i; p <= n; p += i) f[p] = false;

//         }
//     }
//     return f;
// }
// int main()
// {
//     int n, k;
//     cin >> n >> k;
//     vector<bool> f = sang_nt(n);
//     int res = 0;
//     for (int i = 2; i <= n - k; ++i)
//     {
//         if (f[i] && f[i + k])
//         {
//             res++;
//         }
//     }
//     cout << res << endl;
//     return 0;
// }