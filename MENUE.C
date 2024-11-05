//MENUE CARD USING SWITCH CASE 
#include <stdio.h>

int main() {
    int ch, qty;

    // Display menu
    printf("\n\tMENU CARD");
    printf("\n\t\t1. KAJU KATLI       Rs: 400 /KG ");
    printf("\n\t\t2. GULAB JAMUN      Rs: 250/KG ");
    printf("\n\t\t3. RASGULLA         Rs:350/KG ");
    printf("\n\t\t4. BESAN LADDU      Rs: 600/KG ");
    printf("\n\nEnter Your choice: ");
    
    scanf("%d", &ch);
    switch (ch) {
        case 1:
            printf("\nYou have selected kaju katli");
            printf("\nEnter The Qty: ");
            scanf("%d", &qty);
            printf("\nTotal amount: Rs %d", qty * 400);
            break;

        case 2:
            printf("\nYou have selected gulab jamun");
            printf("\nEnter The Qty: ");
            scanf("%d", &qty);
            printf("\nTotal amount: Rs %d", qty * 250);
            break;

        case 3:
            printf("\nYou have selected rasgulla");
            printf("\nEnter The Qty: ");
            scanf("%d", &qty);
            printf("\nTotal amount: Rs %d", qty * 350);
            break;

        case 4:
            printf("\nYou have selected besan laddu");
            printf("\nEnter The Qty: ");
            scanf("%d", &qty);
            printf("\nTotal amount: Rs %d", qty * 600);
            break;

        default:
            printf("\nInvalid Product Selection");
            break;
    }

    return 0;
}

