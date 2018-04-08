#include<iostream>
#include<vector>

using namespace std;

void deal(int c,int d)
{
    if(c==0)
    {
        cout<<0<<endl;
        return;
    }
    vector<int> v;
    while(c!=0)
    {
        v.push_back(c%d);
        c=c/d;
    }
    for(int i=v.size()-1;i>=0;i--)
        cout<<v[i];
    cout<<endl;
}
int main()
{
    int A,B,C,D;
    cin>>A>>B>>D;
    C=A+B;
    deal(C,D);
}
