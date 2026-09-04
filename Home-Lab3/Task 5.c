#include <stdio.h>
int main() {
    char Ch;
    printf("Enter a Character: ");
    Ch = getchar();
    printf("You Entered: ");
    putchar(Ch);


    
    char Name[100];
    printf("Enter a Name: ");
    fgets(Name,100,stdin);
    printf("You Entered: ");
    puts(Name);
    
    return 0;
}