/* author : @akash kumar */


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define pb push_back

int prime(ll n)
{
	if(n==1)
	{
		return 0;
	}
	else if(n==2)
	{
		return 1;
	}
	else
	{
		for(ll i=2;i<=n/2;++i)
		{
			if(n%i==0)
			{
				return 0;
			}
		}
		return 1;
	}
}


void solve(ll n,ll q,vector<ll>v)
{
    vector<ll>a;
    vector<ll>b;
	while(q--)
	{
	for(ll i=0;i<n;++i)
	{
		if(prime(v[i]))
		{
			a.pb(v[i]);
		}
		else
		{
			b.pb(v[i]);
		}
	}
	}
	for(ll i=0;i<b.size();++i)
	{
		cout<<b[i]<<"\n";
	}
	for(ll i=0;i<a.size();i++)
	{
		cout<<a[i]<<"\n";
	}
	
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		ll n,q;
		cin>>n>>q;
		vector<ll>v(n);
		for(ll i=0;i<n;++i)
		{
			cin>>v[i];
		}
		solve(n,q,v);
	}
	return 0;
}
