/* author : @akash */

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mod 1000000007
#define ld long double


void solve()
{
   int n;
   cin>>n;
   int ans=0;
   for(int i=5;n/i>=1;i*=5)
   {
   	ans+=n/i;
   }
   cout<<ans;
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
