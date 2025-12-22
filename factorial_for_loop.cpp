#include<bits/stdc++.h>
using namespace std;
int main() {
    int fact=1,f,i;
    cout<<"enter the no. whose factorial you want"<<endl;
    cin>>f;
    for(i=1;i<=f;i++)
    {
        fact= fact*i;
    }
    cout<<fact;
    return 0;
}