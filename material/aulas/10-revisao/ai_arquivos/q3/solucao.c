// Questao 03
// Implemente aqui uma funcao chamada ex3_solucao

// <+0>:	endbr64 
// <+4>:	mov    %rdx,%rcx
// <+7>:	movzwl (%rdi),%edx
// <+10>:	movzwl (%rsi),%eax
// <+13>:	mov    %ax,(%rdi)
// <+16>:	mov    %dx,(%rsi)
// <+19>:	movzwl (%rdi),%eax
// <+22>:	lea    (%rax,%rax,4),%eax
// <+25>:	lea    (%rdx,%rdx,2),%edx
// <+28>:	add    %edx,%eax
// <+30>:	mov    %ax,(%rcx)
// <+33>:	retq 

int ex3_solucao(long rdi, long rsi) {
    long rax = rsi;
    long rdx = rdi;
    int eax = 5*rax;
    int edx = 3*rdx;

    return eax + edx;
}