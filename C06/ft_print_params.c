#include <unistd.h>

int main(int argc, char **argv)
{
    int c = 1;

    while (argc > c)
    {
        i = 0;
        while(argv[c][i] != '\0')
        {
            write(1, &argv[c][i], 1);
            
            i++;
        }
        write (1, "\n", 1);
        c++;
    }
}
