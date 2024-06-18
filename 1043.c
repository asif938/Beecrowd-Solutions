#include<stdio.h>
int main()
{
    float x,y,z,a,p;
    scanf("%f%f%f",&x,&y,&z);

    if(x<y+z)
    {
        printf("Perimetro = %.1f\n",x+y+z);
    }
    else
    {
        a = ((x+y)*z)/2;
        printf("Area = %.1f\n",a);
    }
    return 0;
}
