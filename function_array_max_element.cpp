#include <bits/stdc++.h>
using namespace std;
int maximum_element(int arr[],int n)
{
    int max =  arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
int main() {
    int a[]={3,19,86,42,56,89};
    int size= sizeof(a)/sizeof(a[0]);
    int m = maximum_element(a,size);
    cout<<"the maximum element is -> "<<m;
    return 0;
}