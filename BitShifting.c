#include<stdio.h>

int bsMultiply(unsigned int number, unsigned int powerOfTwo)
{
    
    if(powerOfTwo == 0)
    return 0;

    if(number > 200000000)
        printf("Error, value is too large");
        return 0;
    if(powerOfTwo > 256)
        printf("Error, value is too large");
        return 0;

    if(powerOfTwo > 0 )
        return (powerOfTwo + bsMultiply(number, powerOfTwo-1));
        

    
    


}
int main() 
{
    unsigned int number, powerOfTwo;
    printf("Enter integer: ");
    scanf("%u", &number);
    printf("Enter power of two: ");
    scanf("%u", &powerOfTwo);
    return bsMultiply(number, powerOfTwo);
   
}