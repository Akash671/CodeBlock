/* author : @akash kumar */


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define pb push_back

int solve(int n)
{
	if(n==1)
	{
		return 2;
	}
	else if(n==2)
	{
		return 3;
	}
	else
	{
		int a=2;
		int b=3;
		int tmp;
		for(int i=0;i<n-2;++i)
		{
			tmp=a+b;
			a=b;
			b=tmp;
		}
		return tmp;
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)		
    {
    	int n;
    	cin>>n;
    	cout<<solve(n)<<"\n";
    }
	return 0;
}
