#include<iostream>
#include<vector>
#include<iomanip>

using namespace std;

void isN(int n)
{
        if(n==0)
            cout<<'N';
        else
            cout<<n;
}
void deal(vector<int> v)
{
    int a1=0,a2=0,a3=0,a4=0,a5=0;
    int tag=1,count=0;
    for(auto a:v)
    {
        if(a%2==0&&a%5==0)
        {
            a1+=a;
        }
        else if(a%5==1)
        {
            if(tag%2==0)
                a2-=a;
            else
                a2+=a;
            tag++;
        }
        else if(a%5==2)
        {
            a3++;
        }
        else if(a%5==3)
        {
            a4+=a;
            count++;
        }
        else if(a%5==4)
        {
            if(a5<a)
                a5=a;
        }
    }
    isN(a1);
    cout<<" ";
    isN(a2);
    cout<<" ";
    isN(a3);
    cout<<" ";
    if(a4==0)
        cout<<'N';
    else
        cout<<setiosflags(ios::fixed)<<setprecision(1)<<float(a4)/count;
    cout<<" ";
    isN(a5);
}
int main()
{
    vector<int> v;
    int n,t;
    cin>>n;
    while(n--)
    {
        cin>>t;
        v.push_back(t);
    }
    deal(v);
}
