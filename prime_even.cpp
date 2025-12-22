#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,i,c;
    c=0;
    cout<<"enter the number "<<endl;
    cin>>n;
    if (n%2==0){
        cout<<"given no. is even"<<endl;
    }
    else{
        cout<<"given no. is odd"<<endl;
    }
    i=1;
    while (i<=n)
    {
        if (n%i==0)
        {
            c++;
        }
        i++;
    }
    if (c==2){
        cout<<"given no. is prime ";
    }
    else {
        cout<<"it is not prime";
    }
    return 0;
}