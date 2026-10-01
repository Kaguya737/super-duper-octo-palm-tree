#include <stdio.h>
int main (){
    int m=0,t=0,s=0,a;
    scanf("%d %d %d",&m,&t,&s);
    a=m-(s/t);
    if(t >0&& m>0&&s>0){
        if(s/t > m-1){
            printf("0");
        }else{if(s%t>0){
            printf("%d",a-1);
        }else{
            printf("%d",a);
        }}
    }else{
        printf("0");
    }
    return 0;
}