#include<stdio.h>
#include<stdlib.h>
int main(){


int player_1, player_2;
//punho_cerrado_pedra=1;
//mao_aberta_papel=2;
// dois_dedos_3tesoura=3;
int comandos;
int flag=1;
char n1[50], n2[50];

printf("-------------Comandos------------\n");
printf("-aperte [1] punho_cerrado_pedra-\n");
printf("-aperte [2] mao_aberta_papel \n");
printf("-aperte [3]dois_dedos_tesoura\n-");
printf("----------------------------------\n");


while (flag!=0)
{
    printf("digite [1] para jogar e [0] para sair \n\n");
    scanf("%d", &flag);

    if (flag==0)
    {
         break;
    }



    printf("digite seu nome jogador 1\n");
    scanf("%s", n1);

    printf("digite seu nome jogador 2\n");
    scanf("%s", n2);

    system("cls");

    do
    {

    printf("escolha sua jogada, [ 1 para[pedra] 2 para [papel] 3 para [tesoura]\n", n1);
    scanf("%d", &player_1);
    }while(player_1 < 1 || player_1 > 3);

    system("cls");

    do{
    printf("jogador 2 escolha sua jogada [ 1 para[pedra] 2 para [papel] 3 para [tesoura]\n", n2);
    scanf("%d",&player_2);}while(player_2 < 1 || player_2 > 3);

    system("cls");

    if (player_1 == player_2)
    {
        printf("empate\n");
    }

    else if ((player_1 == 2 && player_2==1)||
            (player_1==1 && player_2==3)||
            (player_1==3 && player_2==2))
        
    {
        printf(" %s venceu! Jogada: %d contra %d de %s.\n", n1, player_1, player_2, n2);
    }
    
    else
    {
        printf("%s venceu! Jogada: %d contra %d de %s.\n", n2, player_2, player_1, n1);
    }
    
    system("pause");
}

    return 0;
}