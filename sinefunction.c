#include<stdio.h>
#include<math.h>

int main(void)
{
    double sinValue, x;
    printf("Enter a value between 0 and 1 for its sine value - ");
    scanf("%lf", &x);
    sinValue= sin(x);
    if (x>0 && x<1)
    {
        printf("The sine value %lf is %lf", x, sinValue);
    }
    
    else

    printf("Given value is not between 0 and 1.");

    return 0;
}