#include <bits/stdc++.h>
using namespace std;
int bigger(int x,int y)
{
    if(x>y){
        return x;
    }
    else if(x==y){
        return 0;
    }
    else{
        return y;
    }
}
int smaller(int x,int y)
{
    if(x>y){
        return y;
    }
    else if(x==y){
        return 0;
    }
    else{
        return x;
    }
}
int main(){
    int a,b;
    cout<<"enter two numbers to be compared"<<endl;
    cin>>a>>b;
    cout<<"bigger number is "<<bigger(a,b)<<endl<<"smaller number is "<<smaller(a,b);
    return 0;
}