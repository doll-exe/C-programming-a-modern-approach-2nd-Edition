/*4. Write a program that asks the user to enter a dollars-and-cents amount, then displays the amount with 5% tax added:

Enter an amount: 100.00

With tax added: $105.00*/
#include <stdio.h>

int main(void) {
    float amount = 0;
    printf("Enter an amount: ");
    scanf("%f", &amount);
    printf("With tax added: $%.2f", amount+(amount*0.05));
}

/* While solving this I was wondering why can't I just write float amount without declaring float = 0
  Turns out it can be done to avoid accidental garbage values */
