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
   for(int i=1;i<=n;++i)
   {
   	for(int j=1;j<=i;++j)
   	{
   	   if(i<=3)
   	   {
   	   	cout<<1;
   	   }
   	   else
   	   {
   	   	if(i%2==0)
   	   	{
   	   		if(j==1 || i==j)
   	   		{
   	   			cout<<1;
   	   		}
   	   		else
   	   		{
   	   			cout<<0;
   	   		}
   	   	}
   	   	else
   	   	{
   	   		cout<<1;
   	   	}
   	   }
   	}
   	cout<<"\n";
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
