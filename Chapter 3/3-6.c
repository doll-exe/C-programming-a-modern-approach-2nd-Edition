/*
Modify the addfrac.c program of Section 3.2 so that the user enters both fractions at the same time, separated by a plus sign:

Enter two fractions separated by a plus sign: 5/6+3/4
The sum is 38/24
*/
#include <stdio.h>

int main(void) {
    int n1, n2, n3, n4;
    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d", &n1, &n2, &n3, &n4 );
    printf("The sum is ");
    if (n2!=n4) {
        printf("%d/%d", n1*n4+n3*n2, n2*n4);
    }
    else{
        printf("%d/%d", n1+n3, n2);
    }
}
