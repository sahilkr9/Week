#include<stdio.h>

int main(void)
{
    int outside, rain;
    printf("Are you outside?\n 1 true 0 false ");
    scanf("%d", &outside);
    printf("Is it raining outside?\n 1 true 0 false ");
    scanf("%d", &rain);

    if (outside && rain)
    {
        printf("Take an umbrella with you.");
    
    }
    else printf("No need to take an umbrella with you.");


    return 0;
}