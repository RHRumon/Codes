#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int len = s.size(),i;
        if(s[0]!=s[len-1])
        {
            s[0] = s[len-1];
        }
        cout<<s<<endl;
    }
}
