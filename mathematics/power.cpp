/* author : @akash */

/*
problme is :

Input two numbers a and b . We need to calculate a power b. Both the numbers are integers.
Input Format

2 3
Constraints

Output Format

8

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
   int a;
   int b;
   cin>>a>>b;
   cout<<pow(a,b);
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

// time complexity is 
