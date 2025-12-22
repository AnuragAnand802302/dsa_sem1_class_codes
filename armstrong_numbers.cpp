#include <bits/stdc++.h>
using namespace std;
int main() {
    int u,l,count=0;
    cin>>l>>u;
    for(int i=l;i<=u;i++)
    {
        int n=i,sum=0;
        string s= to_string(i);
        int len=s.length();
        while(n>0)
        {
            int a=n%10;
            sum = sum+int(pow(a,len));
            n=n/10;
        }
        if(sum==i)
        {
            cout<<sum<<" ";
            count++;
        }
    }
    if(count==0)
    {
        cout<<"-1";
    }
    return 0;
}