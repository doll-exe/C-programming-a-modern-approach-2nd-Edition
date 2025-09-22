/*Write a program that asks the user to enter the numbers from 1 to 16 (in any order)
and then displays the numbers in a 4 by 4 arrangement,
followed by the sums of the rows, columns, and diagonals:
-----------------------------------------------------------------------------------
Enter the numbers from 1 to 16 in any order:
16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1

16  3  2 13
 5 10 11  8
 9  6  7 12
 4 15 14  1

Row sums: 34 34 34 34
Column sums: 34 34 34 34
Diagonal sums: 34 34
-----------------------------------------------------------------------------------
If the row, column, and diagonal sums are all the same (as they are in this example),
the numbers are said to form a magic square. The magic square shown here appears in a
1514 engraving by artist and mathematician Albrecht Dürer.
(Note that the middle numbers in the last row give the date of engraving.)*/


#include <stdio.h>
int main(void) {
    int numbers[16], sum = 0, counter = 0;
    printf("Enter the numbers from 1 to 16 in any order: ");
    for (int i = 0; i < 16; i++) {
        scanf("%d", &numbers[i]);
        printf("%d ", numbers[i]);
        if ((i+1) % 4 == 0) {
            printf("\n");
        }
    }
  
    printf("Row sums: ");
    for (int i = 0; i < 16; i++) {
        sum+=numbers[i];
        if ((i+1)%4==0) {
            printf("%d ", sum);
            sum = 0;
        }
    }
    printf("\n");

    printf("Column sums: ");
    for (int col = 0; col < 4; col++) {
        sum = 0; // resetting here before going
        for (int row = 0; row < 16; row+=4) {
            sum+=numbers[row+col];
        }
        printf("%d ", sum);
    }
    sum = 0;
    printf("\n");
  
    printf("Diagonal sums: ");
    for (int idx = 0; idx < 16; idx+=5) {
        sum += numbers[idx];
    }
    printf("%d ", sum);
    sum = 0;

    for (int idx = 12; idx >= 3; idx -= 3) {
        sum += numbers[idx];
    }
    printf("%d ", sum);
    /*sum = 0;
    for (int row = 16; row > 0; row-=4) {
        sum+=numbers[counter];
        counter++; - bro this is the first version of the above for block
        and wtf is this *skull emoji*
    }*/
}
