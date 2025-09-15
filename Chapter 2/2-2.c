/*2. Write a program that computes the volume of a sphere with a 10-meter radius, using the formula v = 4/3πr^3. 
Write the fraction 4/3 as 4.0f/3.0f (Try writing it as 4/3. What happens?) 
Hint: C doesn't have an exponentiation operator, so you'll need to multiply r by itself twice to compute r^3.*/

#include <stdio.h>
#include <math.h>
#define USE_MATH_DEFINES

int main(void) {
    float r = 10.0f;
    float volume = (4.0f / 3.0f) *M_PI * r * r * r;
    printf("%.2f\n", volume);
    return 0;
}
