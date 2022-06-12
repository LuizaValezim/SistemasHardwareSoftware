// Leia o README para mais infos sobre a q3!

// Implemente aqui uma funcao chamada ex4_solucao


// CÓDIGO EM ASSEMBLY:

// <+0>:	endbr64 
// <+4>:	mov    (%rdi),%eax
// <+6>:	mov    %eax,(%rdx)
// <+8>:	mov    $0x1,%eax
// <+13>:	mov    $0x0,%r8d
// <+19>:	jmp    0x135 <ex4+24>
// <+21>:	add    $0x1,%eax
// <+24>:	cmp    %esi,%eax
// <+26>:	jge    0x14a <ex4+45>
// <+28>:	movslq %eax,%rcx
// <+31>:	mov    (%rdi,%rcx,4),%ecx
// <+34>:	cmp    (%rdx),%ecx
// <+36>:	jge    0x132 <ex4+21>
// <+38>:	mov    %ecx,(%rdx)
// <+40>:	mov    %eax,%r8d
// <+43>:	jmp    0x132 <ex4+21>
// <+45>:	mov    %r8d,%eax
// <+48>:	retq 

// ESBOÇO DA RESOLUÇÃO:

// int eax, r8d, ecx;
// long rcx;

// eax = rdi;  // mov    (%rdi),%eax
// *rdx = eax; // mov    %eax,(%rdx)

// eax = 1;    // mov    $0x1,%eax
// r8d = 0;    // mov    $0x0,%r8d

// while (eax < esi) { // cmp    %esi,%eax & jge    0x14a <ex4+45>
//     // rcx = eax;      // movslq %eax,%rcx
//     ecx = rdi[eax]; // mov    (%rdi,%rcx,4),%ecx

//     if (ecx < *rdx) { // cmp    (%rdx),%ecx
//         *rdx = rdi[eax]; // mov    %ecx,(%rdx)
//         r8d = eax;  // mov    %eax,%r8d
//     }

//     eax = eax + 1; // add    $0x1,%eax
// }

// eax = r8d; // mov    %r8d,%eax
// return eax;


// RESOLUÇÃO:
int ex4_solucao (int rdi[], int esi, int *rdx) {

    int eax, r8d, ecx;
    long rcx;

    *rdx = *rdi; 

    eax = 1;    
    r8d = 0;    

    while (eax < esi) { 
        ecx = rdi[eax]; 

        if (ecx < *rdx) {
            *rdx = rdi[eax]; 
            r8d = eax;
        }

        eax += 1;
    }

    return r8d;
}

