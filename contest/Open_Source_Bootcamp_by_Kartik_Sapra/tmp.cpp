// C++ program to demonstrate the use of std::min
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int a = 5;
	int b = 7;
	cout<<min(a, b) << "\n";

	// Returns the first one if both the numbers
	// are same
	cout << std::min(7, 7);

	return 0;
}
