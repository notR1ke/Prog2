#include <stdio.h>

int main(void){
    int d, h, m, s;
    scanf("%d", &d);
    h=d*24;
    m=h*60;
    s=m*60;
    printf("%d days: %d hours\n",d, h);
    printf("%d days: %d minutes\n",d, m);
    printf("%d days: %d seconds\n",d, s);
    return 0;
}