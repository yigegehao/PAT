#include<iostream>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;

typedef pair<string,vector<int>> PAIR;

bool cmp_by_value(const PAIR& lhs, const PAIR& rhs) {
    int a,b;
    if((a=lhs.second[0]+lhs.second[1])!=(b=rhs.second[0]+rhs.second[1]))
        return a > b;
    else if(lhs.second[0]>rhs.second[0])
        return lhs.second[0]>rhs.second[0];
    else
        return lhs.first<rhs.first;
}

void print(map<string,vector<int>> m)
{
    vector<PAIR> v(m.begin(), m.end());
    sort(v.begin(),v.end(),cmp_by_value);
    for(auto a:v)
        cout<<a.first<<" "<<a.second[0]<<" "<<a.second[1]<<endl;
}

void input(int N,int L,int H)
{
    int l,h,length;
    string stuId;
    map<string,vector<int>> dc;
    map<string,vector<int>> dsc;
    map<string,vector<int>> dsc2;
    map<string,vector<int>> left;
    while(N--)
    {
        cin>>stuId>>l>>h;
        if(l>=L&&h>=L)
        {

            vector<int> v;
            v.push_back(l);
            v.push_back(h);

            if(l>=H&&h>=H)
            {
                dc.insert(pair<string,vector<int>>(stuId,v));
            }
            else if(h<H&&l>=H)
            {
                dsc.insert(pair<string,vector<int>>(stuId,v));
            }
            else if(l<H&&l>h)
            {
                dsc2.insert(pair<string,vector<int>>(stuId,v));
            }
            else
            {
                left.insert(pair<string,vector<int>>(stuId,v));
            }
        }

    }
    length=dc.size()+dsc.size()+dsc2.size()+left.size();
    cout<<length<<endl;
    print(dc);
    print(dsc);
    print(dsc2);
    print(left);
}
int main()
{
    int N,L,H;
    cin>>N>>L>>H;
    input(N,L,H);
}
