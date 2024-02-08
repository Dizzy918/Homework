#include<stdio.h>

#define SQUARE(A,B) ((A + B)*(A + B))

int main(){
    int a = 2, b = 3;
    
    #ifdef SQUARE
        printf("Square of %d + %d is %d", a , b ,SQUARE(a,b));
    #endif

    return 0;
}