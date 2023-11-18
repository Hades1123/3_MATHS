#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main()
{
    int n; cin >> n; int a[n+1];
    for (int i = 0; i < n ; ++i)
        cin >> a[i];
    
    vector <pair <int,int> > v;
    // v.size() --> so luong phan tu cua vector
    //v[j].first luu gia tri cua phan tu trong mang
    //v[j].second luu tan suat xuat hien cua phan tu trong mang
    for (int i = 0 ; i < n ; ++i)
    {
        bool find = false;
        for (int j = 0 ; j < v.size() ; ++j)
        {
            if (v[j].first == a[i])
            {
                find = true;
                v[j].second ++;
                break;
            }
        }
        if(!find)
            v.push_back(make_pair(a[i],1));
    }

    for (int i = 0 ; i < v.size() ; ++i)
        cout << v[i].first << ' ' << v[i].second << endl;

    return 0;
}