#include<iostream>
#include<iomanip>
#include<queue>
#include<cmath>
#define ll long long
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

bool isPrime(int n)
{
    for (int i = 2 ; i*i <= n ; ++i)
        if (n % i == 0)
            return false;
    return true;
}
int main()
{
    BOOST
    int n; cin >> n;
    ll start_limit = pow(10,n-1);
    ll end_limit = pow(10,n);

    queue <ll> q;

    for (int i = 2; i < 10; ++i)
        if (isPrime(i))
            q.push(i);

    while(!q.empty())
    {
        for (int i = 1 ; i <= 9; ++i)
        {
            int k = q.front() * 10 + i;
            if (k < end_limit && isPrime(k))
                q.push(k);
        }
        if (q.front() >= start_limit && q.front() < end_limit)
            cout << q.front() << ' ';
        q.pop();
    }

    return 0;
}