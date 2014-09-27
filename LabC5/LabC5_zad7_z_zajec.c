#include <stdio.h>
#include <stdlib.h>
#define PI=3.1415926535
unsigned long long silnia(unsigned long n)
{
    unsigned long long iloczyn=1;
    int i=2;
    while (i<=n)
    {
    iloczyn=iloczyn*i;
    i++;
    }
    return iloczyn;
}
double potega(double x, int n)
{
    int i=1;
    double iloczyn=1.0;
    while (i<=n)
    {
    iloczyn=iloczyn*x;
    i++;
    }
return iloczyn;
}
double cos(double x)
{
    int i=0,p=0;
    double sp=0,s=0;
    do
    {
        i++;
        sp=s;
        double wyraz=potega(x,p)/silnia(p);
        s+=(i%2)?wyraz:-wyraz;
        p+=2;
        printf("p=%d s=%0.20f \n",p,s);
    }
    while((fabs(sp-s))>0.0001);
    return s;
}
int main()
{
    printf("silnia:\n %d", silnia(4));
    printf("\npotega:\n %f", potega(3,3));
    double id=8;
    printf("cos=\n %0.12lf", cos(id));
    return 0;
}
