#include<bits/stdc++.h>
using namespace std;
int main() {
    int i,n,c=0;
    cout<<"enter the no"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0){
            c++;
        }
    }
    if (c==2){
        cout<<"given no. is prime";
    }
    else{
        cout<<"given no. is not prime";
    }
    return 0;
}