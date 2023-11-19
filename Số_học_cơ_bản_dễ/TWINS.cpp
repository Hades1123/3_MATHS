#include<iostream>// bai nay nen dung vector
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
    for (int i = 2 ; i <= n -k; ++i)
    {
        if (Prime[i] && Prime[i+k])
            ++cnt;  
    }
    cout << cnt;

    return 0;
}
//Bai nay dung vector hay hon
// Khong dung boost
// #include <iostream>
// #include <vector>
// using namespace std;
// vector<bool> isPrime(int n)
// {
//     n+=1;
//     vector<bool> v(n,true);
//     v[1] = v[0] = false;
//     for (int i = 2; i*i <= n;  ++i)
//     {
//         if (v[i])
//         {
//             for (int j = i * i; j <= n; j += i)
//                 v[j] = false;
//         }
//     }
//     return v;
// }
// int main()
// {
//     int n, k;
//     cin >> n >> k;
//     vector<bool> v = isPrime(n);
//     int cnt = 0;
//     for (int i = 2; i + k <= n; ++i)
//     {
//         if (v[i] && v[i + k])
//         {
//             ++cnt;
//         }
//     }
//     cout << cnt << endl;
//     return 0;
// }