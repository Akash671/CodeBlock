// C++ Program to print a matrix spirally

#include <bits/stdc++.h>
using namespace std;
#define R 3
#define C 6

void spiralPrint()
{   
    int m;
    int n;
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;++i)
    {
    	for(int j=0;j<n;++j)
    	{
    		cin>>a[i][j];
    	}
    }
	int i, k = 0, l = 0;

	/* k - starting row index
		m - ending row index
		l - starting column index
		n - ending column index
		i - iterator
	*/

	while (k < m && l < n) {
		/* Print the first row from
			the remaining rows */
		for (i = l; i < n; ++i) {
			cout << a[k][i] << ", ";
		}
		k++;

		/* Print the last column
		from the remaining columns */
		for (i = k; i < m; ++i) {
			cout << a[i][n - 1] << ", ";
		}
		n--;

		/* Print the last row from
				the remaining rows */
		if (k < m) {
			for (i = n - 1; i >= l; --i) {
				cout << a[m - 1][i] << ", ";
			}
			m--;
		}

		/* Print the first column from
				the remaining columns */
		if (l < n) {
			for (i = m - 1; i >= k; --i) {
				cout << a[i][l] << ", ";
			}
			l++;
		}
	}
	cout<<"END";
}

/* Driver Code */
int main()
{
	
	spiralPrint();
	return 0;
}

// This is code is contributed by rathbhupendra
