#include<bits/stdc++.h>
using namespace std;
int main(){
    int age,annual_income;
    string citizen;
    cout<<"indian citizenship (yes/no)";
    cin>>citizen;
    cout<<"your annual income";
    cin>>annual_income;
    cout<<"your age";
    cin>>age;
    if (citizen== "yes"){
        if (annual_income<=200000){
            if (age >= 60){
                cout<<"you're information has been registered";
            }
            else {
                cout<<"age information not matched ";
            }
        }
        else {
            cout<<"income information not matched required data";
        }
    }
    else {
        cout <<"citizenship invalid";
    }
    return 0;
}