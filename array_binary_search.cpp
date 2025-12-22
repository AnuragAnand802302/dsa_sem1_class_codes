#include <bits/stdc++.h>
using namespace std;
int main(){
    int size,i,num,first,last,mid;
    cout<<"enter the size of array"<<endl;
    cin>>size;
    int a[size];
    cout<<"enter array elements"<<endl;
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the element which you want to find"<<endl;
    cin>>num;
    first=0;
    last=size;
    mid=(first+last)/2;
    while(first<last)
    {
        if(a[mid]>num)
        {
            last=mid-1//;
        }
        else if (a[mid]==num)
        {
            cout<<"element found "//;
            break;
        }
        else{
            first=mid+1;
        }
        mid=(first+last)/2;

    }
    return 0;
}