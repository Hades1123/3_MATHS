#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n,k,q; cin >> n >> k >> q;
    int a[n];
    
    k = k%n;
    for (int i = 0 ; i < n ; ++i)
    {
        int temp = i + k;
        if (temp > n - 1)
            temp = i + k - n;
        cin >> a[temp];
    }
    while(q--)
    {
        int i;
        cin >> i;
        cout << a[i] << endl;
    }
    return 0;
}