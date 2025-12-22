#include <bits/stdc++.h>
using namespace std;
int main() {
    int a[10],i,sum=0;
    float avg;
    cout<<"enter elements of array"<<endl;
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    cout<<"sum of element is "<<endl;
    for(i=0;i<10;i++)
    {
        sum=sum+a[i];
    }
    cout<<sum<<endl<<"average of given data is -> "<<endl;
    avg= float(sum)/10;
    cout<<avg;
    return 0;
}