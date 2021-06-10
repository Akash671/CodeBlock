/* author : @akash */

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mod 1000000007
#define ld long double


void solve()
{
   ll n;
   ll p;
   cin>>n;
   cin>>p;
   float ans=sqrt(n);
   cout<<ans<<"\n";
   if(p==1)
   {
      printf(".%1f",ans);
   }
   else if(p==2)
   {
   	printf(".%2f",ans);
   }
   else if(p==3)
   {
   	printf("%.3f",ans);
   }
   else
   {
   	printf("%.4f",ans);
   }
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    solve();
    cout<<"\n";	    
	return 0;
}
