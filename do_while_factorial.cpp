#include <bits/stdc++.h>
using namespace std;
int main() {
    int i=1,n,fact=1;
    cout<<"enter the no. whose factorial you want "<<endl;
    cin>>n;
    do
    {
        fact=fact*i;
        i++;
    } while (i<=n);
    cout<<fact;
    return 0;
    
}