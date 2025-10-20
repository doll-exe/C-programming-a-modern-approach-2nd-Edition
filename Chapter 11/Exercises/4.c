#include <stdio.h>
void swap(int *p, int *q);
int main(void) {
    int a,b;
    scanf("%d %d", &a, &b);
    int *i=&a,*j=&b;
    swap(i,j);
    printf("%d %d",a,b);
    return 0;
}
void swap(int *p, int *q){
    int temp = *p;
    *p=*q;
    *q=temp;

}
