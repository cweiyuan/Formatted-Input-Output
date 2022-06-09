#include <stdio.h>

int main() 
{   
    int month, date , year;
    
    printf("Enter a date (mm/dd/yyyy) : ");
    scanf("%d / %d / %d", &month , &date , &year);
    
    printf("You entered the date %d%02d%02d", year, month, date);

    return 0;
}