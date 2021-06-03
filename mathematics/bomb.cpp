/* author : @akash kumar 


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define pb push_back
#define ld long double

void solve()
{
   int t;
   cin>>t;
   while(t--)	
   {
   	ll n;
   	cin>>n;
   	ll a[n];
   	for(ll i=0;i<n;++i)
   	{
   		cin>>a[i];
   	}
   	ll b[n];
   	for(ll i=0;i<n;++i)
   	{
   		cin>>b[i];
   	}
   	ll ans=0;
   	for(ll i=0;i<n-1;++i)
   	{
   		for(ll j=i+1;j<n;++j)
   		{
   			ans+=abs(a[i]-a[j])*max(b[i],b[j]);
   		}
   	}
   	cout<<ans%mod;
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

// running time O(n^2)

/*
input:
1
3  
1 3 6  
10 20 30

output:
280
*/


#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long n,sum=0;
        cin>>n;
        long long  a[n],b[n];
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        for(int j=0;j<n;j++){
            cin>>b[j];
        }
        for(int j=0;j<n-1;j++){
            sum+=abs((a[j+1]-a[j])*max(b[j+1],b[j]));
        }
        sum+=abs((a[0]-a[n-1])*max(b[0],b[n-1]));        
        cout<<sum<<endl;
    }    
}
