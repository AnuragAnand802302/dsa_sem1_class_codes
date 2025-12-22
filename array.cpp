#include <bits/stdc++.h>
using namespace std;
int main() {
    int a[10],i;
    cout<<"enter elements of array"<<endl;
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    cout<<"array is [";
    for(i=0;i<10;i++)
    {
        cout<<a[i];
        if(i<9)
        {
            cout<<",";
        }
        else
        {
            cout<<"";
        }
    }
    cout<<"]";
    return 0;
}