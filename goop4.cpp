#include <bits/stdc++.h>
using namespace std;
int main(){
    float u,b;
    cout<<"enter the no. of unit consumed ";
    cin>>u;
    if (u<=100)
    {
        b = u*5.20+120;
    }
    else if( u>=101 && u<=200) 
    {
        b = u*7.30+230;
    }
    else if (u>=201 && u<=300)
    {
        b = u*8.10+310;
    }
    else if (u>300)
    {
        b= u*8.50+420;
    }
    else {
        cout<<"invalid output";
    }
    float bill = b+(18*b)/100;
    cout<<"your electricity bill is "<< bill ;
    return 0;
}