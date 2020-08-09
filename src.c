#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void hackme(char *argv[])
{
    
    unsigned char buffer[256];
    strcpy(buffer, argv[1]);
    
    for (int i = 0; i < strlen(argv[1]); i++) 
    {    
        if (i%2 == 0)
        {    
            buffer[i] += 1;
        }

        else if (i%2 == 1)
        {
            buffer[i] -= 1;
        }
    }

    printf(buffer);

    int key = 03;
    int i;
    for(i=0; i<strlen(buffer); i++)
    {
        buffer[i] ^= key;
    }

    printf(buffer);

    char *pass = "ymu]p]a]jcgiercb2{";

    if (strcmp(buffer, pass) == 0)
    {
        printf("\nVous pouvez valider le challenge avec ce password\n");
    }

    else 
    {
        printf("\nMauvais mot de passe\n");
    }
}


int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Utilisation : %s <password>\n", argv[0]);
        exit(1);
    }
 
    printf("\n");
    printf("\n");
    printf("Basic Crackme by saymant");
    printf("\n");
    printf("\n");


    hackme(argv);

    return 0;
}
