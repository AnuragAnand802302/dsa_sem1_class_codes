#include <bits/stdc++.h>
using namespace std;
int factorial(int n)
    {
    int fact = 1;
   for(int i=1;i<=n;i++)
    {
        fact= fact*i;
    }
    return fact;
}
int main(){
    int n;
    cout<<"enter the number whose factorial you want to find"<<endl;
    cin>>n;
    cout<<"factorial is "<<endl<<factorial(n);
    return 0;
}
