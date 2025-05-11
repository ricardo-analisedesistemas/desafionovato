#include<stdio.h>

int main(int argc, char const *argv[])
{
    float numerof;
    double numerod;
    
    
    printf("Digite um numero float: ");
    scanf("%f",&numerof);
    printf("%.f\n",numerof);

    printf("Digite um numero double: ");
    scanf("%lf",&numerod);
    printf("%.3lf\n",numerod);
    
    return 0;
}
