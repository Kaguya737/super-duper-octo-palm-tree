#include <stdio.h>
int main (){
    int x;
    scanf("%d",&x);
    printf("%d %d %d %d",x>4&&x<=12&&x%2==0,x>4&&x<=12 || x%2==0,x>4&&x<=12&&x%2!=0 ||x<=4&&x%2==0 || x>12&&x%2!=0,x<=4&&x%2!=0 ||x>12&&x%2 !=0);
    return 0;
}