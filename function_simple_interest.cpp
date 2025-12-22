#include <bits/stdc++.h>
using namespace std;
float simple_interest(float , float , float ); // can be written or not; function declaration
float simple_interest(float P, float T, float R) //function definition
{
    float si;
    si=(P*T*R)/100;
    return si;
}
int main() {
    float p,r,t;
    cout<<"enter principal,rate and time"<<endl;
    cin>>p>>r>>t;
    float interest = simple_interest(p,t,r); //function calling
    cout<<"simple interest is "<< endl<<interest;
    return 0;
}