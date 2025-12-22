#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    float a,b,c;
    cout<< "please enter two number and operator respectively, 1=+,2=-,3=*,4=/. "<<endl;
    cin>>a>>b>>n;
    switch(n){
        case 1:
        c=a+b;
        break;
        case 2:
        c=a-b;
        break;
        case 3:
        c=a*b;
        break;
        case 4:
        c=a/b;
        break;
        default:
        cout<<"invalid operator key";
    }
    cout<<"result of your input is "<< c;
    return 0;
}