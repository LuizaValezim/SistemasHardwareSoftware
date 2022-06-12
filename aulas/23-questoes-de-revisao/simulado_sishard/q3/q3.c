// Leia o PDF ou MD antes de iniciar este exercício!

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <signal.h>
#include <errno.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

// Variável GLOBAL para armazenar o valor de PI aproximado
double pi = 0.0;

// Função que gera um numero aleatorio uniformemente entre 0.0 e 1.0
// Você não deve alterar esta função
double random_zero_one() {
    return (double)random()/(double)RAND_MAX;
}

// Função que calcula o valor de pi por simulação (Monte Carlo)
// Você não deve alterar esta função
double aproxima_pi() {
    long dentro = 0;
    long total_pontos = 0;

    double x,y,d;
    while (1) {
        x = random_zero_one();
        y = random_zero_one();
        d = x*x + y*y;
        if (d<=1) {
            dentro++;
        }
        total_pontos++;
        pi = 4.0 * ((double)dentro/(double)total_pontos);
        if (random_zero_one() < 0.008) {
            sleep(1);
        }
    }
}

// Crie AQUI a função que exporta o valor de pi para um arquivo chamado pi.txt
// Esta função deve ser chamada pelo handler quando este for acionado

// Crie AQUI a função que será o handler do sinal

static void sigintHandler(int sig)
{
    printf("Finalizando o programa...\n");
    printf("O valor final de pi ficou como %f\n", pi);

    printf("Salvando o valor de pi no arquivo txt\n");

    int arquivo = open("./pi.txt", O_WRONLY | O_APPEND | O_CREAT, 0700);
    char texto[200];
    sprintf(texto, "o valor de pi ficou como %f\n!", pi);

    for (int i = 0; texto[i] != '!'; i++){
        write(arquivo, &texto[i], 1);
    }
    close(arquivo);

    exit(EXIT_SUCCESS);
}

int main() {

    // Exiba o PID deste processo
    printf("PID deste processo: %d\n", getpid());

    // Registre AQUI seu handler para o sinal SIGINT!
    if (signal(SIGINT, sigintHandler) == SIG_ERR);

    srand(time(NULL));
    aproxima_pi();

    return 0;
}