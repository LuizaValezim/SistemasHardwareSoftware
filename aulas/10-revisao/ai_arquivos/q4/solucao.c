// Questao 04
// Implemente aqui uma funcao chamada ex4_solucao

// <+0>:	endbr64 
// <+4>:	mov    $0x0,%ecx
// <+9>:	cmp    %edx,%ecx
// <+11>:	jge    0x146 <ex4+41>
// <+13>:	mov    %edx,%eax
// <+15>:	sub    %ecx,%eax
// <+17>:	sub    $0x1,%eax
// <+20>:	movslq %ecx,%r8
// <+23>:	movslq %eax,%r9
// <+26>:	mov    (%rsi,%r9,4),%r10d
// <+30>:	cmp    %r10d,(%rdi,%r8,4)
// <+34>:	jne    0x14b <ex4+46>
// <+36>:	add    $0x1,%ecx
// <+39>:	jmp    0x126 <ex4+9>
// <+41>:	mov    $0xffffffff,%eax
// <+46>:	retq  

int ex4_solucao (int rdi, int rsi, int rdx) {
    int ecx = 0;
    int eax, r8, r9, r10d, cmp30;

    while (rdx <= ecx) {
        eax = rdx;
        eax = eax - ecx;
        eax = eax - 1;

        r8 = ecx;
        r9 = eax;

        r10d = rsi + 4*r9;
        cmp30 = rdi + 4*r8;

        if (r10d != cmp30) {
            return 0;
        }
        ecx = ecx + 1;
    }

    eax = -1;
    return eax;
}