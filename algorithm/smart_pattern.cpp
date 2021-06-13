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
   if(n<=1)
      cout<<1<<"\n";
   else if(n==2)
   {
      cout<<1<<"\n";
      cout<<11<<"\n";
   }
   else
   {
   	cout<<1<<"\n";
    cout<<11<<"\n";
    
    for(int i=3;i<=n;++i)
    {
    	if(i%2!=0)
    	{
    	   for(int j=1;j<=i;++j)
    	   {
    	   	cout<<1;
    	   }
    	}
    	else
    	{
    		for(int j=1;j<=i;++j)
    		{
    			if(j==1 || i==j)
    			{
    				cout<<1;
    			}
    			else
    			{
    				cout<<0;
    			}
    		}
    	}
    	cout<<"\n";
    }
   }
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
            //cout<<"\n";	    
	}
	return 0;
}

// time complexity of this algorithm is : T(n)=O()
