/*
7. Write a program that asks the user to enter a U.S. Dollar amount and then shows 
how to pay that amount using the smallest number of $20, $10, $5, and $1 bills:
----------------------------------------------------------------------------------
Enter a dollar amount: 93

$20 bills: 4
$10 bills: 1
$5 bills: 0
$1 bills: 3
----------------------------------------------------------------------------------
Hint: divide the amount by 20 to determine the number of $20 bills needed, and then 
reduce the amount by the total value of the $20 bills. Repeat for the other bill sized. 
Be sure to use integer values throughout, not floating-point numbers.
*/

#include <stdio.h>
int main(void) {
    int x;
    int dummy = 0;
    int dollars[] = {20, 10, 5, 1};
    int length = 4;
    printf("Enter a dollar amount: ");
    scanf("%d",&x);
    for (int i = 0; i < length; i++) {
        if (x/dollars[i]!=0) {
            dummy = x/dollars[i];
            x-=dummy*dollars[i];
            printf("$%d bills: %d\n", dollars[i], dummy);
        }
        else {
            printf("$%d bills: 0\n", dollars[i]);
        }
    }
    return 0;
}

/*
First I decided to solve this problem in Python because I wanted to see how to approach it
(and check if I havent forgotten Python skills AND I DIDNT!! This problem is not hard but
I was just happy by how fast I solved it)

7.py

x = int(input())
dollars = [20, 10, 5, 1]
dummy = 0
for i in range (len(dollars)):
    if x//dollars[i]!=0:
        dummy = x//dollars[i]
        x-=dummy*dollars[i]
        print(f"${dollars[i]} bills: {dummy}")
    else:
        print(f"${dollars[i]} bills: 0")

*/
