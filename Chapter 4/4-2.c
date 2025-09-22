/*Extend the program in Programming Project 1 to handle three-digit numbers.*/
#include <stdio.h>
int main (void) {
    int num, n1, n2, mid;
    printf("Enter a three-digit number: ");
    scanf("%3d", &num);
    n1 = num/100;
    n2 = num%10;
    mid = (num/10)%10;
    printf("The reversal is: %d%d%d", n2, mid, n1);
    return 0;
}
