#include <stdio.h>

int main()
{
    int item, day, month, year;
    float unitPrice;

    printf("Enter item number: ");
    scanf("%d", &item);

    printf("Enter unit price: ");
    scanf("%f",&unitPrice);
    
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%02d/%02d/%d",&day, &month, &year);

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%d\t\t$%7.2f\t%d/%d/%d",item, unitPrice, day, month, year);
    
    return 0;
}