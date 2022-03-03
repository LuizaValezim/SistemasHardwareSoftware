#include <stdio.h>

typedef union {
    int i;
    float f;
} int_ou_float;

int main() {
    int_ou_float num;
    num.f = 5.75;
    
    /* 
     * %x mostra um número em hexa
     */
    printf("%#08x\n", num.i);
    
    return 0;
}

// o typedef union usa um espaço de memória compartilhado