#include <stdio.h>
#include <math.h>
int main(){
    double a,b,c;
    double p=(a+b+c)/2;
    scanf("%lf %lf %lf",&a,&b,&c);
    printf("%.1f",sqrt(p*(p-a)*(p-b)*(p-c)));
    return 0;
}