/* author : @akash kumar */


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define pb push_back

void solve(int n)
{
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<i+1;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
    	int n;
    	cin>>n;
    	solve(n);
    }
	return 0;
}
