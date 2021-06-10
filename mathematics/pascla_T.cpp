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
   for(int i=1;i<=n;++i)
   {
   	int c=1;
   	for(int j=1;j<=i;++j)
   	{
   		cout<<c<<" ";
   		c=c*(i-j)/j;
   	}
   	cout<<"\n";
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
