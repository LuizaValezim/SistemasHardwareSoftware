// Questao 04
// Implemente aqui uma funcao chamada ex4_solucao
int ex4_solucao(int rdi[], int rsi[],int edx){
    
    for (int ecx = 0; ecx < edx; ecx++) {

        int eax = edx;
        eax = eax - ecx - 1;

        if (rdi[ecx] != rsi[eax]){
            return eax;
        }
    }

    return -1;
}

// SE TEM BREAK NO MEIO DO WHILE, É FOR!!!