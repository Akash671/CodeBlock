/* author : @akash kumar */


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define pb push_back

int main()
{
	ll n;
	cin>>n;
	vector<ll>a(n);
	for(ll i=0;i<n;++i)
	{
		cin>>a[i];
	}
	//30
	//35
	//40
	//38
	//35
	ll tmp;
	ll d=1;
	for(ll i=0;i<n;++i)
	{
		if(i==0)
		{
			cout<<1<<" ";
			//d=1;
			tmp=a[i];
		}
		else
		{
		    
			if(a[i]>=tmp)
			{
			    d+=1;
				cout<<d<<" ";
				tmp=a[i];
			}
			else
			{
				d=1;
				cout<<d<<" ";
				tmp=a[i];
			}
		}
		//cout<<"END";
	}
	cout<<"END";
	return 0;
}
