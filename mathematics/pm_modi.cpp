/* author : @akash kumar */

//problem is:
/*


PMO gives two random numbers a & b to the Prime Minister. PM Modi wants to visit all countries between a and b (inclusive) , However due to shortage of time he can't visit each and every country , So PM Modi decides to visit only those countries,for which country number has two divisors. So your task is to find number of countries Mr. Modi will visit.

Input Format

The first line contains N , no of test cases. The next N lines contain two integers a and b denoting the range of country numbers.
Constraints

a<=1000000 & b<=1000000.
N<=1000
Output Format

Output contains N lines each containing an answer for the test case.
Sample Input

2
1 10
11 20

Sample Output

4
4

Explanation

PM Modi chooses countries with numbers 2,3,5 and 7 for the first testcase.
For the second testcase , he chooses countries with numbers 11,13,17 and 19.

 */

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define pb push_back
#define ld long double

void solve()
{
   ll t;
   cin>>t;
   while(t--)  	
   {
   	ll a;
   	ll b;
   	cin>>a>>b;
   	ll visit=0;
    if(a<=2)
    {
    	a=2;
    	if(b>=2)
    	{
    		visit++;
    	}
    }

    if(a%2==0)
    {
    	a++;
    }
    for(ll i=a;i<=b;i=i+2)
    {
    	bool flag=1;
    	for(ll j=2;j*j<=i;++j)
    	{
    		if(i%j==0)
    		{
    			flag=0;
    			break;
    		}
    	}
    	if(flag)
    	{
    		visit++;
    	}
    }
   	cout<<visit<<"\n";
   }
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
