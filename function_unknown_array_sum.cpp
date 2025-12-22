#include <bits/stdc++.h>
using namespace std;
int sum(int arr[],int n)
{
    int sum =0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
int main() {
    int a[]={10,20,30,40,50};
    int size= sizeof(a)/sizeof(a[0]);

    int total=sum(a,size);
    cout<<"sum of elements of array is -> "<<total;
    return 0;
}