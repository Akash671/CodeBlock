/* author : @akash kumar */


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define pb push_back

void solve(int n)
{
  //n=1 2 3 4 5......
	//1 2 4 7 11.....
	//1-2=1 n=1
	//2-4=2 n=2
	//4-7=3 n=3
	//7-11=4 n=4
	//11-x=5 n=5
	int ans=1;
	int t;
	int ii=0;
	for(int i=1;i<=n;++i)
	{
	   //
	   ans+=ii;
	   //cout<<ans<<" ";
	   ii++;
	}
	cout<<ans;
	//return -1;
}

int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    solve(n);
	    cout<<"\n";
	}
	return 0;
}
