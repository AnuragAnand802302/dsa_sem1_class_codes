#include <bits/stdc++.h>
using namespace std;
int main() {
    int a[10],i;
    cout<<"enter elements of array"<<endl;
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    int max=a[0];
    for(i=0;i<10;i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }
    }
    cout<<"the maximum no. among data is "<<endl<<max;
    return 0;

}