#include <bits/stdc++.h>
using namespace std;

int main()
{

    int p, j;

    int row, lines, element, term;

    //cout << "Enter Number of Rows in Pascal Triangle:"; 

    cin >> lines;   

    int fact (int);

    for (row = 0; row < lines; row++)
    {

        for (j = 0; j <= (lines - row - 2); j++)

        cout << " ";

        for (element = 0; element <= row; element++)
        {

            p = row - element;

            term = fact (row)/ (fact (element)* fact (p));

            cout << " " << term;

        }

        cout << "\n";

    }

  // getch ();

    return 0;

}

/* Factorial Function */

int fact (int x)
{

    if (x == 1 || x == 0)
    {

        return 1;

    }
    else
    {

        return (x * fact(x-1));

    }

}
