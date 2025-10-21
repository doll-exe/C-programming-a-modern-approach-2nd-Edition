#include <stdio.h>

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main(void) {
    int n;
    scanf("%d", &n);
    int a[n], temp;
    for (int i = 0; i<n; i++)
        scanf("%d", &a[i]);
    int l1 = a[0];
    int l2 = a[1];
    if (l2>l1) {
        temp = l1;
        l1 = l2;
        l2 = temp;
    }
    int *largest = &l1;
    int *second_largest = &l2;
    find_two_largest(a, n, largest, second_largest);
    printf("Largest: %d\n", *largest);
    printf("Second Largest: %d\n", *second_largest);
    return 0;
}

void find_two_largest(int a[], int n, int *largest, int *second_largest) {
    for (int i = 2; i<n; i++) {
        if (a[i]>*largest) {
            *second_largest = *largest;
            *largest = a[i];
        }
        else if (a[i]<*largest && a[i]>*second_largest) *second_largest = a[i];
    }
}
