#include <stdio.h>
int main(){
    double a;
    int b;
    scanf("%lf %d",&a,&b);
    printf("%.3lf",a/b);
    printf("\n%d",b*2);
    return 0;
}