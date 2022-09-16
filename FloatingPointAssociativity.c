#include <stdio.h>
 
int main()
{
   
    float A, B, C;
    printf("Enter float a: ");
    scanf("%f", &A);
    printf("Enter float b: ");
    scanf("%f", &B);
    printf("Enter float c: ");
    scanf("%f", &C);
    // float A = -12560;
    // float B = 12800;
    // float C = 3;

    
    printf("a + (b + c) is equal to %f \n", (C + (A + B)));
    printf("(a + b) + c is equal to %f", ((C + A) + B));
    //  c + (a + b) ≠ (c + a) + b.
    return 0;
}