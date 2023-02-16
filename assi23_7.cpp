#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the two numbers:";
    cin>>a>>b;
    cout<<"before swapping a="<<a<<" b="<<b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<endl<<"after swapping a="<<a<<" b="<<b;
}