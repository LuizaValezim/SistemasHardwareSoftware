void exemplo2 (int edi, long *rsi) {
    edi = edi + 10;
    
    *rsi = edi;
}

// add $0xa, %edi
// mov %edi, (%rsi)
// retq