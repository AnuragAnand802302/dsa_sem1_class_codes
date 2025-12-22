#include <bits/stdc++.h>
using namespace std;
int main() {
    int a[10],i,even[10],odd[10],j=0,k=0;
    cout<<"enter elements of array"<<endl;
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    for (i=0;i<10;i++)
    {
        if (a[i]%2==0)
        {
            even[j]=a[i];
            j++;
        }
        else{
            odd[k]=a[i];
            k++;
        }
    }
    cout<<"even no. here are"<<endl;
    for(i=0;i<j;i++)
    {
        cout<<even[i]<<" ";
    }
    cout<<endl<<"odd no. here are"<<endl;
    for(i=0;i<k;i++)
    {
        cout<<odd[i]<<" ";
    }
    return 0;

}