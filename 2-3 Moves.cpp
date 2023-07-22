#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x=0,cnt=0,ans=0;
        cin>>n;
        if(n==1)
        {
            cout<<"2"<<endl;
        }
        else if(n%3==0)
        {
            cout<<n/3<<endl;
            continue;
        }
        else if(n>1)
        {
            //if(n%2==0)
            {
                ans = n/3;
                if(n%3!=0)
                {
                    ans++;
                }
            }

            cout<<ans<<endl;
        }


    }
}
