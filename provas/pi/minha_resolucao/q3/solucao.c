// Leia o README para mais infos sobre a q3!

// Implemente aqui uma funcao chamada ex3_solucao


// CÓDIGO EM ASSEMBLY:

// <+0>:	endbr64 
// <+4>:	mov    (%rdi),%eax
// <+6>:	lea    (%rax,%rax,2),%eax
// <+9>:	mov    (%rsi),%edx
// <+11>:	lea    (%rdx,%rdx,4),%edx
// <+14>:	add    %edx,%eax
// <+16>:	mov    %eax,(%rdi)
// <+18>:	mov    (%rsi),%ecx
// <+20>:	lea    0x0(,%rcx,8),%edx
// <+27>:	sub    %ecx,%edx
// <+29>:	add    %edx,%eax
// <+31>:	mov    %eax,(%rsi)
// <+33>:	retq 


// ESBOÇO DA RESOLUÇÃO: 

// int eax = *rdi;  // mov    (%rdi),%eax
// eax = 3*eax;     // lea    (%rax,%rax,2),%eax

// int edx = *rsi;  // mov    (%rsi),%edx
// edx = 5*edx;     // lea    (%rdx,%rdx,4),%edx

// eax = eax + edx; // add    %edx,%eax
// *rdi = eax;      // mov    %eax,(%rdi)

// int ecx = *rsi;  // mov    (%rsi),%ecx
// edx = 8*ecx;     // lea    0x0(,%rcx,8),%edx
// edx = edx - ecx; // sub    %ecx,%edx
// eax = eax + edx; // add    %edx,%eax

// *rsi = eax;      // mov    %eax,(%rsi)


// RESOLUÇÃO SIMPLIFICADA

void ex3_solucao (int *rdi, int *rsi) {

    int eax;

    eax = 3*(*rdi) + 5*(*rsi);

    *rdi = eax;
    *rsi = eax + 7*(*rsi);
}