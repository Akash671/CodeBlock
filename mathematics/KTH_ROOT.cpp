/* author : @akash */


/* 
problem is:-


You are given two integers n and k. Find the greatest integer x, such that, x^k <= n.
Input Format

First line contains number of test cases, T. Next T lines contains integers, n and k.
Constraints

1<=T<=10
1<=N<=10^15
1<=K<=10^4
Output Format

Output the integer x
Sample Input

2
10000 1
1000000000000000 10

Sample Output

10000
31

Explanation

For the first test case, for x=10000, 10000^1=10000=n

*/


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mod 1000000007
#define ld long double


bool evenOdd(int n)
{
	if(n%2==0)
	{
		return true;
	}
	return false;
}

int reverse(int n)
{
	int rev=0;
	int r;
	while(n)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	return rev;
}

bool palndrome(int n)
{
    if(n==reverse(n))
    {
    	return true;
    }
    return false;
}

bool isPrime(int n)
{
	// Corner cases
	    if (n <= 1)
	        return false;
	    if (n <= 3)
	        return true;
	  
	    // This is checked so that we can skip
	    // middle five numbers in below loop
	    if (n % 2 == 0 || n % 3 == 0)
	        return false;
	  
	    for (int i = 5; i * i <= n; i = i + 6)
	        if (n % i == 0 || n % (i + 2) == 0)
	            return false;
	  
	    return true;
}

void solve()
{
   ll n;
   int k;
   cin>>n>>k;
   // 64 4
   if(k==1)
   {
   	cout<<n;
   }
   else if(n==k)
   {
   	//10 10
   	cout<<1;
   }
   else
   {
   	//100 10
   	//64 2
   	for(ll i=2;i<=sqrt(n);++i)
   	{
   		if(pow(i,k)==n)
   		{
   			cout<<i;
   			break;
   		}
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
            cout<<"\n";	    
	}
	return 0;
}

// time complexity of this algorithm is : T(n)=O()
