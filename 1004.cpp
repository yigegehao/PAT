#include<iostream>
#include<map>

using namespace std;

int main()
{
    map<int,map<string,string>> stu;
    int n;
    string name;
    string snum;
    int grade;
    cin>>n;
    while(n--)
    {
        cin>>name>>snum>>grade;
        map<string,string> nameAndSnum;
        nameAndSnum.insert(pair<string,string>(name,snum));
        stu.insert(pair<int,map<string,string>>(grade,nameAndSnum));
    }
    map<int,map<string,string>>::iterator t=stu.begin();
    map<int,map<string,string>>::iterator te;
    while(t!=stu.end())
    {
        te=t;
        t++;
        if(t==stu.end())
            cout<<te->second.begin()->first<<" "<<te->second.begin()->second<<endl;
    }
    t=stu.begin();
    cout<<t->second.begin()->first<<" "<<t->second.begin()->second<<endl;

}
