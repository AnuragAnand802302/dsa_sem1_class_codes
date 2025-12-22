#include <bits/stdc++.h>
using namespace std;
int main() {
    int i,rev=0,a;
    cout<<"enter the number ";
    cin>>i;
    while (i>0)
    {
        a = i%10;
        rev =rev*10+a;
        i=i/10;
    }
    cout<<"reverse of number is "<<rev;
    return 0;
}