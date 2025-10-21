#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void) {
    int x, n1, n2, n3, n4;
    printf("Enter a dollar amount: ");
    scanf("%d",&x);
    int *twenties = &n1;
    int *tens = &n2;
    int *fives = &n3;
    int *ones = &n4;
    pay_amount(x,twenties,tens,fives,ones);
    printf("$20: %d\n", *twenties);
    printf("$10: %d\n", *tens);
    printf("$5: %d\n", *fives);
    printf("$1: %d\n", *ones);

    return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones) {
    int list_dollars[] = {20, 10, 5, 1};
    int dummy = 0;
    int length = 4;
    for (int i = 0; i < length; i++) {
        if (dollars/list_dollars[i]!=0) {
            dummy = dollars/list_dollars[i];
            dollars-=dummy*list_dollars[i];
            switch (i) {
                case 0:
                    *twenties = dummy;
                    break;

                case 1:
                    *tens = dummy;
                    break;
                case 2:
                    *fives = dummy;
                    break;
                case 3:
                    *ones = dummy;
                    break;
            }
        }
        else {
            switch (i) {
                case 0:
                    *twenties = 0;
                    break;

                case 1:
                    *tens = 0;
                    break;
                case 2:
                    *fives = 0;
                    break;
                case 3:
                    *ones = 0;
                    break;
            }
        }
    }
}
