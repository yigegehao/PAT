#include<iostream>
#include<cmath>
#include<stack>

using namespace std;

bool isPrime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
void getMaxPrimePair(int n)
{
    stack<int> s;
    int count=0;
    for(int i=2;i<=n;i++)
    {
        if(isPrime(i))
            s.push(i);
    }
    while(!s.empty())
    {
        int a=s.top();
        s.pop();
        if(s.empty())
            break;
        int b=s.top();
        if(a-b==2)
            count++;
    }
    cout<<count;
}

int main()
{
    int n;
    cin>>n;
    getMaxPrimePair(n);
}
