#include <bits/stdc++.h>
using namespace std;
int power(int x,int y)
{
    int power=1;
    for(int i=1;i<=y;i++)
    {
        power=power*x;
    }
    return power;
}
int main(){
    int a,b;
    cout<<"enter the number and its power value"<<endl;
    cin>>a>>b;
    cout<<power(a,b);
    return 0;
}