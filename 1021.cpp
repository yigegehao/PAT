#include<iostream>
#include<map>

using namespace std;

void deal(string s)
{
    map<char,int> m;
    for(int i=0;i<s.size();i++)
    {
        if(m.find(s[i])!=m.end())
            m[s[i]]++;
        else
            m.insert(pair<char,int>(s[i],1));
    }
    for(auto a:m)
        cout<<a.first<<":"<<a.second<<endl;
}
int main()
{
    string s;
    cin>>s;
    deal(s);
}
