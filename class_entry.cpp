#include <bits/stdc++.h>
using namespace std;
class Student{
    public: // ':' is needed for specifyiing the access type of class.
    int roll;
    string name;
    void detail(){
        cout<<"your roll no. is "<<roll<<endl<<"your name is "<<name<<endl;
    }
}; // semicolon is needed for closing the class.
int main() {
    Student s;
    s.roll = 43;
    s.name = "Anurag Anand";
    s.detail();
    return 0;
}