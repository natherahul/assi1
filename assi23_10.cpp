#include<iostream>
using namespace std;
int main()
{
    int a[10],i,sum=0;
    cout<<"enter the array element";
    for(i=0;i<10;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    cout<<"sum of 10 array element are "<<sum; 
}