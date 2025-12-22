#include <bits/stdc++.h>
using namespace std;
double square_root(int N)
{
    double x,y,z;
    z=10;
    x=N/2;
    while(z>0){
        y=(x+(N/x))/2;
        x=y;
        z--;
    
    return x;
    }
}
int main() {
    int n;
    cout<<"enter a number to find square root"<<endl;
    cin>>n;
    cout<<square_root(n);
    return 0;
}