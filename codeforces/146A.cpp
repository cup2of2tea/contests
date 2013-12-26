#include <iostream>
using namespace std;

int main()
{
    int n;
    string s;
    cin>>n>>s;
    int tot=0;
    for(int c=0;c<s.size()/2;c++)
        if(s[c]!='4'&&s[c]!='7')
        {
            cout<<"NO";
            return 0;
        }
        else tot+=s[c]-'0';
    for(int c=s.size()/2;c<s.size();c++)
        if(s[c]!='4'&&s[c]!='7')
        {
            cout<<"NO";
            return 0;
        }
        else tot-=s[c]-'0';
    if(tot!=0)
        cout<<"NO";
    else
        cout<<"YES";
}
