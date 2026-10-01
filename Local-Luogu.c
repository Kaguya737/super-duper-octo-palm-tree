#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int Local=x*5;
    int Luogu=11+x*3;
    if(Local>Luogu){
        printf("Luogu");
    }if(Luogu>Local){
        printf("Local");
    }
    return 0;
}