#include <stdio.h>

unsigned long iterateDigit(unsigned short digit)
{
    unsigned long i = 1;
    while(digit--)
        i *= 10;
    return i;
}

int main()
{
    unsigned long input = 12049494938;
    unsigned short digit = 0;
    //scanf("%ld", &input);
    for(unsigned long tmp = input ; tmp > 0 ; digit++)
        tmp/=10; //get digit

    while(digit--)
    {
        printf("%ld", input/iterateDigit(digit)%10);
        puts(" iterated.");
    }
    return 0;
}
