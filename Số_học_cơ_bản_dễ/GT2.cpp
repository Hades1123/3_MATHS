#include<bits/stdc++.h>

using namespace std;

string a[1001];
string product(string a, long long b)
{
    int carry = 0;
    string res;
    for (int i = a.size() - 1; i >= 0; --i)
    {
        // Lấy tích chữ số và số nhỏ, cộng thêm biến nhớ từ hàng bên phải.
        long long s = (a[i] - '0') * b + carry; 
        carry = s / 10; // Giá trị nhớ đẩy sang hàng bên trái.
        res += (char) (s % 10 + '0'); 
    }
    
    // Nếu vẫn còn nhớ thì viết nốt nó sang bên trái kết quả.
    if (carry > 0)
        while (carry != 0)
        {
            res += (char) (carry % 10 + '0');
            carry /= 10;
        }

    // Đảo ngược chuỗi kết quả để thu được kết quả đúng.
    reverse(res.begin(), res.end());
	
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    a[0] = "1";string res = "1";
    for (int i = 1 ; i <= 1000;  ++i)
    {
        res = product(res,i);
        a[i] = res;
    }
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        cout << a[n] << endl;
    }
    return 0;
}