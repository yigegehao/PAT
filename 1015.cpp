#include<iostream>
#include<map>
#include<vector>

using namespace std;


int main()
{
    int N,L,H;
    cin>>N>>L>>H;
    int l,h;
    string stuId;
    map<string,vector<int>> m;
    map<string,int> dc;
    map<string,int> dsc;
    map<string,int> dsc2;
    map<string,int> left;
    while(N--)
    {
        cin>>stuId>>l>>h;

        if(l>=L&&h>=L)
        {
            vector<int> v;
            v.push_back(l);
            v.push_back(h);
            m.insert(pair<string,vector<int>>(stuId,v));

            if(l>=H&&h>=H)
            {
                dc.insert(pair<string,int>(stuId,l+h));
            }
            else if(h>=L&&h<H&&l>=H)
            {
                dsc.insert(pair<string,int>(stuId,l+h));
            }
            else if(h>=L&&h<H&&h<H&&h>=L&&l>h)
            {
                dsc2.insert(pair<string,int>(stuId,l+h));
            }
            else
            {
                left.insert(pair<string,int>(stuId,l+h));
            }
        }

    }
}
