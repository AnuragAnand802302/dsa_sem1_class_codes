#include <bits/stdc++.h>
using namespace std;
int sum(int arr[5])
{
    int sum =0;
    for(int i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
int main() {
    int a[5]={10,20,30,40,50};
    int total=sum(a);
    cout<<"sum of elements of array is -> "<<total;
    return 0;
}