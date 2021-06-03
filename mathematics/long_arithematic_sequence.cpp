/* author : @akash */


/* 
problem is:-

*/


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
    int c=2;
    vector<int>v;
    for(int i=1;i<n;++i)
    {
    	if(a[i-1]-a[i]==a[i]-a[i+1])
    	{
    		c++;
    	}
    	else
    	{
    		v.pb(c);
    		c=2;
    	}
    }
    cout<<*max_element(v.begin(),v.end());
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
            solve();
            cout<<"\n";	    
	}
	return 0;
}

// time complexity of this algorithm is : T(n)=O(n)
