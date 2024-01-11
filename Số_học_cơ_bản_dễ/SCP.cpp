#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t;cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        cout << (long long) sqrt(n) << endl;
    }
    return 0;
}