#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int a;
    cout<<"input the number to be tested"<<endl;
    cin>>a;
    n= a%2;
    switch (n){
        case 0:
        cout<<"number is even";
        break;
        default:
        cout<<"number is odd";
    }
    return 0;
}