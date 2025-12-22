#include <bits/stdc++.h>
using namespace std;
int main() {
    int i,rev=0,a,m;
    cout<<"enter the number ";
    cin>>i;
    m=i;
    while (i>0)
    {
        a = i%10;
        rev =rev*10+a;
        i=i/10;
    }
    if ( rev==m){
        cout<<"given no. is palindrome";
    }
    else {
        cout<<"given no. is not a palindrome";
    }

    return 0;
}