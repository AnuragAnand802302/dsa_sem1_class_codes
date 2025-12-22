#include<bits/stdc++.h>
using namespace std;
int main() {
    int A, B, ans;
    string O;
    cout<<"enter the no. to be operated"<< endl;
    cin>>A>>B;
    cout<<"enter the operator"<< endl;
    cin>>O;
    if (O== "+")
    {
        ans = A+B;

    }
    else if (O== "-" )
    {
        ans = A-B;

    }
    else if (O== "*")
    {
        ans = A*B;

    }
    else if (O== "/")
    {
        ans = A/B;

    }
    else {
        cout<<"invalid output";
    }
    cout <<" the answer is " <<ans;
    return 0;
}