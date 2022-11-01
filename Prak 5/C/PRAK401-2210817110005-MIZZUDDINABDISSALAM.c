#include <stdio.h>

int main(){
int n =  50, a, i, b;
scanf("%d %c", &a, &b);
for(i=1; i<=n; i++){
        if(i%a == 0){printf("%c ", b);}
        else {printf("%d ", i);}}
return 0;}
