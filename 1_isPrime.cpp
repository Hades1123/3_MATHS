#include<bits/stdc++.h>

using namespace std;

// check Prime number
bool isPrime(int n)
{
    for (int i = 2; i*i <= n; i++)
        if (n%i == 0)
            return false;
    return n > 1;
}

int main()
{
    int n; cin >> n;
    cout << isPrime(n);
    return 0;
}