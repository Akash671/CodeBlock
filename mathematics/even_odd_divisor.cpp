/* author : @akash */

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mod 1000000007
#define ld long double


void solve()
{
   int q;
   cin>>q;
   for(int i=0;i<q;++i)
   {
   	int n;
   	cin>>n;
   	int oddSum=1;
   	int evenSum=0;
   	for(int ii=2;ii<=n;++ii)
   	{
   		if(n%ii==0 && ii%2==0)
   		{
   			evenSum+=ii;
   		}
   		else if(n%ii==0 && ii%2!=0)
   		{
   			oddSum+=ii;
   		}
   		else
   		{
   			continue;
   		}
   	}
   	 cout<<evenSum-oddSum<<"\n";
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
