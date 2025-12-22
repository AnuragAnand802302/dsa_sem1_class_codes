#include <bits/stdc++.h>
using namespace std;
int main() {
    int a[10],i;
    cout<<"enter elements of array"<<endl;
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    int min=a[0];
    for(i=0;i<10;i++)
    {
        if (a[i]<min)
        {
            min=a[i];
        }
    }
    cout<<"the minimum no. among data is "<<endl<<min;
    return 0;

}