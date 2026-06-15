#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    int a=n%10;
    printf("%d\n", a);
    int b=(n/10)%10;
    printf("%d\n", b);
    int c=(n/100)%10;
    printf("%d\n", c);
    int e=(n/1000)%10;
    printf("%d\n", e);
    return 0;
}