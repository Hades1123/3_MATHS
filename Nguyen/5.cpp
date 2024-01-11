#include<bits/stdc++.h>

using namespace std;

int cnt[125];
int main()
{
    string s;
    cin >> s;
    
    for (int i = 0 ; i < s.size() ; ++ i)
    {
        cnt[s[i]] = 1;
    }
    int dem = 0;
    for (int i = 0 ; i < 125 ; ++ i)
    {
        if (cnt[i] != 0)
            ++dem;
    }
    if (dem % 2 == 0)
        cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
    return 0;
}