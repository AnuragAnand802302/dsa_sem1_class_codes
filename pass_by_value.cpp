#include <bits/stdc++.h>
using namespace std;
void SWAP(int a,int b){
    int t = a;
    a = b;
    b = t;
    cout<<"NUmbers after swapping is"<<endl<<a<<endl<<b<<endl;
}
int main() {
    int a,b;
    cin>>a>>b;
    SWAP(a,b);
    cout<<"NUmbers after swapping is"<<endl<<a<<endl<<b;
    return 0;
}