/*
Write a program that reads an integer entered by the user and displays it in octal (base 8):

Enter a number between 0 and 32767: 1953
In octal, your number is: 03641
The output should be displayed using five digits, even if fewer digits are sufficient.
Hint: To convert the number to octal, first divide it by 8; the remainder is the last digit of the octal number (1, in this case).
Then divide the original number by 8 and repeat the process to arrive at the next-to-last digit.
(printf is capable of displaying numbers in base 8, as we'll see in Chapter 7, so there's actually an easier way to write this program.)
*/

/* while thinking on this problem, i realized that i might need recursion to solve it
     * i deliberately didn't solve it in an easy way. i see that i need to keep dividing my number by 8,
     * therefore i will get 1463 in the case of input 1953. however, i need to print it out backwards, right?
     * and then recursion!!! popped up in my mind so i will try and implement it in this problem*/

#include <stdio.h>
void to_octal (int num) {
    if (num >0) { // base 0, stop when it is 0
        to_octal(num/8); // keep dividing by 8
        printf("%d", num%8); // then go up and print out the remainder * 8 (to get the octal num)
    }
}

int main(void) {
    int num, count = 0, temp;
    printf("Enter a number between 0 and 32767: ");
    scanf("%5d", &num);
    temp = num;

    //the problem wants the output to be in 5 digits
    while (temp>0) {
        temp/=8;
        count++;
    }

    for (int i = 0; i < (5 - count); i++) {
        printf("0");
    }
    to_octal(num);
    }
