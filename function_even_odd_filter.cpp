#include <bits/stdc++.h>
using namespace std;
void even(int a){
    if (a%2==0){
        cout<<a<<" is even";
    }
    else
    {
        cout<<a<<" is odd";
    }
}
int main(){
    int x;
    cout<<"input the number to be checked"<<endl;
    cin>>x;
    even(x);
    return 0;

}