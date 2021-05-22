/* author : @akash kumar */


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define pb push_back
#define MAX_SIZE 100

void solve1(int pos,int n,int open,int close)
{
	static char str[MAX_SIZE];
	if(close==n)
	{
		cout<<str<<"\n";
		return;
	}
	else
	{
		if(open>close)
		{
			str[pos]=')';
			solve1(pos+1,n,open,close+1);
		}
		if(open<n)
		{
			str[pos]='(';
			solve1(pos+1,n,open+1,close);
		}
	}
}

void solve(int n)
{
	if(n>0)
	{
		solve1(0,n,0,0);
	}
	return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    solve(n);
    cout<<"\n";
	return 0;
}
