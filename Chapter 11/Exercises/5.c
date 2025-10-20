#include <stdio.h>
void split_time(long total_sec, int *hr, int *min, int *sec);
int main(void) {
    int h,m,s;
    long total;
    scanf("How many seconds past midnight?: %ld", &total);
    int *hr=&h, *min=&m, *sec=&s;
    split_time(total, hr, min, sec)
    
    return 0;
}
void split_time(long total_sec, int *hr, int *min, int *sec){
    *hr = total_sec/3600;
    //stopped here
}
