/*. Modify the program of Programming Project 2 so that it prompts the user to enter the radius of the sphere.*/
#include <stdio.h>
#define PI 3.14159f

int main(void) {
    float r;
    printf("Enter radius: ");
    scanf("%f", &r);
    float volume = (4.0f / 3.0f) *PI * r * r * r;
    printf("%.2f\n", volume);
    return 0;
}
