#include<iostream>

using namespace std;

int getStep(int n)
{
    int i=0;
    while(n!=1)
    {
        if(n%2==0)
            n=n/2;
        else
            n=(3*n+1)/2;
        i++;
    }
    return i;
}

int main()
{
    int n;
    cin>>n;
    cout<<getStep(n)<<endl;
}
