#include <bits/stdc++.h>
using namespace std;
void q1_row(int a)
{
    int i,j;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
}
void q4_row(int a)
{
    int i,j;
    for(i=a;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
}
void q3_row(int a)
{
  int i,j,k;
    for(i=a;i>=1;i--)
    {
        for(k=1;k<=a-i;k++)
        {
            cout<<"   ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }  
}
void q2_row(int a)
{
  int i,j,k;
    for(i=1;i<=a;i++)
    {
        for(k=1;k<=a-i;k++)
        {
            cout<<"   ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }  
}
void right_pointing_triangle(int a)
{
    int i,j,x,y;
    if(a%2==0)
    {
        x=a/2;
        y=x-1;
    }
    else
    {
        x=(a+1)/2;
        y=x-1;
    }
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    for(i=y;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
}
void left_pointing_triangle(int a)
{
    int i,j,k,x,y;
    if(a%2==0)
    {
        x=a/2;
        y=x-1;
    }
    else
    {
        x=(a+1)/2;
        y=x-1;
    }
    for(i=1;i<=x;i++)
    {
        for(k=1;k<=x-i;k++)
        {
            cout<<"   ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    for(i=y;i>=1;i--)
    {
        for(k=1;k<=(y+1)-i;k++)
        {
            cout<<"   ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
}
void upper_triangle(int a)
{
    int i,j,k;
    for(i=1;i<=a;i++)
    {
        for(k=1;k<=a-i;k++)
        {
            cout<<"   ";
        }
        for(j=1;j<=2*i-1;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
}
void lower_triangle(int a)
{
    int i,j,k;
    for(i=a;i>=1;i--)
    {
        for(k=1;k<=a-i;k++)
        {
            cout<<"   ";
        }
        for(j=1;j<=2*i-1;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
}
void diamond(int a)
{
    int i,j,k,b;
    b=a-1;
    for(i=1;i<=a;i++)
    {
        for(k=1;k<=a-i;k++)
        {
            cout<<"   ";
        }
        for(j=1;j<=2*i-1;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    for(i=b;i>=1;i--)
    {
        for(k=1;k<=(b+1)-i;k++)
        {
            cout<<"   ";
        }
        for(j=1;j<=2*i-1;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
}
int main() {
    int x;
    cout<<"enter the no. of maximum stars in a row below -> "<<endl;
    cin>>x;
    // q1_row(x);
    // q4_row(x);
    // q3_row(x);
    // q2_row(x);
    // right_pointing_triangle(x);
    // left_pointing_triangle(x);
    // upper_triangle(x);
    // lower_triangle(x);
    // diamond(x);
    return 0;
}