#include<stdio.h>
int main()
{
    double A,B,C;
    scanf("%lf%lf%lf",&A,&B,&C);


    if(A >= B + C || B >= A+C || C >= A+B)
        printf("NAO FORMA TRIANGULO\n");
    else if(A*A == B*B + C*C || B*B == A*A + C*C || C*C == A*A + B*B)
        printf("TRIANGULO RETANGULO\n");
    else if(A*A > B*B + C*C || B*B > A*A + C*C || C*C > A*A + B*B)
        printf("TRIANGULO OBTUSANGULO\n");
    else if(A*A < B*B + C*C || B*B < A*A + C*C || C*C < A*A + B*B)
        printf("TRIANGULO ACUTANGULO\n");
    if(A==B && A==C)
        printf("TRIANGULO EQUILATERO\n");
    if((A==B && C!=A && C!=B)||(A==C && B!=A && B!=C)||(C==B && A!=B && A!=C))
        printf("TRIANGULO ISOSCELES\n");


    return 0;


}
