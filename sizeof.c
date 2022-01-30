#include<stdio.h>

int main(void)
{
    int a=7, b=4, c=5;
    double average = 0.0;
    char ch = 'e';

    printf("On my system - \n");
    printf(" int is %lu bytes\n", sizeof(int));
    printf(" double is %lu bytes\n", sizeof(double));
    printf(" char is %lu bytes\n", sizeof(ch ));
    printf(" float is %lu bytes\n", sizeof(float));
    printf(" long int is %lu bytes\n", sizeof(long int));
    printf(" long double is %lu bytes\a", sizeof(long double));

    return 0;



}