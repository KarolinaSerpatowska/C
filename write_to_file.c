#include <stdio.h> //perror
#include <stdlib.h> //exit
#include <fcntl.h>

int main()
{
    int fd;
    int n_read;
    int m_written;
    char buf[10];

    fd=open("a.txt", O_CREAT | O_WRONLY | O_APPEND);

    if (fd==-1)
    {
        perror("error");
        exit(1);
    }

    printf("wpisz\n");

    n_read=read(0,buf,sizeof(buf)); //0 standard input, czyli skad, do czego, ile

    if(n_read==-1)
    {
        perror("blad");
        exit(1);
    }

    if(n_read==0)
    {
        printf("EOF\n");
    }

    m_written=write(fd,buf,n_read); //gdzie, co, ilosc

    if(m_written==-1)
    {
        perror("blad\n");
        exit(1);
    }

    close(fd);

    printf("odzcytano %d bajtow, zapisano %d bajtow, tekst: %s\n", n_read,m_written,buf);
    exit(0);
}
