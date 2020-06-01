#include<iostream>
using namespace std;

void display(int ar[])
{
    cout<<"\You entered: ";
    for(int i=0;i<5;++i)
        cout<<ar[i]<<"\n";
}
int main()
{
    int ar[5],i;
    cout<<"Enter elements: ";
    for(i=0;i<5;++i)
        cin>>ar[i];
    display(ar);
    return 0;
}
