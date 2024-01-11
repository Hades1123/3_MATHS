#include<iostream>
#include<cmath>
using namespace std;
#define ll long long 
long long ucln(long long a, long long b)
{
    if (b == 0) return a;
    while(b){
    long long r = a % b;
    a = b;
    b = r;
    }
    return a;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a,b; long long l,r;
    cin >> l >> r >> a >> b;
    
    int boiChung = a/ucln(a,b)*b;
    ll temp = r - l;
    ll res = temp /a  + temp /b  - temp/boiChung + (r % a == 0) + (r % b==0);
    cout << res;
    return 0;
}