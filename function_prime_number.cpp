#include <bits/stdc++.h>
using namespace std;
string prime_number(int n)
{
    int i=1;
    int c=0;
    while (i<=n)
    {
        if (n%i==0)
        {
            c++;
        }
        i++;
    }
    if (c==2){
        return "given no. is prime ";
    }
    else {
        return "it is not prime";
    }
}
int main() {
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;
    cout<<prime_number(n);
    return 0;
}