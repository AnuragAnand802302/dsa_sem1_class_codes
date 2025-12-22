#include <bits/stdc++.h>
using namespace std;
string palindrome(int i)
{
    int m=i;
    int rev=0;
    while (i>0)
    {
        int a = i%10;
        rev =rev*10+a;
        i=i/10;
    }
    if (rev==m){
        return "given no. is palindrome";
    }
    else {
        return "given no. is not a palindrome";
    }
}
int main() {
    int x;
    cout<<"enter the number to check palindrome"<<endl;
    cin>>x;
    cout<<palindrome(x);
    return 0;
}