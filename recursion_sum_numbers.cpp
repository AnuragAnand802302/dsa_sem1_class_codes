#include <bits/stdc++.h>
using namespace std;
int addition(int a)
{
    if (a==1)
    return 1;
    else{
        return (a+addition(a-1));
    }
}
int main() {
    int n;
    cout<<"enter the no. upto which to be added"<<endl;
    cin>>n;
    cout<<"addition upto n number is "<<addition(n);
    return 0;
}