#include <bits/stdc++.h>

#define ll long long

#define en "\n"

using namespace std;

ll mod=1000000007;

int main()

{

    cin.tie(NULL);

    ll t;

    cin>>t;

    while(t--)

    {

        int n;

        cin>>n;

        ll a[n+1] = {0}, s[n+1] = {0};

        for(int i=1; i<=n; i++)

        {

            cin>>a[i];

            s[i]=s[i-1]+a[i];

        }

        int q;

        cin>>q;

        for(int i=0; i<q; i++)

        {

            int l,r;

            cin>>l>>r;

            ll sum = s[r]-s[l-1];

            cout<<sum<<en;

        }

    }

}
