#include <stdio.h>
char tabela[12]={'0','1','2','3','4','5','6','7','8','9','10'},mark;
int i,jogada,who,atualJogador,jogoacabou=0;

vencedor()
{
    if(tabela[1] == tabela[2] && tabela[1] == tabela[3] ||
       tabela[4] == tabela[5] && tabela[4] == tabela[6] ||
       tabela[7] == tabela[8] && tabela[7] == tabela[9] ||
       tabela[1] == tabela[4] && tabela[1] == tabela[7] ||
       tabela[2] == tabela[5] && tabela[5] == tabela[8] ||
       tabela[3] == tabela[6] && tabela[6] == tabela[9] ||
       tabela[1] == tabela[5] && tabela[5] == tabela[9] ||
       tabela[3] == tabela[5] && tabela[5] == tabela[7])


    {
    tabelaGUI();
    printf("Parabens!! Jogador %d venceu a partida.\n",atualJogador);
    jogoacabou=1;
    }
}
tabelaGUI()
{
printf("         |   |   \n");
printf("       %c | %c | %c \n",tabela[1],tabela[2],tabela[3]);
printf("      ___|___|___\n");
printf("         |   |   \n");
printf("       %c | %c | %c \n",tabela[4],tabela[5],tabela[6]);
printf("      ___|___|___\n");
printf("         |   |   \n");
printf("       %c | %c | %c \n",tabela[7],tabela[8],tabela[9]);
printf("         |   |   \n");
}
jogando()
{
vencedor();
            if(who%2==0)
        {
        atualJogador=1;
        who++;
        mark='X';
        }
        else
        {
        atualJogador=2;
        who++;
        mark='O';
        }

playagain:
    printf("Jogador %d escolha um numero:",atualJogador);
    scanf("%d",&jogada);

    if(tabela[jogada] == 'X' ||tabela[jogada] =='O' || jogada > 9 )
        {
        printf("escolha outro numero\n");
        goto playagain;
        }
        else
        {
        tabela[jogada]=mark;
        }
vencedor();
}
int main ()
{
    for(i=0;i<9;i++)
    {
        if(jogoacabou<1)
        {
        tabelaGUI();
        jogando();
        system("cls");
        }
        else
        {
        vencedor();
        break;
        }
    }
    return 0;
}
