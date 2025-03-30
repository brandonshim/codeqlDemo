#include <stdio.h>
//simple buffer overflow program
void vuln() {
    char buffer[32]; 
    printf("Input: ");
    gets(buffer); 
    printf("You entered: %s\n", buffer);
}

int main() {
    vuln();
    return 0;
}
