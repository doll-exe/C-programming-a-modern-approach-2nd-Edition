/*
Rewrite the upc.c program of Section 4.1 so that the user enters 11 digits at one time, 
instead of entering one digit, then five digits, and then another five digits.

Enter the first 11 digits of a UPC: 01380015173
Check digit: 5
*/
#include <stdio.h>
int main(void) {
    char upc[12];
    int array [11];
    int sum1,sum2, final;
    printf("Enter the first 11 digits of a UPC: ");
    scanf("%11s", upc);
    for (int i = 0; i < 11; i++) {
        array[i] = upc[i] - '0';
    }
    for (int i = 0; i < 11; i++) {
        if (i%2==0) sum1+=array[i];
        else sum2+=array[i];
    }
    final = 9-(((sum1*3+sum2)-1)%10);
    printf("Check digit: %d", final);
    return 0;
}
