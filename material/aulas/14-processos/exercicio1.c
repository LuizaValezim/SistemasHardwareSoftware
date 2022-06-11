#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main() {
    pid_t pai, filho;

    for (int i = 1; i <= 8; i++){

        filho = fork();

        if (filho == 0) {
            // processo filho aqui
            pai = getppid();
            filho = getpid();
            printf("eu sou o processo filho %d %d, meu pai é %d\n", 
                i, filho, pai);
            return 0;

        } else if (i == 1 ) {
            // processo pai aqui!
            pai = getpid();
            printf("eu sou o processo pai %d, meu filho é %d\n", 
                pai, filho);
            }
    }
    
    return 0;
}