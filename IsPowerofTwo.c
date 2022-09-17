#include <math.h>
#include <stdbool.h>
#include <stdio.h>

bool isPowerOfTwoSimple(int i){
    return (ceil(log2(i)) == floor(log2(i)));
};

int isPowerOfTwoClever(int i){
    if ((i & (i - 1)) != 0)
        return 0;
    return 1;
};


int main()
{
    int i = 0;

    printf("Enter Number: ");
    scanf("%d", &i);

    isPowerOfTwoSimple(i) ? printf("Yes\n") : printf("No\n");

    if(isPowerOfTwoClever(i))
        // printf("Yes");
        return 0;
    else
        // printf("No");
        return 1;
}

