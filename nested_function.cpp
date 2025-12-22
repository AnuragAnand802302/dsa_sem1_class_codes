#include <bits/stdc++.h>
using namespace std;
int sum(int a,int b)
{
    return (a+b);
}
int calculate()
{
    int a,b,c;
    cin>>a>>b;
    c=sum(a,b);
    return c;
}
int main() {
    int c = calculate();
    cout<<c;
    return 0;
}