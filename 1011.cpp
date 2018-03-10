#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main()
{

    int n;
    vector<vector<int>> v;
    long long a,b,c;
    cin>>n;
    while(n--)
    {
        vector<int> t;
        cin>>a>>b>>c;
        t.push_back(a);
        t.push_back(b);
        t.push_back(c);
        v.push_back(t);
    }
    for(int i=0;i<v.size();i++)
    {
        if(v[i][0]+v[i][1]>v[i][2])
            cout<<"Case #"<<i+1<<": "<<"true"<<endl;
        else
            cout<<"Case #"<<i+1<<": "<<"false"<<endl;
    }

}
