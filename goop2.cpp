#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c; //to check whether the sum of any two number is even or not.
    if ((a+b)%2!=0||(a+c)%2!=0||(b+c)%2!=0){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0;
}