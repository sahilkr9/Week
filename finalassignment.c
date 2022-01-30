#include<stdio.h>
#include<math.h>

int main(void)
{
    double interval;
    int i;
    printf("\nThe values of sin for (0,1) are - \n");

    for(i=1;i<10;i++)
    {
        interval= i/10.0;
        printf("\nsin (%lf) = %lf \t", interval, sin(interval));
    }

    printf("\n\nThe values of cos for (0,1) are - \n");

     for(i=1; i<10;i++)
    {
        interval= i/10.0;
        printf("\ncos (%lf) = %lf \t", interval, cos(interval));
    }

    return 0;

}