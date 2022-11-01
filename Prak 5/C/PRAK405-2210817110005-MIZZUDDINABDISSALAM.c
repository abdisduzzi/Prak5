#include <stdio.h>

int main(){
    int a, b, c, d, h, n, m, hl, e;

    scanf("%d %d", &a, &b);
    for(c = 1; c <= a; c++){
        for(d = c; d > 1; d--){printf("(%d *%d) +", d, b);}
        for(h = 1, hl = h * b; h < c; h++, hl += (h*b));{
        printf("(%d *%d) = %d\n", d, b , hl);}
    for(n = 1, m = 1, e = 0; n <= a; m += n + 1, n++){
        e += m * b;}}
    printf("%d", e);
return 0;}
