#include<bits/stdc++.h>
#define en "\n"
using namespace std;
int main()
{
    int n;
   cin>>n;
   int a[n+1];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   int s[n+1];
   s[0]=a[0];
   for(int i=1;i<n;i++){
    s[i]=s[i-1]+a[i];
   }
   int q;
   cin>>q;
   while(q--){
        int l,r;
   cin>>l>>r;
    if(l==0)cout<<s[r]<<en;
    else cout<<s[r]-s[l-1]<<endl;
   }
}
