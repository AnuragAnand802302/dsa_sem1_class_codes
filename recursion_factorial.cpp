#include <bits/stdc++.h>
using namespace std;
int factorial(int);
int main() {
    int n;
    int f;
    cout<<"enter the no. to find factorial"<<endl;
    cin>>n;
    f=factorial(n);
    cout<<"the factorial of given no. is "<<endl<<f;
    return 0;
}
int factorial(int a)
{
    if (a==0 || a==1)
    return 1;
    else
        return (a*factorial(a-1));
    
}