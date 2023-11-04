#include<bits/stdc++.h>

using namespace std;

// the way i like best to find GCD of two numbers
int GCD_1(int a, int b)
{
    while(a * b)
    {
        if (a > b) a%=b;
        else b%=a;
    }
    return a + b;
}
// the way i learn from 28tech
int GCD_2(int a, int b)
{
    while(b != 0)
    {
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}

// the way using recursion, this based on logic of GCD_2
int GCD_recursion(int a, int b)
{
    if (b == 0)
        return a;
    return GCD_recursion(b,a%b);
}
int main()
{
    int a,b;
    cin >> a >> b;
    
    cout << "First way:" << GCD_1(a,b) << endl;
    cout << "The way of my teacher 28tech: " << GCD_2(a,b) << endl;
    cout << "Using recursion: " << GCD_recursion(a,b);
    return 0;
}