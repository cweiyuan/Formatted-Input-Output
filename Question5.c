#include <stdio.h>

int main ()
{
    int first, second, third, fourth, sum, result;
    printf("Enter two fractions seperated by a plus sign: ");
    scanf("%d/%d+%d/%d", &first, &second, &third, &fourth);

    sum = (first * fourth) + (third * second);
    result = fourth * second ;
    printf("The sum is %d/%d ", sum, result);
    
    return 0;
}