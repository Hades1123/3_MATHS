#include<bits/stdc++.h>
#include<vector>

using namespace std;

vector <int> even_num (vector<int> v)
{
    vector <int> res;
    for (int i = 0; i < v.size() ; ++i)
        if(v[i] % 2 == 0)
            res.push_back(v[i]);
    return res;
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt" , "w" , stdout);

    vector<int> v;
    int x;
    while(cin >> x)
    {
        v.push_back(x);
    }
    vector <int> res = even_num(v);
    for (auto x:res)
        cout << x << ' ';
    return 0;
}