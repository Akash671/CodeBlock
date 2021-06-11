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
   char a[n][n];
   for(int i=1;i<=n;++i)
   {
   	for(int j=1;j<=n;++j)
   	{
   		cin>>a[i][j];
   	}
   }
   int s1,s2;
   cin>>s1>>s2;
   int d1,d2;
   cin>>d1>>d2;
   /*logic here */
   cout<<d1-s1;
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
