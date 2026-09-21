#include <stdio.h>
int main(){
    int type;
    scanf("%d",&type);
    switch(type){
        case 1:
            printf("hello!");
        case 2:
            printf("world!");
            break;
        case 3:
            printf("hello world!");
            break;
    }
return 0;
}