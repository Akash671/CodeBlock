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
    int t;
    cin>>t;
    int a[n];
    for(int i=0;i<n;++i)
    {
    	cin>>a[i];
    }
    vector<int>v;
    for(int i=0;i<n-2;++i)
    {
    	for(int j=i+1;j<n-1;++j)
    	{
    		//-1 2 1 4
    		//-1+2+1=2
    		//-1+1+4=4
    		//-1+2+4=5
    		//2+1+4=7
    		for(int k=j+1;k<n;++k)
    		{
    			v.pb(a[i]+a[j]+a[k]);
    		}
    	}
    }
    
   // cout<<"\n";
    int mn=100000;
    for(auto i:v)
    {
        mn=min(mn,abs(i-t));
    }
    for(auto i:v)
    {
    	if(abs(i-t)==mn)
    	{
    		cout<<i;
    		break;
    	}
    }
    //cout<<mn;
    //int mn=*min_element(b.begin(),b.end());
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
