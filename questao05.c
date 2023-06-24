#include <stdio.h>

double questao5(double a1,double an,double n)
{
    double pa = (n*(a1+ an))/2;

    return pa;
}
int main ()
{

    double n,a1,an;
    scanf("%lf %lf %lf",&a1,&n,&n);
    printf("%lf\n",questao5(a1,an,n));

    return 0;
}

