#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter age to check whether a person is eligible to vote or not - ";
    cin>>age;
    if(age<18)
        cout<<"\n\nNot eligible!!!";
    else
        cout<<"\n\nEligible to vote\n";
    return 0;
}
