#include <bits/stdc++.h>
using namespace std;
int main() {
    vector <int> num{1,2,3,4,5};
    int sum=0;
    for(int i=0;i<num.size();i++)
    {
        sum=sum+num[i];
    }
    cout<<sum<<endl;
    num.push_back(2); //adds 2 at the end of original vector
    num.push_back(3);
    num.push_back(10);
    for(int i=0;i<num.size();i++)
    {
        cout<<num[i]<<" ";
    }
    num.pop_back();
    cout<<endl;
    for(int i=0;i<num.size();i++)
    {
        cout<<num[i]<<" ";
    }
    return 0;
}