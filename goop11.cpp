#include<bits/stdc++.h>
using namespace std;
int main() {
    string eqn;
    float a,b,c,d,x1,x2;
    cout<< "in the given eqn ax^2 + bx + c = 0. input the value of a,b,c" << endl;
    cin>>a>>b>>c;
    d = pow(b,2)-4*a*c;
    x1= (-b+sqrt(d))/(2*a);
    x2= (-b-sqrt(d))/(2*a);
    if (d>0){
        cout<<"roots are real and solution is "<<x1<<","<<x2;
    }
    else if (d==0){
        cout<<" roots are equal and solution is "<<x1<<","<<x2;
    }
    else {
        cout<<"roots are imaginary";
    }
    return 0;
}