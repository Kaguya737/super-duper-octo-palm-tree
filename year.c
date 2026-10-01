#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>=1582&&a<2020){
    printf("%d", a%4 ==0&& a%100!=0 || a%100==0 && a%400 ==0);
    }
    return 0;
}
