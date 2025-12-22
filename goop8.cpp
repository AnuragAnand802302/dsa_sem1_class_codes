#include<bits/stdc++.h>
using namespace std;
int main() {
    string eqn;
    float a,b,c,d;
    cout<< "in the given eqn ax^2 + bx + c = 0. input the value of a,b,c" << endl;
    cin>>a>>b>>c;
    d = b*b-(4*a*c);
    if (d>0)
    {
        cout<< "roots are real";
    }
    else if (d==0)
    {
        cout<< "roots are equal";
    }
    else {
        cout<<"roots are imaginary";
    }
    return 0;
}