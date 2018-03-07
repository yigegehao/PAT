#include<iostream>
#include<set>

using namespace std;

void findKey(set<int> &s)
{
    set<int>::iterator iter;
    int t;
    for(auto a:s)
    {
        t=a;
        while(t!=1)
        {
            if(t%2==0)
                t=t/2;
            else
                t=(3*t+1)/2;
            iter=s.find(t);
            if(iter!=s.end())
                 s.erase(iter);
        }
    }
    set<int>::iterator ibeg,iend;
    ibeg=s.begin();
    iend=s.end();
    iend--;
    while(iend!=ibeg)
    {
        cout<<*iend<<" ";
        iend--;
        if(ibeg==iend)
        {
            cout<<*iend;
            break;
        }
    }
}

int main()
{
    set<int> s;
    int n,t;
    cin>>n;
    while(n--)
    {
        cin>>t;
        s.insert(t);
    }
    findKey(s);
}
