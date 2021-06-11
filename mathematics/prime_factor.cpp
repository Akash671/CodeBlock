// C++ program to print all prime factors
#include <bits/stdc++.h>
using namespace std;

// A function to print all prime
// factors of a given number n
int primeFactors(int n)
{
	// Print the number of 2s that divide n
	int ans=0;
	while (n % 2 == 0)
	{
		//cout << 2 << " ";
		ans+=2;
		n = n/2;
	}

	// n must be odd at this point. So we can skip
	// one element (Note i = i +2)
	for (int i = 3; i <= sqrt(n); i = i + 2)
	{
		// While i divides n, print i and divide n
		while (n % i == 0)
		{
			//cout << i << " ";
			ans+=i;
			n = n/i;
		}
	}

	// This condition is to handle the case when n
	// is a prime number greater than 2
	if (n > 2)
		ans+=n;
	return ans;
}

/* Driver code */
int main()
{
	int n;
	cin>>n;
	int ans=primeFactors(n);
	int s=0;
	while(n)
	{
		int r=n%10;
		s+=r;
		n=n/10;
	}
	if(ans==s)
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
		
	return 0;
}

// This is code is contributed by rathbhupendra
