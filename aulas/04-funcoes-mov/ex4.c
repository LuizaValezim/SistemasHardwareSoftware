int exemplo4 (int *rdi, int edi, int esi {
    edi = edi * esi;

    int eax = 20 + *rdi;

    return eax;
}

// imul   %esi,%edi
// lea    0x20(%rdi),%eax
// retq