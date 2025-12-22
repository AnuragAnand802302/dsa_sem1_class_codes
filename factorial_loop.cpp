#include<bits/stdc++.h>
using namespace std;
int main() {
    int fact=1,f;
    cout<<"enter the no. whose factorial you want"<<endl;
    cin>>f;
    int i=1;
    while(i<=f)
    {
        fact= fact*i;
        i++;
    }
    cout<<fact;
    return 0;
}