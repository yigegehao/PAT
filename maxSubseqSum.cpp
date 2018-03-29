#include<iostream>
#include<vector>

using namespace std;

int maxSubseqSum(vector<int> v)
{
    int maxVal=0,nowVal=0;
    for(int i=0;i<v.size();i++)
    {
        nowVal+=v[i];
        if(nowVal>maxVal)
            maxVal=nowVal;
        else if(nowVal<0)
            nowVal=0;
    }
    return maxVal;
}
int main()
{
    vector<int> v;
    int n;
    while(cin>>n)
    {
        v.push_back(n);
    }
    cout<<maxSubseqSum(v)<<endl;

}
