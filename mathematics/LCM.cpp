/* author : @akash */


/* 
problem is:-


Take the following as input.

A number (N1)
A number (N2)
Write a function which returns the LCM of N1 and N2. Print the value returned.
Input Format

Constraints

0 < N1 < 1000000000 0 < N2 < 1000000000
Output Format

Sample Input

4 
6

Sample Output

12

Explanation

The smallest number that is divisible by both N1 and N2 is called the LCM of N1 and N2.

*/


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mod 1000000007
#define ld long double

void solve()
{
   ll n1,n2;
   cin>>n1>>n2;
   cout<<(n1*n2)/__gcd(n1,n2);
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	cout<<endl;
	return 0;
}

// time complexity of this algorithm is : T(n)=O()
