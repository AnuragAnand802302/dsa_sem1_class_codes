#include <bits/stdc++.h>
using namespace std;
int power(int a,int b)
{
    if(b<=0)
    {return 1;}
    else{
        return (a*power(a,b-1));
    }
}
int main() {
    cout<<"enter the number whose power is to be found and its corresponding power "<<endl;
    int x,y;
    cin>>x>>y;
    cout<<"power solution is "<<endl<<power(x,y);
    return 0;
}