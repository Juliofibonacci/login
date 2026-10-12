#include<stdio.h>
#include<string.h>

int main(){

    int senha = 1234;
    int senhaDigitada;
    char nomeUsuario[50] = "juliofibonacci";
    char nomeUsuarioDigitado[50];
    int i=0;
    int n;

    printf("\n\nPara liberar o acesso ao sistema voce devera digitar o nome de usuario e a senha\n\n");

    while(i<3)
    
    {

        if(stricmp(nomeUsuario, nomeUsuarioDigitado)!=0 || senha!=senhaDigitada)
        {
        printf("\n\nDigite o seu nome de usuario: ");
        scanf("%s49", nomeUsuarioDigitado);

        printf("\n\nDigite a sua senha: ");  
        scanf("%d", &senhaDigitada);

        i = i+1;
        n = 3-i;

        if(n<3 && n>0){

        printf("\n\nVoce tem mais %d tentativa(s)", n);

        }

        else if(n==0)
        
        {
            printf("\n\nSuas tentativas esgotaram!\n\n");
        }

        }


        else if(stricmp(nomeUsuario, nomeUsuarioDigitado)==0 || senha==senhaDigitada)
        {
            printf("\n\nAcesso ao sistema liberado!\n\n");
            break;
        }

    }

    return 0;
}