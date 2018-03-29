#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<iomanip>

using namespace std;

void input(vector<int>& v,int N)
{
    int t;
    while(N--)
    {
        cin>>t;
        v.push_back(t);
    }
}
float getMaxVal(vector<pair<int,int>> v,int D)
{
   int maxWeight=0;
   float value=0;
   for(auto a:v)
   {
       if(a.first>=D&&v[0]==a)
            return float(a.second)/a.first*D;
       else
       {
           if((D-maxWeight)>=a.first)
           {
               maxWeight+=a.first;
               value+=a.second;
           }
           else
           {
               value+=float(a.second)/a.first*(D-maxWeight);
               return value;
           }
       }

   }
}
bool sortAve(pair<int,int> m,pair<int,int> n)
{
    return float(m.second)/m.first>float(n.second)/n.first;
}
int main()
{
    map<int,int> m;
    vector<int> v1;
    vector<int> v2;


    int N,D;
    cin>>N>>D;
    input(v1,N);
    input(v2,N);
    for(int i=0;i<v1.size();i++)
    {
        m.insert(pair<int,int>(v1[i],v2[i]));
    }
    vector<pair<int,int>> v(m.begin(),m.end());
    sort(v.begin(),v.end(),sortAve);
    cout<<fixed<<setprecision(2)<<getMaxVal(v,D);
}
