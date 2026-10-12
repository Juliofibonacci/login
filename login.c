#include <stdio.h>
#include <string.h>

int main()
{

    int senha = 1234;
    int senhaDigitada;
    char usuario[50] = "juliofibonacci";
    char usuarioDigitado[50];
    int i = 0;
    int n;

    while (i < 3)

    {

        printf("\n\nDigite o seu nome de usuario: ");
        scanf("%s49", usuarioDigitado);

        printf("\n\nDigite a senha: ");
        scanf("%d", &senhaDigitada);

        if ((stricmp(usuario, usuarioDigitado) == 0) && senha != senhaDigitada)
        {
            printf("Login efetuado com sucesso!");
        }
        else
            (printf("\n\nUsuario incorreto! Tente novamente.\n\n"));

        i = i + 1;

        n = 3 - i;

        if (n != 0)
        {
            printf("\n\nVoce tem mais %d tentativas", n);
        }
        else
            (printf("\n\nSuas tentativas esgotaram! \n\n"));
    }

    if ((stricmp(usuario, usuarioDigitado) == 0) && senha != senhaDigitada)
    {
        printf("Acesso ao sistema liberado");
    }
    else
        (printf("\n\nUsuario bloqueado!\n\n\n\n"));

    return 0;
}