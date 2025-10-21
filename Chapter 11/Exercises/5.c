#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec);

int main(void) {
    int h,m,s;
    long total;
    printf("How many seconds?: ");
    scanf("%ld", &total);
    int *hr=&h, *min=&m, *sec=&s;
    split_time(total, hr, min, sec);
    printf("%d:%d:%d after midnight\n", *hr, *min, *sec);
    return 0;
}
void split_time(long total_sec, int *hr, int *min, int *sec){
    *hr = total_sec/3600;
    *min = (total_sec - *hr*3600)/60;
    *sec = (total_sec - *hr*3600)%60;
    *hr-=24;
    if (*hr<=0) *hr=0;
}
