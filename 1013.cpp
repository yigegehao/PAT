#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

void deal(int m,int n)
{
    vector<int> v;
    int count=0;
    int t=2;
    int flag=1;
    while(true)
    {
        for(int i=2;i<=sqrt(t);i++)
        {
            if(t%i==0)
            {
                flag=0;
                break;
            }

        }
        if(t==2||t==3||flag==1)
        {
            count++;
            if(count>=m&&count<=n)
                //cout<<t<<' ';
                v.push_back(t);
        }
        t++;
        flag=1; //ÖØÖÃ
        if(count>n)
            break;
    }
    int j=0;
    for(auto a:v)
    {
        j++;
        if(j%10==0||a==*(v.end()-1))
            cout<<a<<endl;
        else
            cout<<a<<" ";
    }

}
int main()
{
    int m,n;
    cin>>m>>n;
    deal(m,n);
}
