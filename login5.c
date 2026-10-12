#include <stdio.h>
#include <string.h>

int main()
{
    int senha = 1234;
    int senhaDigitada;
    char usuario[50] = "julio";
    char usuarioDigitado[50];
    int n;
    int i = 0;

    printf("\n\n**************************************************************\n");
    printf("***************** SISTEMA DE LOGIN ***************************\n");
    printf("**************************************************************\n\n");

    while (i < 3)
    {

        printf("\n\nDigite o seu nome de usuario: ");
        scanf("%49s", usuarioDigitado);

        printf("\n\nDigite a sua senha: ");
        scanf("%d", &senhaDigitada);

        i = i + 1;
        n = 3 - i;

        if (strcmp(usuario, usuarioDigitado) != 0 || (senha != senhaDigitada))
        {
            if (n > 1)
            {
                printf("\n\nUsuario ou senha incorretos!");
                printf("\n\nVoce tem mais %d tentativas.", n);
            }

            if (n == 1)
            {
                printf("\n\nUsuario ou senha incorretos!");
                printf("\n\nVoce tem mais %d tentativa.", n);
            }

            if (n == 0)
            {
                printf("\n\nUsuario ou senha incorretos!");
                printf("\n\nSuas tentativas esgotaram!\n\n");
            }
        }

        else
        {
            printf("\n\nLogin efetuado com sucesso!");
            printf("\n\nAcesso ao sistema liberado!\n\n");

            break;
        }

        printf("\n\n**************************************************************\n");
        printf("***************** SISTEMA DE LOGIN ENCERRADO *********************\n");
        printf("**************************************************************\n\n");
    }

    return 0;
}