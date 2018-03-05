#include<iostream>
#include<stack>

using namespace std;

int NumToSum(string n)
{
    int sum=0;
    for(auto a:n)
        sum+=(a-'0');
    return sum;
}
void numToChinese(int n)
{
    stack<string> st;
    if(n==0)
    {
         st.push("ling");
         cout<<st.top();
         return ;
    }
    while(n!=0)
    {
        switch(n%10)
        {
            case 1:
                st.push("yi");
                break;
            case 2:
                st.push("er");
                break;
            case 3:
                st.push("san");
                break;
            case 4:
                st.push("si");
                break;
            case 5:
                st.push("wu");
                break;
            case 6:
                st.push("liu");
                break;
            case 7:
                st.push("qi");
                break;
            case 8:
                st.push("ba");
                break;
            case 9:
                st.push("jiu");
                break;
        }
        st.push(" ");
        n=n/10;
    }
    st.pop();
    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }

}
int main()
{
    string s;
    int n;
    cin>>s;
    n=NumToSum(s);
    numToChinese(n);
    cout<<"******";
}
