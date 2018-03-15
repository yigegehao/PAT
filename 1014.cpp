#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

void printWeek(char d)
{
    switch(d-'A')
    {
        case 0:cout<<"MON"<<" ";break;
        case 1:cout<<"TUE"<<" ";break;
        case 2:cout<<"WED"<<" ";break;
        case 3:cout<<"THU"<<" ";break;
        case 4:cout<<"FRI"<<" ";break;
        case 5:cout<<"SAT"<<" ";break;
        case 6:cout<<"SUM"<<" ";break;
    }
}
void printHour(char h)
{
    int c;
    if(h>='A'&&h<='Z')
        c=h-'A'+10;
    else if(h=='0')
        c=0;
    else
        c=h-'0';
    cout<<c;
}
void printMinute(string c,string d)
{
    int count=0;
    for(int i=0;i<c.size();i++)
    {
        if((c[i]>='a'&&c[i]<='z')||(c[i]>='A'&&c[i]<='Z'))
        {
            if(count==d.find_first_of(c[i]))
                break;
        }
        count++;
    }
    if(count<10)
        cout<<":0"<<count<<endl;
    else
        cout<<":"<<count<<endl;
}
void deal(string a,string b,string c,string d)
{
    int tag1=0,
        tag2=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]>='A'&&a[i]<='Z')
        {
            if(b[i]==a[i]&&tag1!=-1)
            {
                tag1=-1;
                printWeek(a[i]);
            }
            else if(b[i]==a[i])
            {
                printHour(a[i]);
                break;
            }
        }
    }
    printMinute(c,d);
}
int main()
{
    string a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a.size()>b.size())
        swap(a,b);
    if(c.size()>d.size())
        swap(c,d);
    deal(a,b,c,d);
    return 0;
}
