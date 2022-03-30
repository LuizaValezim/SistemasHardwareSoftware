int exemplo1 (int edi, int esi) {
    int eax = edi;

    eax = eax - esi;

    return eax;
}

// mov    %edi, %eax
// sub    %esi, %eax -> eax -= esi
// retq