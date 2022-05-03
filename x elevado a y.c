#include <stdio.h>

void main(){
    int x, y, z;

    printf("Digite dois numeros:\n");
    scanf("%d, %d", &x, &y);
    z=x;

    if(y==0){
        x=1;
    }

    while(y>1){
        x=x*z;
        y--;
        printf("%d, %d\n", x, y);
    }
    printf("x elevado a y eh: %d", x);
}
