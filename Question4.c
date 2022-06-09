#include <stdio.h>

int main ()
{
    int countryCode, prefix, lineNumber;

    printf("Enter phone number  [ (xxx)  xxx-xxxx] :  ");
    scanf("(%d)%d-%d", &countryCode, &prefix, &lineNumber);

    printf("You entered %d.%d.%d", countryCode, prefix, lineNumber);

    return 0;
}