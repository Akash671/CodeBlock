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
   cin>>n;
   if(n==1 || n==2)
   {
   	cout<<-1;
   }
   else if(n%2==0)
   {
   	ll var=1LL*n*n/4;
   	cout<<var-1<<" "<<var+1;
   }
   else if(n%2!=0)
   {
   	ll var=1LL*n*n+1;
   	cout<<var/2-1<<" "<<var/2;
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
