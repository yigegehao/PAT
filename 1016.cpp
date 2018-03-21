#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>


using namespace std;

int getSum(char a,int count)
{
    int sum1=0;
    for(int i=0;i<count;i++)
    {
        sum1+=pow(10,i)*(a-'0');
    }
    return sum1;
}
void deal(string a,int da,string b,int db)
{
    int sum1=0,sum2=0;
    int countA = count(a.begin(),a.end(),da);
    int countB = count(b.begin(),b.end(),db);
    cout<<getSum(da,countA)+getSum(db,countB)<<endl;
}
int main()
{
    string a,b;
    char da,db;
    cin>>a>>da>>b>>db;
    deal(a,da,b,db);
}
