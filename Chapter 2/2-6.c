/*Modify the program of Programming Project 5 so that the polynomial is evaluated using the following formula:

((((3x+2)x-5)x-1)x+7)x-6

Note that the modified program performs fewer multiplications. This technique for evaluating polnomials is known as Horners' Rule.*/

#include <stdio.h>
int main(void) {
    int x;
    printf("Enter a value for x: ");
    scanf("%d", &x);
    printf("%d\n", ((((3*x+2)*x-5)*x-1)*x+7)*x-6);
    return 0;
}

/*
Efficient way to evaluate polynomials.
Instead of computing powers (x^2, x^3, ...),
it rewrites the polynomial into a nested form:
P(x) = 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 = ((((3x + 2)x - 5)x - 1)x + 7)x - 6
this reduces the number of multiplications and makes evaluation faster.

While Horner's Rule evaluates polynomial in O(n) time, using nested multiply-add steps.
Naive expansion could take O(n^2) which is why Horner's Rule is preffered for large degree polynomials
*/
