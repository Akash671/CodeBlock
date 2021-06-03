/* author : @akash */


/* 
problem is:-


Bob runs a tile shop. He sells only square tiles. He charges $a per unit area and $b per unit length of its side. Moreover, he also charges a constant amount of $c for each tile. He asks you to calculate the total amount he gets after selling exactly one tile of side length x in range [l,r].
Bob knows that his earnings is beyond your calculation, so he asks you to calculate amount modulo (109+7).
Input Format

First line contains number of test cases, T. Each test case contains 5 integers, a, b, c, l, r.
Constraints

1<=T<=10^5 1<=a,b,c,l,r<=10^9
Output Format

Output a single integer denoting answer as per the problem statement.
Sample Input

1
1 1 1 1 10

Sample Output

450


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
   ll a,b,c,l,r;
   cin>>a>>b>>c>>l>>r;
   ll cost=0;
   for(ll i=l;i<=r;++i)
   {
   	cost+=a*i+i*i*b+c;
   }
   cout<<cost;
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

// time complexity of this algorithm is : T(n)=O(n)
