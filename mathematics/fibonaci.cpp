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
int fib(int n)
{
  int a = 0, b = 1, c, i;
  if( n == 0)
    return a;
  for (i = 2; i <= n; i++)
  {
     c = a + b;
     a = b;
     b = c;
  }
  return b;
}

void solve()
{
    ll n;
    ll m;
    cin>>n>>m;
    
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

// time complexity of this algorithm is : T(n)=O()
