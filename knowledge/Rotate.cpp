#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt" , "w" , stdout);

    int n = 100;
    int* n_ptr = &n;
    cout << n_ptr << endl;
    cout << *n_ptr;
    return 0;
}