/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

void symmetry(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            for (int k = 1; k <= 2 * n - 1; k++)
            {
                if (k == i)
                {
                    if (k % 2 == 0 && k != 1)
                        cout << (2 * n - i - 1) / 2;
                    else
                        cout << (2 * n - i) / 2;
                    break;
                }
                if (k == j)
                {
                    if (k % 2 == 0 && k != 1)
                        cout << (2 * n - j - 1) / 2;
                    else
                        cout << (2 * n - j) / 2;
                    break;
                }
                if (k == 2 * n - i)
                {
                    cout << (i + 1) / 2;
                    break;
                }
                if (k == 2 * n - j)
                {
                    cout << (j + 1) / 2;
                    break;
                }
            }
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    symmetry(n);

    return 0;
}
