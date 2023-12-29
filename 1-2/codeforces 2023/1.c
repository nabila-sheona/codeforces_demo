#include <stdio.h>
#include <stdlib.h>

int main()
{
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stdin, NULL, _IONBF, 0);

    int login = 0;
    char buf[69];

    printf("You mustn't login!\n");
    printf("Will you?\n");
    gets(buf);
    if (login)
    {
        FILE *flag = fopen("flag.txt", "r");
        if (flag == NULL)
        {
            puts("flag not found.");
            puts(
                "If you are running this on the remote server, contact the admin "
                "immediately.");
            puts(
                "If you are running this on your local machine, create a flag.txt "
                "with a dummy flag for debugging purpose.");
            fflush(stdout);
            exit(0);
        }
        char buf[60];
        fgets(buf, 59, flag);
        printf("YOUR FLAG: %s\n", buf);
    }
}
