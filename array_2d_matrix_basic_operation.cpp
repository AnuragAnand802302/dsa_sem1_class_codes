#include <bits/stdc++.h>
using namespace std;
int main() {
    int a[3][3],b[3][3],c[3][3],i,j,k;
    cout<<"enter elements of matrix a"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"enter elements of matrix b"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<"the addition of two matrices"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"the subtraction of two matrices"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]-b[i][j];
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"the multiplication of two matrices"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=0;
            for(k=0;k<3;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
            cout<<c[i][j]<<" ";
        }

        cout<<endl;
    }
    return 0;
}