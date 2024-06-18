#include<stdio.h>

/// function for find out large number within 2 numbers
int max(int a, int b)
{
    return (a>b) ? a : b;
}

///function for find out small number within 2 numbers
int min(int a, int b)
{
    return (a<b) ? a : b;
}


int main()
{
    long long int a,b,c,x,y,z;
    scanf("%lld %lld %lld",&a,&b,&c);


    x = max(a, max(a,b));   /// find out large number within 3 numbers

    y = min(a, min(a,b));   /// find out small number within 3 numbers

    z = a + b + c - x - y;  /// find out middle number within 3 numbers

    if(x >= y + z)
        printf("Invalido\n");
    else
    {
        if(x==y && y==z)
            printf("Valido-Equilatero\n");
        else if(x!=y && y!=z && z!=x)
            printf("Valido-Escaleno\n");
        else
            printf("Valido-Isoceles\n");

        if(x*x==(y*y+z*z))
            printf("Retangulo: S\n");
        else
            printf("Retangulo: N\n");
    }
    return 0;
}
