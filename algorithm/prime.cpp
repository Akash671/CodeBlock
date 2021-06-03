/* author : @akash */

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mod 1000000007
#define ld long double


int prime(int n)
{
	for(int i=2;i<=n/2;++i)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}

void solve()
{
    int n;
    cin>>n;
    if(prime(n))
    {
    	cout<<"Prime";
    }
    else
    {
    	cout<<"Not Prime";
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
