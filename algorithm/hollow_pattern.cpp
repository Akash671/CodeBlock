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
   int m=2*n-1;
   for(int i=1;i<=m;++i)
   {
   	if(i==1)
   	{
   		for(int j=1;j<=m;++j)
   		{
   			cout<<"*";
   		}
   	}
   	else if(i<m)
   	{
   		
   	}
   	else
   	{
   		for(int j=1;j<=m;++j)
   		{
   			cout<<"*";
   		}
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
