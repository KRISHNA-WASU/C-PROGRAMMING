#include <stdio.h>

int main() {
    char colour[30]; 
    printf("Enter your favourite colour: ");  
    fgets(colour, sizeof(colour), stdin);  

    
    

    printf("Your favourite colour is: %s\n", colour);  
    return 0;  
}

