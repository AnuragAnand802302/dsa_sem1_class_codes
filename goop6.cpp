#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"enter the marks ";
    cin>>n;
    if (n>=90 && n<=100)
    { cout<<" your grade is A1";}
    else if (n>=80 && n<90)
    { cout<<" your grade is A2";}
    else if (n>=70 && n<80)
    { cout<<" your grade is B1";}
    else if (n>=60 && n<70)
    { cout<<" your grade is B2";}
    else if (n>=55 && n<60)
    { cout<<" your grade is C";}
    else if (n>=50 && n<55)
    { cout<<" your grade is D";}
    else if (n>=40 && n<50)
    { cout<<" your grade is E";}
    else if (n<40 && n>=0)
    { cout<<" your grade is F";}
    else {
        cout<<"invalid input";
    }
    return 0;
}