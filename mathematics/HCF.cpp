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
    int a[n];
    for(int i=0;i<n;++i)
    {
    	cin>>a[i];
    }
    int GCD=a[0];
    for(int i=1;i<n;++i)
    {
    	GCD=__gcd(GCD,a[i]);
    }
    cout<<GCD;
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
