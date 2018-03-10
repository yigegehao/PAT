#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int a,b;
    vector<int> m,n;
    while(cin>>a&&cin>>b)
    {
        if(a==0&&b==1)
            continue;
        m.push_back(a);
        n.push_back(b);
    }
    for(int i=0;i!=m.size();i++)
    {
        if(m[i]==0&&n[i]==0)
            continue;
        m[i]=m[i]*n[i];
        n[i]=n[i]-1;
    }

    for(auto i:m)
        cout<<i<<" ";
    cout<<endl;
    for(auto i:n)
        cout<<i<<" ";
    cout<<"SSSSSSSSSS"<<endl;
    for(int j=0;j!=m.size();j++)
    {
        if(m[j]==0&&n[j]==0)
        {
            if(j==0)
                cout<<"0 0";
            else
                cout<<" 0 0";
        }
        else if(j==0)
            cout<<m[j]<<" "<<n[j];
        else if(m[j]==0)
            continue;
        else
            cout<<" "<<m[j]<<" "<<n[j];
    }
    //cout<<"***"<<endl;
}
