#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

void proxima_linha(char* fd, int il) {

    int arquivo;
    char buf[1];

    char linha[500];
    int i = 0;
    int l = 0;

    arquivo = open(fd, O_RDONLY);
    int bytes_read = 1;
    do
    {
        bytes_read = read(arquivo, &buf, 1);

        if (bytes_read > 0)
        {
            if (buf[0] == '\n')
            {
                if (l == il) {
                    printf("%s\n", linha);
                }
                else {
                    l++;
                }
            }
            else
            {
                linha[i] = buf[0];
                i++;
            }
        }
    } while (bytes_read > 0);
    close(arquivo);

    return;
}


int main(int argc, char *argv[]) {

    for (int i = 0; i < 3; i++) {
        proxima_linha(argv[1], i);
    }

    return 0;
}
