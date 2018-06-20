#include <stdio.h>
#include <fcntl.h>

int main(int argc, char* argv[])
{
    int desc;
    long rozm;

    if(argc<2)
    {
        fprintf(stderr,"za malo arg");
        exit(1);
    }

    desc=open(argv[1], O_RDONLY);
    if(desc==-1)
    {
        perror("blad");
        exit(1);
    }

    rozm=lseek(desc,0,SEEK_END);

    if(rozm==-1)
    {
        perror("blad");
        exit(1);
    }

    printf("rozmiar pliku %s: %ld\n", argv[1],rozm);

    if(close(desc)==-1)
    {
        perror("blad");
        exit(1);

    }

exit(0);
}
