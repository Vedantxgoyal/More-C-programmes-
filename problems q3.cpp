#include <stdio.h>
#include <ctype.h> 

int main() {
    char str[] = "HELLO WORLD!";
    
    for (int i = 0; str[i] != '\0'; i++) 
        str[i] = tolower(str[i]); 
    
    printf("Lowercase String: %s\n", str);
    return 0;
}
