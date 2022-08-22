#include <stdio.h>

int main()
{
    double kilowatt, price, discount, billsBefore, billsAfter;
    
    printf("Enter a total Kilowatt: ");
    scanf("%lf",&kilowatt);
    printf("Enter price per Kilowatt: ");
    scanf("%lf",&price);
    printf("Enter the discount: ");
    scanf("%lf",&discount);
    
    billsBefore = kilowatt * price;
    billsAfter = billsBefore - discount;
    
    printf("\nElectric Bills before discount:%.02f ",billsBefore);
    
    printf("\nElectric Bills after discount:%.02f ",billsAfter);
 
    
    
    return 0;
}
