#include <stdio.h>
int main() {
    int num;
    printf("Enter a integer: ");
    scanf("%d" , &num);
    if (num % 2 == 0) {
        printf("Integer is an Even Number. ");
    }
    else {
		 printf("Integer is an Odd Number.");
    }

}
