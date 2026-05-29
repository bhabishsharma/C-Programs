#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"enter marks";
    cin>>marks;
    if(marks>=90)
    {
        cout<<"Distinction";
    }
    else if(80<marks>90)
    {
        cout<<"FIrst Division";

    }
    else if (70<=marks>80)
    {
    cout<<"Second Division";
    }
    else 
    {
        cout<<"Failed";
    }
    cout<<endl;
    return 0;
}