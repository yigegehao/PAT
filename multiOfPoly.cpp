#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

void input(vector<int>& x,vector<int>& z)
{
    int n,xs,zs;
    cin>>n;
    while(n--)
    {
        cin>>xs>>zs;
        x.push_back(xs);
        z.push_back(zs);
    }
}

void getMutilResult(const vector<int>& x,const vector<int>& x1,const vector<int>& z,const vector<int>& z1,map<int,int,greater<int>>& m)
{
      for(int i=0;i<x.size();i++)
        for(int j=0;j<x1.size();j++)
        {
            if(m.find(z[i]+z1[j])==m.end())
                m.insert(pair<int,int>(z[i]+z1[j],x[i]*x1[j]));
            else
                m[z[i]+z1[j]]+=x[i]*x1[j];
        }
}

void getSum(const vector<int>& x,const vector<int>& x1,const vector<int>& z,const vector<int>& z1,map<int,int,greater<int>>& m1)
{
    for(int i=0;i<x.size();i++)
            m1.insert(pair<int,int>(z[i],x[i]));
    for(int j=0;j<x1.size();j++)
    {
        if(m1.find(z1[j])==m1.end())
            m1.insert(pair<int,int>(z1[j],x1[j]));
        else
            m1[z1[j]]+=x1[j];
    }
}

int main()
{
    vector<int> x,x1;
    vector<int> z,z1;
    map<int,int,greater<int>> m,m1;
    input(x,z);
    input(x1,z1);
    //getMutilResult(x,x1,z,z1,m);
    getSum(x,x1,z,z1,m1);
    for(auto a:m1)
        cout<<a.first<<" "<<a.second<<endl;
}
