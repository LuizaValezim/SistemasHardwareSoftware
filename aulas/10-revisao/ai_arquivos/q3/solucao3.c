// Questao 03
// Implemente aqui uma funcao chamada ex3_solucao
void ex3_solucao(unsigned short *rdi, unsigned short *rsi, unsigned short *rdx){
    //se o rcx recebeu o endereço do rdx, significa que vai funcionar como o rdx
    unsigned short *rcx = rdx;
    unsigned short v = *rdi;
    unsigned short d = *rsi;

    //quando trabalhamos com ponteiros, é sempre bom criar variaveis intermediarias
    *rdi = d;
    *rsi = v;

    d = *rdi;

    d = 5*d;
    v = 3*v;

    d += v;

    *rcx = d;
    return;

}
