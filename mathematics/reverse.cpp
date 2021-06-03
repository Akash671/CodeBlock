/* author : @akash kumar */


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define pb push_back
#define ld long double

void solve()
{
    ll n;
    cin>>n;
    ll rev=0,r;
    while(n)	
    {
    	r=n%10;
    	rev=rev*10+r;
    	n=n/10;
    }
    cout<<rev;
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
