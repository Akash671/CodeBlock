/* author : @akash */


/* 
problem is:-


Take N (number in binary format). Write a function that converts it to decimal format and Print the value returned.
Input Format

Constraints

0 < N <= 1000000000
Output Format

Sample Input

101010

Sample Output

42

Explanation

For binary number fedcba , Decimal number = f * 25 + e * 24 + d * 23 + …..+ a * 20.

*/


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mod 1000000007
#define ld long double


void solve()
{
   ll n;
   cin>>n;
   ll base=1;
   ll d=0;
   ll r;
   while(n)
   {
   	r=n%10;
   	d+=base*r;
   	n=n/10;
   	base*=2;
   }
   cout<<d;
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

// time complexity of this algorithm is : T(n)=O(len(n))
