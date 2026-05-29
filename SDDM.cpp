#include<iostream>
using namespace std;
int main()
{
    int a,b,sum,div,diff,mul;
    cout<<"enter two numbers";
    cin >>a>>b;
    sum=a+b;
    div=a/b;
    diff=a-b;
    mul=a*b;
    cout<< "sum is:"<< sum;
    cout<<"difference is:" <<diff;
    cout<<"Multiply is:" <<mul;
    cout<<"Division is:" <<div;
    return 0;
}