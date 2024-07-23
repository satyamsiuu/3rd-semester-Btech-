/*
Q2b)using recursion calculate factorial of a number
*/
#include <stdio.h>

double fac(int n);

int main() {
    int n;
    scanf("%d", &n);
    printf("%lf\n", fac(n));
    return 0;
}

double fac(int n) {
    if (n == 0 || n == 1)
        return 1.0;
    else
        return n * fac(n - 1);
}
