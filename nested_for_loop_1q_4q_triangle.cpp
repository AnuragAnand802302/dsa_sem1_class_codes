#include<bits/stdc++.h>
using namespace std;
int main() {
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    int l,m;
    for(l=4;l>=1;l--)
    {
        for(m=1;m<=l;m++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}