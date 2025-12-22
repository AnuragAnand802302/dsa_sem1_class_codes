#include<bits/stdc++.h>
using namespace std;
int main() {
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(k=1;k<=5-i;k++)
        {
            cout<<"   ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    int l,m,n;
    for(l=4;l>=1;l--)
    {
        for(m=1;m<=5-l;m++)
        {
            cout<<"   ";
        }
        for(n=1;n<=l;n++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}