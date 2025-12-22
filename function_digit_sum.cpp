#include <bits/stdc++.h>
using namespace std;
int sum_of_digit(int a){
    int b=0,i,j;
    i=a;
    while(i>0){
        j=i%10;
        b=b+j;
        i=i/10;
    }
    return b;
}
int main() {
    cout<<"enter the number"<<endl;
    int x;
    cin>>x;
    cout<<sum_of_digit(x);
    return 0;
}