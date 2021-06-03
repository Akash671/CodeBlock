/* author : @akash kumar */


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define pb push_back
#define ld long double

void solve()
{
 ll t;
 cin>>t;
 while(t--)  	
 {
 	ll n;
 	cin>>n;
 	//ll ans=0;
 	//n=1
 	//-1=-1
 	//n=2
 	//-1 2=1
 	//n=3
 	//-1 2 -3=-2
 	//n=4
 	//-1 2 -3 4=2
 	//n=5
 	//-1 2 -3 4 -5=-3
 	//n=6
 	//-1 2 -3 4 -5 6=3
 	if(n%2==0)
 	{
 		cout<<n/2<<"\n";
 	}
 	else
 	{
 		cout<<-(n+1)/2<<"\n";
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
