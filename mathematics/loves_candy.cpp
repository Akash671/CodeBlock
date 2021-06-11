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


// A optimized school method based C++ program to check
// if a number is prime
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
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
   
   int n;
   cin>>n;
   int ans;
   int c=0;
   for(int i=2;;++i)
   {
   	 if(isPrime(i) && c<n)
   	 {
   	 	ans=i;
   	 	c++;
   	 	//break;
   	 }
   	 if(c>=n)
   	 {
   	 	break;
   	 }
   }
   cout<<ans;
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
