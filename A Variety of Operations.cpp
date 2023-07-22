#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c=0,d=0;
        cin>>c>>d;
        if(abs(c-d) & 1)
        {
            cout<<"-1"<<endl;
            continue;
        }
        if(c==0 && d==0)
        {
            cout<<"0"<<endl;
            continue;
        }
        if(c==d)
        {
            cout<<"1"<<endl;
            continue;
        }

        else
        {
            cout<<"2"<<endl;
            continue;
        }
    }
    return 0;
}
