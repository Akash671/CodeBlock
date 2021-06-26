/* author : @akash */
/*


Using a helper stick (peg), shift all rings from peg A to peg B using peg C.
All rings are initally placed in ascending order, smallest being on top.
No bigger ring can be placed over a smaller ring.
Input Format

Single line input containing a single integer N denoting the no of rings.
Constraints

1 <= N <= 10
Output Format

Print the instructions to move all the rings from peg A to B in a new line each.
Each line should follow format : Moving ring i from A/B/C to A/B/C
Sample Input

4

Sample Output

Moving ring 1 from A to C
Moving ring 2 from A to B
Moving ring 1 from C to B
Moving ring 3 from A to C
Moving ring 1 from B to A
Moving ring 2 from B to C
Moving ring 1 from A to C
Moving ring 4 from A to B
Moving ring 1 from C to B
Moving ring 2 from C to A
Moving ring 1 from B to A
Moving ring 3 from C to B
Moving ring 1 from A to C
Moving ring 2 from A to B
Moving ring 1 from C to B

Explanation

Read Tower of Hanoi

*/
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mod 1000000007
#define ld long double

void HanoiTower(int n,char from_rod,char to_rod,char aux_rod)
{
	if(n==1)
	{
		cout<<"Moving ring 1 from "<<from_rod<<" to "<<to_rod<<"\n";
		return;
	}
	HanoiTower(n-1,from_rod,aux_rod,to_rod);
	cout<<""<<"Moving ring "<<n<<" from "<<from_rod<<" to "<<to_rod<<"\n";
	HanoiTower(n-1,aux_rod,to_rod,from_rod);
}

void solve()
{
  int n;
  cin>>n;
  HanoiTower(n,'A','B','C');
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    solve();
    //cout<<"\n";	    
	return 0;
}
