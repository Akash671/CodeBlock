/* author : @akash */


/* 
problem is:-


count number of 1s in binary representation of an integer
Input Format

Input N = Number of Test Cases, followed by N numbers
Constraints

Output Format

Number of Set Bits in each number each in a new line
Sample Input

3
5
4
15

Sample Output

2
1
4

Explanation

Convert Binary to Decimal first and then count number of 1's present in all digits.

*/


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mod 1000000007
#define ld long double


int dec_to_bin(int n)
{
    long binary = 0, pow = 1;

    while (n > 0)
    {
        int lastBit = n % 2;
        binary += lastBit * pow;
        pow *= 10;
        n = n / 2;
    }
    return binary;
}

void solve()
{
   int n;
   cin>>n;
   int bin=dec_to_bin(n);
   int count=0;
   while(bin)
   {
   	int r=bin%10;
   	if(r==1)
   	{
   		count++;
   	}
   	bin=bin/10;
   }
   cout<<count;
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
