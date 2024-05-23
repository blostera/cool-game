#include <stdio.h>
int i=1;
int c=2;
int r=1;
int end=0;
void stars(int n){
    if (end==n)return;
    printf("*");
    if (i==r){
        printf("\n");
        r+=c;
        c++;
        end++;
    }
    i++;
    stars(n);
}
int main() {
    int no=10;
    stars(no);
    return 0;
}