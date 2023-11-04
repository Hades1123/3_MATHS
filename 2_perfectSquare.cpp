#include<bits/stdc++.h>

using namespace std;

// check the perfect square
bool perfectSquare(int n)
{
    int temp = sqrt(n);
    if (temp * temp == n)
        return true;
    return false;
}
int main()
{
    int n;cin >> n;
    cout << perfectSquare(n);
    return 0;
}