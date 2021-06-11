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
   int heap[n];
   for(int i=1;i<=n;++i)
   {
   	cin>>heap[i];
   }
   if(n%2==0)
   {
   	cout<<heap[n/2]<<" "<<heap[n/2+1];
   }
   else
   {
   	cout<<heap[(n+1)/2];
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
