// Leia o PDF ou MD antes de iniciar este exercício!

#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){

    int ret;
    int status;
    pid_t filho = 0;

    do {
        // Construa a chamada do executavel siscoin. Veja enunciado.
        char *agrs[] = {"./siscoin", argv[1], argv[2], argv[3], NULL};
        filho = fork();
        
        if (filho == 0) {
            execvp("./siscoin", agrs);
        } else { 
            int id = wait(&status);

            if (id > 0) {
                ret = (char) WEXITSTATUS(status);
            }
            printf("Os parâmetros são %s, %s, %s\n", argv[1], argv[2], argv[3]);
            printf("O return do siscoin foi %d\n", ret);
        }

    } while (ret > 0); // Repita enquanto houver falha. 
                       // Para se tem problema com o valor ou a qtde de parâmetros
                       // Esta validação está sendo feita em siscoin
    return 0;
}