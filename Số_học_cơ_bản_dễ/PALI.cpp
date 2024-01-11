#include<bits/stdc++.h>

using namespace std;

bool check(int n)
{
    int temp = n;
    int reverse = 0;
    while(n)
    {
        reverse = reverse*10 + n%10;
        n/=10;
    }
    return reverse == temp;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    int a[n];
    for (int &x:a)
        cin >> x;
    for(int x:a)
        if(check(x))
            cout << x << ' ';
    return 0;
}