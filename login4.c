#include <stdio.h>
#include <string.h>

int main()
{
    int senha = 1234;
    int senhaDigitada;
    int n;
    int i;

    char usuario[50] = "juliofibonacci";
    char usuarioDigitado[50];

    printf("\n\n**********************************************************************************\n");
    printf("************************************SISTEMA DE LOGIN******************************\n");
    printf("**********************************************************************************");

    while (i < 3)
    {
        printf("\n\nDigite o seu nome de usuario: ");
        scanf("%49s", usuarioDigitado);

        printf("\n\nDigite a sua senha: ");
        scanf("%d", &senhaDigitada);

        i = i + 1;
        n = 3 - i;

        if (strcmp(usuario, usuarioDigitado) != 0 || senha != senhaDigitada)

        {
            if (n > 1)
            {
                printf("\n\nSenha ou Usuario incorretos!\n\n");
                printf("\n\nVoce tem mais %d tentativas\n\n", n);
            }

            else if (n == 1)
            {
                printf("\n\nSenha ou Usuario incorretos!\n\n");
                printf("\n\nVoce tem mais %d tentativa\n\n", n);
            }

            else if (n == 0)
            {
                printf("\n\nSuas tentativas se esgotaram!\n\n");
            }
        }

        else

        {
            printf("\n\nLogin efetuado com sucesso!\n\n");
            printf("\nAcesso ao sistema liberado!\n\n\n");

            break;
        }
    }

    return 0;
}