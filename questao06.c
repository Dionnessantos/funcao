#include <stdio.h>
int quatri(double a, double b) {
    if (a == b) {
        return 1;
    } else {
        return 0;
    }
}

int main (){

    double a,b;

    scanf("%lf %lf",&a, &b);
    printf("%d\n",quatri(a,b));


    return 0;
}
