#include<stdio.h>

int main(void)
{
    int speed;
    printf("What speed were you going at? \n");
    scanf("%d", &speed);
    if (speed>=65)
    {
        printf("A speeding ticket is going to be issued.");
    }
    
    else

    printf("A speeding ticket is not going to be issued.");

    return 0;
}