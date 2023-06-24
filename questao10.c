#include <stdio.h>
int somapares(int a, int b) {
    int soma = 0, i;
    for (i = a; i <= b; i++) {
        if (i % 2 == 0) {
            soma += i;
        }
    }
    return soma;
}
int main (){

    int a,b;
    scanf("%d %d",&a, &b);
    printf("%d",somapares(a,b));

    return 0;
}
