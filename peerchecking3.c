#include <stdio.h>
#include <math.h>


void intrvl(float val)

{

for(float i = 0; i <= 1; i = i + val)

   {

    printf("sin(%f) = %f\tcos(%f) = %f\n", i, sin(i), i, cos(i));

}

}

int main()

{

   float val;

   printf("Enter the desired value between 0 and 1 : ");

   scanf("%f", &val);

   intrvl(val);

return 0;

}
