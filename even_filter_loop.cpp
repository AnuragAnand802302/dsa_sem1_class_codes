#include <bits/stdc++.h>
using namespace std;
int main() {
    int i=1,c=0,e=0;
    while(i<=100)
    {
        if (i%2==0)
        {
            cout<<i<<endl;
            c++;
        }
        else{
            e++;
        }
        i++;
    }
    cout<<"total no. of even no. = "<<c<<endl
    <<"total no. of odd no. = "<<e;
    return 0;
}