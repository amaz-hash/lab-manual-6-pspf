#include <stdio.h> 

int main () 
{
    int numofcc = 0, maxord = 5, validord = 0, cancelord = 0, percc = 3;
    int total = 0;
    char orderstatus;
    
    printf("Welcome to the bakery\n");
    printf("Price per cupcake: $%d\n", percc);

    for (int ord = 1; ord <= maxord; ord++) 
    {
        printf("Enter the number of cupcakes: ");
        scanf("%d", &numofcc);

        printf("Order status (V for valid / C for cancel): ");
        scanf(" %c", &orderstatus);  

        if (orderstatus == 'c' || orderstatus == 'C') 
        {
            cancelord = cancelord + 1; 
            printf("Order cancelled! Skipping...\n ");
            continue;
        }

        if (orderstatus == 'v' || orderstatus == 'V') 
        {
            validord = validord + 1; 
            total = total + (numofcc * percc);
            printf("Order total: %d\n", numofcc * percc);
        }
    }
    
    printf("\nSales Summary:\n");
    printf("Total orders processed: %d\n", maxord);
    printf("Valid orders: %d\n", validord);
    printf("Cancelled orders: %d\n", cancelord);
    printf("Total sales: $%d\n", total); 

    return 0;
}