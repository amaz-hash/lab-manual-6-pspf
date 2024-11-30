#include <stdio.h> 

int main() {
    int basePrice = 5;

    for (int shelf = 1; shelf <= 3; shelf++) 
    {
        int shelfPrice = basePrice + (shelf - 1) * 3;  
        printf("Shelf %d (Shelf Price: $%d):\n", shelf, shelfPrice);

        for (int section = 1; section <= 3; section++) 
        {
            int sectionPrice = section;  
            printf("  Section %d (Section Price: $%d): ", section, sectionPrice);

        for (int gift = 1; gift <= 2; gift++) {
        {
        int giftPrice = basePrice + shelfPrice + sectionPrice; 
        printf("Gift %d ($%d)", gift, giftPrice);
        }
        if (gift < 2) 
        {
        printf(" "); 
        }
        }
        {
        printf("\n");
        }
        }
        {
        printf("\n");
        }

    }

    return 0;
}
