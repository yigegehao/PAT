#include<iostream>
#include<vector>

using namespace std;

void deal(string A,int B)
{
    if(A.size()==1)
    {
         cout<<(A[0]-'0')/B<<" "<<(A[0]-'0')%B<<endl;
         return;
    }

    vector<int> v;
    int t,Q,R,left=0;
    for(int i=0;i<A.size();i++)
    {
            t=A[i]-'0'+left;
            v.push_back(t/B);
            if(i==A.size()-1)
                left=t%B;
            else
                left=(t%B)*10;
    }
    for(int j=0;j<v.size();j++)
    {
        if(j==0&&v[0]==0)
            ;
        else
            cout<<v[j];
    }
    cout<<" "<<left<<endl;
}
int main()
{
    string A;
    int B;
    cin>>A>>B;
    deal(A,B);
}
