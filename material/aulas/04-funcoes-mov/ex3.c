void exemplo3 (long *rdi, long *rsi) {
    int eax = *rsi;

    eax = eax * eax;

    *rdi = eax;
}


// mov (%rsi),%eax
// imul %eax,%eax
// mov %eax,(%rdi)
// retq