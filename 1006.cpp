#include<iostream>

using namespace std;


void transformOutput(int n)
{
    int b=n/100;
    int s=n/10%10;
    int g=n%10;
    for(int i=0;i<b;i++)
        cout<<"B";
    for(int j=0;j<s;j++)
        cout<<"S";
    for(int k=1;k<=g;k++)
        cout<<k;
}
int main()
{
    int n;
    cin>>n;
    transformOutput(n);
}
