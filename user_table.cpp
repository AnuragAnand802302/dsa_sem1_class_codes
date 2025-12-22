#include<bits/stdc++.h>
using namespace std;
int main() {
    int a;
    cout<<"Name the no. whose table you want"<<endl;
    cin>>a;
    cout<<"table of "<< a <<endl;
    int i=1;
    while(i<=10)
    {
        cout<<a<<" x "<<i<<" = "<<a*i<<endl;
        i++;
    }
    return 0;
}