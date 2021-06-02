/* author : @akash */

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mod 1000000007
#define ld long double


void solve()
{ 
   int ans=0;
   while(1)
   {
   	  int n;
   	  cin>>n;
   	  ans+=n;
   	  if(ans>=0)
   	  {
   	  	cout<<n<<"\n";
   	  }
   	  else
   	  {
   	  	break;
   	  }
   }
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    solve();
   // cout<<"\n";	    
	return 0;
}
