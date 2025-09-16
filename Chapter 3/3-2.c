/*
Write a program that formats product information entered by the user. A session with the program should look like this:

Enter item number: 583
Enter unit price: 13.5
Enter purchase date (mm/dd/yyyy): 10/24/2010

Item            Unit            Purchase
                Price           Date
583             $  13.50        10/24/2010
The item number and date should be left justified; the unit price should be right justified. 
Allow dollar amounts up to $9999.99. Hint: Use tabs to line up the columns.
*/

#include <stdio.h>
int main(void) {
    int number, d, m, y;
    float price;
    printf("Enter item number:");
    scanf("%d",&number);
    printf("Enter unit price:");
    scanf("%f",&price);
    printf("Enter purchase date (mm/dd/yyyy):");
    scanf("%d/%d/%d",&m,&d,&y);
    printf("Item\t Unit\t Purchase\n\t Price\t Date\n");
    printf("%-5d \t",number);
    printf("$%8.2f \t", price);
    printf("%-2d/%-2d/%d",m,d,y);
    return 0;
}
