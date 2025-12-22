#include <bits/stdc++.h>
using namespace std;
void bubble_shoot(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main() {
    int a[]={64,34,25,12,22,11,90};
    int size= sizeof(a)/sizeof(a[0]);
    bubble_shoot(a,size);
    cout<<"sorted array is -> ";
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<"  ";
    }
    return 0;
}