#include <stdio.h>
#include <stdlib.h>

float fun_Print_Int(float r);
void fun_Calculate_Area(void);

int main()
{
    fun_Calculate_Area();
    return 0;
}

void fun_Calculate_Area(void)
{
    float k, fArea;
    
    printf("Enter k ");
    scanf("%f", &k);
    
    fArea = fun_Print_Int(k);
    
    printf("Area = %f", fArea);
}

float fun_Print_Int(float r)
{
    float a;
    a = 3.14 * r * r;
    return a;
}
