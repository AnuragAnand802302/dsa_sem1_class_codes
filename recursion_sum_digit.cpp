#include <bits/stdc++.h>
using namespace std;
int digit_sum(int a)
{
    int n;
    n = a%10;
    if (a<=0){
        return 0;
    }
    else{
        return (n+digit_sum(a/10));
    }
}
int main() {
    cout<<"enter the number whose digit sum is to be found "<<endl;
    int n;
    cin>>n;
    cout<<"digit sum is "<<endl<<digit_sum(n);
    return 0;
}