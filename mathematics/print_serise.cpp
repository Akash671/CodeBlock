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
   int m;
   cin>>n;
   cin>>m;
   int ans;
   int c=0;
   for(int i=1;;++i)
   {
    int ans=3*i+2;
   	if((ans)%m!=0 && c<=n)
   	{
   		cout<<ans<<"\n";
   		c++;
   	}
   	if(c>=n)
   	{
   		break;
   	}
   }
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    solve();
    //cout<<"\n";	    
	return 0;
}
