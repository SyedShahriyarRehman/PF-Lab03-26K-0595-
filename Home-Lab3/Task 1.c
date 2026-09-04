// Task 1:

#include <stdio.h>
#include <stdbool.h>

int main() {
    int Num = 67;
    float RealNum = 1.0;
    double BigRealNum = 1000.0;
    char Char = 'A';
    bool Statement =  false;
    printf("Number is %d And it's byte size is %zu\n " , Num , sizeof(Num) );
    printf("Real Number is %f And it's byte size is %zu\n" , RealNum , sizeof(RealNum) );
    printf("Big Real Number is %lf And it's byte size is %zu\n" , BigRealNum , sizeof(BigRealNum) );
    printf("Character is %c And it's byte size is %zu\n" , Char , sizeof(Char) );
    printf("Statement is %d And it's byte size is %zu\n" , Statement , sizeof(Statement) );

    return 0;
}