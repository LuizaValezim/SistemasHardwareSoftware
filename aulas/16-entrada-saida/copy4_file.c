/* POSIX headers */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/* Standard C */
#include <stdio.h>

int main (int argc, char *argv[]) {
    char buf[100]; // local usado para guardar os dados lidos de arq1

    int fd1 = open(argv[1], O_RDONLY);
    int fd2 = open(argv[2], O_WRONLY | O_CREAT, 0700);

    while (read(fd1, buf, 99) > 0) {
        printf("%s\n", buf);
        write(fd2, buf, 99);
    }

    close(fd1);
    close(fd2);
    
    return 0;
}
n", buf);
        write(fd2, buf, 99);
    }

    close(fd1);
    close(fd2);
    
    return 0