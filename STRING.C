#include <stdio.h>
#include <string.h> .

int main() {
    char str1[] = "APPLE";  
    char str2[] = "BANANA";

    int result = strcmp(str1, str2);  

    if (result < 0) {  
        printf("\"%s\" is not the same as \"%s\"\n", str1, str2); 
    } else {
        printf("\"%s\" is the same as \"%s\"\n", str1, str2);  
    }

    return 0;  
}

