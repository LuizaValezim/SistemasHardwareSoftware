// código com goto
int ex61 (int rdi, int rsi) {
    if (rdi <= rsi) {
        goto label1;
    }
    rsi = rdi;

    label1:
    if (rdi <= 0) {
        goto label2;
    }
    rsi = -rsi;

    label2:
        return rsi;
}

// versão simplificada e sem goto
int ex62 (int a, int b) {
    if (a < b) {
        b = a;
    }

    if (a > 0) {
        b = -b;
    }

    return b;
}