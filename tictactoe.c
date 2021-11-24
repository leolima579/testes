#include <stdio.h>



int main()
{
char j1[12],j2[12];
printf("Digite o nome do jogador 1:");
scanf("%s",&j1);
printf("\nDigite o nome do jogador 2:");
scanf("%s",&j2);

int game,i,jogada,vencedor,rodada;
char um='1',dois='2',tres='3',quatro='4',cinco='5',seis='6',sete='7',oito='8',nove='9';
game=9;vencedor=0;rodada=1;

        for(i=1;i<=game;i++)
            {
//verficar vencedor//
    if(um==dois && dois==tres)
    {
        if(um=='X'){
        vencedor=1;
        break;
        }
        else{
         vencedor=2;
            break;
        }
    }
    if(quatro==cinco && cinco==seis)
    {
        if(quatro=='X'){
        vencedor=1;
        break;
        }
        else{
         vencedor=2;
            break;
        }
    }
    if(sete==oito && oito==nove)
    {
        if(sete=='X'){
        vencedor=1;
        break;
        }
        else{
         vencedor=2;
            break;
        }
    }
    if(um==quatro && quatro==sete)
    {
        if(um=='X'){
        vencedor=1;
        break;
        }
        else{
         vencedor=2;
            break;
        }
    }
    if(dois==cinco && cinco==oito)
    {
        if(cinco=='X'){
        vencedor=1;
        break;
        }
        else{
         vencedor=2;
            break;
        }
    }
    if(tres==seis && seis==nove)
    {
        if(tres=='X'){
        vencedor=1;
        break;
        }
        else{
         vencedor=2;
            break;
        }
    }
    if(um==cinco && cinco==nove)
    {
        if(um=='X'){
        vencedor=1;
        break;
        }
        else{
         vencedor=2;
            break;
        }
    }
    if(tres==cinco && cinco==sete)
    {
        if(tres=='X'){
        vencedor=1;
        break;
        }
        else{
         vencedor=2;
            break;
        }
    }


if(rodada%2!=0)
{
playerOneTurn:
printf("-----------------------------------------------\n");
printf("TENTATIVA DE FAZER UM JOGO DA VELHA PT 1 - leo \n");
printf("-----------------------------------------------\n\n\n");

printf("%s:(X)   -   %s:(O)\n\n",j1,j2);

printf("         |   |   \n");
printf("       %c | %c | %c \n",um,dois,tres);
printf("      ___|___|___\n");

printf("         |   |   \n");
printf("       %c | %c | %c \n",quatro,cinco,seis);
printf("      ___|___|___\n");

printf("         |   |   \n");
printf("       %c | %c | %c \n",sete,oito,nove);
printf("         |   |   \n");

    printf("\nJOGADOR:%s ESCOLHA UM NUMERO:",j1);
    scanf(" %d",&jogada);
    printf("\n");
    if(jogada==1)
    {
        if(um=='1')
        {
            um=('X');
        }
        else
        {
        system("cls");
        printf("voce escolheu um numero ja escolhido, escolha de novo\n");
       sleep(1);
       goto playerOneTurn;
        }
    }
    if(jogada==2)
    {
        if(dois=='2')
        {
            dois=('X');
        }
        else
        {
        system("cls");
        printf("voce escolheu um numero ja escolhido, escolha de novo\n");
       sleep(1);
       goto playerOneTurn;
        }
    }
    if(jogada==3)
    {
        if(tres=='3')
        {
            tres=('X');
        }
        else
        {
        system("cls");
        printf("voce escolheu um numero ja escolhido, escolha de novo\n");
       sleep(1);
       goto playerOneTurn;
        }
    }
    if(jogada==4)
    {
        if(quatro=='4')
        {
            quatro=('X');
        }
        else
        {
        system("cls");
        printf("voce escolheu um numero ja escolhido, escolha de novo\n");
       sleep(1);
       goto playerOneTurn;
        }
    }
    if(jogada==5)
    {
        if(cinco=='5')
        {
            cinco=('X');
        }
        else
        {
        system("cls");
        printf("voce escolheu um numero ja escolhido, escolha de novo\n");
       sleep(1);
       goto playerOneTurn;
        }
    }
    if(jogada==6)
    {
        if(seis=='6')
        {
            seis=('X');
        }
        else
        {
        system("cls");
        printf("voce escolheu um numero ja escolhido, escolha de novo\n");
       sleep(1);
       goto playerOneTurn;
        }
    }
    if(jogada==7)
    {
        if(sete=='7')
        {
            sete=('X');
        }
        else
        {
        system("cls");
        printf("voce escolheu um numero ja escolhido, escolha de novo\n");
       sleep(1);
       goto playerOneTurn;
        }
    }
    if(jogada==8)
    {
        if(oito=='8')
        {
            oito=('X');
        }
        else
        {
        system("cls");
        printf("voce escolheu um numero ja escolhido, escolha de novo\n");
       sleep(1);
       goto playerOneTurn;
        }
    }
    if(jogada==9)
    {
        if(nove=='9')
        {
            nove=('X');
        }
        else
        {
        system("cls");
        printf("voce escolheu um numero ja escolhido, escolha de novo\n");
       sleep(1);
       goto playerOneTurn;
        }
    }
    rodada++;
     system("cls");
}
else
        {

playerTwoTurn:
printf("-----------------------------------------------\n");
printf("TENTATIVA DE FAZER UM JOGO DA VELHA PT 1 - leo \n");
printf("-----------------------------------------------\n\n\n");

printf("%s:(X)   -   %s:(O)\n\n",j1,j2);

printf("         |   |   \n");
printf("       %c | %c | %c \n",um,dois,tres);
printf("      ___|___|___\n");

printf("         |   |   \n");
printf("       %c | %c | %c \n",quatro,cinco,seis);
printf("      ___|___|___\n");

printf("         |   |   \n");
printf("       %c | %c | %c \n",sete,oito,nove);
printf("         |   |   \n");

    printf("\nJOGADOR:%s ESCOLHA UM NUMERO:",j2);
    scanf(" %d",&jogada);
    printf("\n");
    if(jogada==1)
    {
        if(um=='1')
        {
            um=('O');
        }
        else
        {
        system("cls");
        printf("voce escolheu um numero ja escolhido, escolha de novo\n");
       sleep(1);
       goto playerTwoTurn;
        }
    }
    if(jogada==2)
    {
        if(dois=='2')
        {
            dois=('O');
        }
        else
        {
        system("cls");
        printf("voce escolheu um numero ja escolhido, escolha de novo\n");
       sleep(1);
       goto playerTwoTurn;
        }
    }
    if(jogada==3)
    {
        if(tres=='3')
        {
            tres=('O');
        }
        else
        {
        system("cls");
        printf("voce escolheu um numero ja escolhido, escolha de novo\n");
       sleep(1);
       goto playerTwoTurn;
        }
    }
    if(jogada==4)
    {
        if(quatro=='4')
        {
            quatro=('O');
        }
        else
        {
        system("cls");
        printf("voce escolheu um numero ja escolhido, escolha de novo\n");
       sleep(1);
       goto playerTwoTurn;
        }
    }
    if(jogada==5)
    {
        if(cinco=='5')
        {
            cinco=('O');
        }
        else
        {
        system("cls");
        printf("voce escolheu um numero ja escolhido, escolha de novo\n");
       sleep(1);
       goto playerTwoTurn;
        }
    }
    if(jogada==6)
    {
        if(seis=='6')
        {
            seis=('O');
        }
        else
        {
        system("cls");
        printf("voce escolheu um numero ja escolhido, escolha de novo\n");
       sleep(1);
       goto playerTwoTurn;
        }
    }
    if(jogada==7)
    {
        if(sete=='7')
        {
            sete=('O');
        }
        else
        {
        system("cls");
        printf("voce escolheu um numero ja escolhido, escolha de novo\n");
       sleep(1);
       goto playerTwoTurn;
        }
    }
    if(jogada==8)
    {
        if(oito=='8')
        {
            oito=('O');
        }
        else
        {
        system("cls");
        printf("voce escolheu um numero ja escolhido, escolha de novo\n");
       sleep(1);
       goto playerTwoTurn;
        }
    }
    if(jogada==9)
    {
        if(nove=='9')
        {
            nove=('O');
        }
        else
        {
        system("cls");
        printf("voce escolheu um numero ja escolhido, escolha de novo\n");
       sleep(1);
       goto playerTwoTurn;
        }
    }
    rodada++;
     system("cls");
        }



                        }
rodada++;
rodada++;

printf("   |   |   \n");
printf(" %c | %c | %c \n",um,dois,tres);
printf("___|___|___\n");

printf("   |   |   \n");
printf(" %c | %c | %c \n",quatro,cinco,seis);
printf("___|___|___\n");

printf("   |   |   \n");
printf(" %c | %c | %c \n",sete,oito,nove);
printf("   |   |   \n\n");

if(um==dois && dois==tres)
    {
        if(um=='X'){
        vencedor=1;
        }
        else{
         vencedor=2;
        }
    }
    if(quatro==cinco && cinco==seis)
    {
        if(quatro=='X'){
        vencedor=1;
        }
        else{
         vencedor=2;
        }
    }
    if(sete==oito && oito==nove)
    {
        if(sete=='X'){
        vencedor=1;
        }
        else{
         vencedor=2;
        }
    }
    if(um==quatro && quatro==sete)
    {
        if(um=='X'){
        vencedor=1;
        }
        else{
         vencedor=2;
        }
    }
    if(dois==cinco && cinco==oito)
    {
        if(cinco=='X'){
        vencedor=1;
        }
        else{
         vencedor=2;
        }
    }
    if(tres==seis && seis==nove)
    {
        if(tres=='X'){
        vencedor=1;
        }
        else{
         vencedor=2;
        }
    }
    if(um==cinco && cinco==nove)
    {
        if(um=='X'){
        vencedor=1;
        }
        else{
         vencedor=2;
        }
    }
    if(tres==cinco && cinco==sete)
    {
        if(tres=='X'){
        vencedor=1;
        }
        else{
         vencedor=2;
        }
    }

    if(vencedor>0)
    {
printf("-----------------------------------------------\n");
printf("-----------------------------------------------\n");
printf("-----------------------------------------------\n");
printf("        VENCEDOR FOI O JOGADOR %d !!! \n",vencedor);
printf("-----------------------------------------------\n");
printf("-----------------------------------------------\n");
printf("-----------------------------------------------\n");
    }
    else
    {
printf("-----------------------------------------------\n");
printf("-----------------------------------------------\n");
printf("-----------------------------------------------\n");
printf("          O JOGO ACABOU EM EMPATE              \n",vencedor);
printf("-----------------------------------------------\n");
printf("-----------------------------------------------\n");
printf("-----------------------------------------------\n");
    }


return 0;
}
