#include <ctype.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

//Funcao para o inicio do programa
void enunciado()
{
    int i;
    char apresentacao_inicial_linha_1[]="SEJA BEM-VINDO AO JOGO ANAGRAMA!!!";
    char apresentacao_inicial_linha_2[]="Para iniciar pressione qualquer tecla";
    char apresentacao_inicial_linha_3[]="Jogo anagrama é um jogo criado para um trabalho em grupo da faculdade, consistindo\n\t\t\t em desenvolver e melhorar as habilidades em C";
    char apresentacao_inicial_linha_4[]="Grupo:";
    char apresentacao_inicial_linha_5_grupo_1[]="Daniela Akemi Hayashi";
    char apresentacao_inicial_linha_5_grupo_2[]="Felipe Yabiko Nogueira";
    char apresentacao_inicial_linha_5_grupo_3[]="Giovana Salazar Alarcon";
    char apresentacao_inicial_linha_5_grupo_4[]="João Victor Rokemback Tápparo";

    //Logo do projeto em ascii
    printf("\t\t\t\t\t                     .::.\n");
    printf("\t\t\t\t\t                  .:'  .:\n");
    printf("\t\t\t\t\t        ,MMM8&&&.:'   .:'\n");
    printf("\t\t\t\t\t       MMMMM88&&&&  .:'\n");
    printf("\t\t\t\t\t      MMMMM88&&&&&&:'\n");
    printf("\t\t\t\t\t      MMMMM88&&&&&&\n");
    printf("\t\t\t\t\t    .:MMMMM88&&&&&&\n");
    printf("\t\t\t\t\t  .:'  MMMMM88&&&&\n");
    printf("\t\t\t\t\t.:'   .:'MMM8&&&'\n");
    printf("\t\t\t\t\t:'  .:'\n");
    printf("\t\t\t\t\t'::'\n");

    //Apresentacao do jogo
    printf("\n\n\n\t\t\t\t    ");
    exibir_palavras_digitando(apresentacao_inicial_linha_1);
    tempo_da_troca_de_linha();
    printf("\n\n\n\t\t\t\t   ");
    exibir_palavras_digitando(apresentacao_inicial_linha_2);
    tempo_da_troca_de_linha();
    while(!kbhit());

    //Explicacao sobre o jogo
    system("cls");
    printf("\n\n\n\n\t\t\t", setlocale(LC_ALL, "Portuguese"));
    exibir_palavras_digitando(apresentacao_inicial_linha_3);
    tempo_da_troca_de_linha();

    //Grupo
    printf("\n\n\n\t");
    exibir_palavras_digitando(apresentacao_inicial_linha_4);
    tempo_da_troca_de_linha();

    //Membros do grupo em order alfabetica
    printf("\n\n\t", setlocale(LC_ALL, "Portuguese"));
    exibir_palavras_digitando(apresentacao_inicial_linha_5_grupo_1);
    tempo_da_troca_de_linha();

    printf("\n\n\t", setlocale(LC_ALL, "Portuguese"));
    exibir_palavras_digitando(apresentacao_inicial_linha_5_grupo_2);
    tempo_da_troca_de_linha();

    printf("\n\n\t", setlocale(LC_ALL, "Portuguese"));
    exibir_palavras_digitando(apresentacao_inicial_linha_5_grupo_3);
    tempo_da_troca_de_linha();

    printf("\n\n\t", setlocale(LC_ALL, "Portuguese"));
    exibir_palavras_digitando(apresentacao_inicial_linha_5_grupo_4);
    tempo_da_troca_de_linha();
}

//Funcao de tempo
void tempo()
{
    int i;
    for(i=0;i<12000000;i++);
}

//Funcao para defenir o tempo que demora para passar de uma frase para outra
void tempo_da_troca_de_linha()
{
    int i;
    for(i=0;i<40;i++)
    {
        tempo();
    }
}

//Funcao que faz as palavras parecerem que estao sendo digitadas ao em vez de so aparecer na tela
exibir_palavras_digitando(char j[])
{
    int i=0;
    while(j[i]!='\0')
    {
        printf("%c",j[i]);
        tempo();
        i++;
    }
}

void carregando()
{
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t  Carregando");
    sleep(1);
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t  Carregando.");
    sleep(1);
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t  Carregando..");
    sleep(1);
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t  Carregando...");
    sleep(1);
    system("cls");
}

int menu()
{
    int escolha_do_menu;
    printf("\n\n\n\n\n\t\t\t\t\t   ESCOLHA O NIVEL DE DIFICULDADE");
    printf("\n\n\t\t\t\t\t\t (1) >> Facil");
    printf("\n\n\t\t\t\t\t\t (2) >> Intermediario");
    printf("\n\n\t\t\t\t\t\t (3) >> Dificil");
    printf("\n\n\t\t\t\t\t\t (4) >> Sair");

    getch();
    do
    {
        printf("\n\n\n\n\n\t\t\t\t\t >>> Escolha: ");
        fflush(stdin);
        scanf("%d", &escolha_do_menu);
    }
    while (escolha_do_menu < 1 || escolha_do_menu > 4);
    carregando();
    switch (escolha_do_menu)
    {
    case 1: return 0;
    case 2: return 1;
    case 3: return 2;
    case 4: return 3;
    }
}

void letras_facil(int acertos, int erros, char bancodeacertos[])
{
    printf("\n     TEMA: ANIMAIS \n");
    printf("\n\t\t       Quadro de Palavras \n");

    char letras[4][5] = {{'A', 'L', 'E', 'R', 'O'},
        {'P', 'I', 'G', 'O', 'A'},
        {'A', 'E', 'C', 'V', 'H'},
        {'T', 'R', 'B', 'E', 'C'}
    };

    for (int i = 0; i < 4; i++)
    {
        printf("\n\t\t\t");
        for (int j = 0; j < 5; j++)
            printf("%2c ", letras[i][j]);
    }
}

void letras_medio(int acertos, int erros, char bancodeacertos[])
{
    printf("\n     TEMA: FLORES \n");
    printf("\n\t\t       Quadro de Palavras \n");

    char letras[5][5] = {{'A', 'I', 'S', 'G', 'R'},
        {'L', 'T', 'E', 'B', 'N'},
        {'U', 'A', 'V', 'H', 'S'},
        {'I', 'C', 'M', 'R', 'P'},
        {'O', 'A', 'C', 'D', 'E'}
    };

    for (int i = 0; i < 5; i++)
    {
        printf("\n\t\t\t");
        for (int j = 0; j < 5; j++)
            printf("%2c ", letras[i][j]);
    }
}

void letras_dificil(int acertos, int erros, char bancodeacertos[])
{
    printf("\n     >TEMA: VERBOS NO PASSADO (ENG)\n");
    printf("\n\t\t       Quadro de Palavras \n");

    char letras[5][5] = {{'S', 'I', 'E', 'K', 'F'},
        {'G', 'T', 'U', 'H', 'C'},
        {'R', 'S', 'T', 'V', 'W'},
        {'D', 'L', 'N', 'D', 'O'},
        {'P', 'A', 'B', 'E', 'R'}
    };

    for (int i = 0; i < 5; i++)
    {
        printf("\n\t\t\t");
        for (int j = 0; j < 5; j++)
            printf("%2c ", letras[i][j]);
    }
}

void cabecalhofinal(int acertos, int numerospalavras, char bancodeacertos[], int erros, int errostotal)
{
    printf("\n\n     >>> Acertos (%d de %d) e Erros (%d de %d)", acertos, numerospalavras, erros, errostotal);
    printf("\n\n >> %s", bancodeacertos);
}

void cabecalho(int numerospalavras, int errostotal)
{
    setlocale(LC_ALL, NULL);
    printf("\n========================================================================\n");
    printf("\n\t\t\t  JOGO ANAGRAMA");
    printf("\n     Regras:");
    printf("\n\t    > Forme palavras com as letras do quadro");
    printf("\n\t    > Total de %d palavras", numerospalavras);
    printf("\n\t    > %d tentativas erradas o jogo termina", errostotal);
    printf("\n\t    > Digite sem acento");
    printf("\n========================================================================\n");
}

int *validacao(char *palavra)
{
    char *pc;

    pc = palavra;
    while (*pc != '\0')
    {
        if (isalpha(*pc))
            pc++;
        else
            return 1;
    }
    return 0;
}

char *digite_palavra(int acertos,int erros,char bancodeacertos[], int escolha, int numerospalavra, int errostotal)
{
    int *valida;
    char *palavra, palavraerro;
    int i = 0;

    palavraerro='\0';
    palavra = NULL;
    fflush(stdin);
    do
    {
        if ((palavra = (char *)realloc(palavra, (i + 1) * sizeof(char))) == NULL)
            exit(1);
        scanf("%c", &palavra[i]);
        if(palavra[i]=='0')
            sair(acertos,erros,bancodeacertos,escolha,numerospalavra,errostotal);
        palavra[i]=toupper(palavra[i]);
    }
    while (palavra[i++] != '\n');
    palavra[i - 1] = '\0';

    valida = validacao(palavra);

    if (valida!=0)
    {
        printf("ERRO! DIGITE APENAS LETRAS!\n >>");
        palavra=digite_palavra(acertos,erros,bancodeacertos, escolha, numerospalavra, errostotal);
    }
    return palavra;
}

int verificacao_bancodepalavras(char *palavra, int escolha)
{
    char *sub;

    char bancopalavrasfacil[] =
        "BOI CAPIVARA TIGRE ARARA PATO OVELHA CACHORRO LEAO LOBO GORILA "
        "GATO VACA ABELHA RATO CAVALO GALO COELHO COALA COBRA PORCO ";

    char bancopalavrasmedio[] =
        "TULIPA ROSA CACTO DALIA GIRASSOL MARGARIDA BEGONIA ALPINA GENEBRA HELICONIA "
        "HORTENCIA BROMELIA CRISANTEMO GARDENIA VIOLETA NARCISO HIBISCO LAVANDA LIRIO PETUNIA "
        "PORTULACA AMARILIS ANTURIO SARDINHEIRA CRAVO LISIANTO PEONIA ALSTROEMERIA MAGNOLIA MADRESSILVA";

    char bancopalavrasdificil[] =
        "BIDDEN BROUGHT BLOWN CLUNG CREPT DWELT FLUNG HOVE HEWN KNIT "
        "LEARNT SHONE SHRUNK SUNK SOWN SPRUNG STREWN THRIVEN THRUST "
        "TRODDEN WOVEN WRUNG WEPT DRUNK SEEN READ FLOWN GUESSED WORRIED BORN";

    if(escolha==0)
        sub = strtok(bancopalavrasfacil, " .,");
    if(escolha==1)
        sub = strtok(bancopalavrasmedio, " .,");
    if(escolha==2)
        sub = strtok(bancopalavrasdificil, " .,");

    while (sub != NULL)
    {
        if (stricmp(sub, palavra) == 0)
            return 1; // 1 = Existe a palavra no banco de palavras
        sub = strtok(NULL, " .,");
    }
    return 0; // 0 = Não existe a palavra no banco de palavras
}

int banco_de_acertos(char *palavra,char bancodeacertos[])
{
    char *sub = strstr(bancodeacertos,palavra);

    if (sub != NULL) // Palavra encontrada
        return 1;
    else // Palavra não encontrada
        return 0;
}

void exibir_respostasfacil(int acertos, int erros, char bancodeacertos[], int numerospalavras, int errostotal)
{
    char banco1[]=" BOI         CAPIVARA       TIGRE         ARARA          PATO";
    char banco2[]=" LEAO        CACHORRO       LOBO          GORILA         GATO";
    char banco3[]=" ABELHA      RATO           CAVALO        GALO           COELHO";
    char banco4[]=" COBRA       PORCO          COALA         VACA           OVELHA";

    cabecalho(numerospalavras, errostotal);
    letras_facil(acertos, erros, bancodeacertos);
    printf("\n\n\t\t       BANCO DE PALAVRAS\n");
    printf("\n %s\n %s\n %s\n %s\n\n", banco1, banco2, banco3, banco4);

}

void exibir_respostasmedio(int acertos, int erros, char bancodeacertos[], int numerospalavras, int errostotal)
{
    char banco1[]="TULIPA        ROSA          CACTO          DALIA            GIRASSOL";
    char banco2[]="HORTENCIA     BROMELIA      CRAVO          GARDENIA         VIOLETA";
    char banco3[]="PORTULACA     AMARILIS      ANTURIO        SARDINHEIRA      CRISANTEMO";
    char banco4[]="BEGONIA       ALPINA        GENEBRA        HELICONIA        HIBISCO";
    char banco5[]="LIRIO         PETUNIA       PEONIA         ALSTROEMERIA     MAGNOLIA";
    char banco6[]="MARGARIDA     NARCISO       LISIANTO       LAVANDA          MADRESSILVA";

    cabecalho(numerospalavras, errostotal);
    letras_medio(acertos, erros, bancodeacertos);
    printf("\n\n\t\t       BANCO DE PALAVRAS\n");
    printf("\n %s\n %s\n %s\n %s\n %s\n %s\n\n", banco1, banco2, banco3, banco4, banco5, banco6);

}

void exibir_respostasdificil(int acertos, int erros, char bancodeacertos[], int numerospalavras, int errostotal)
{
    char banco1[]="BIDDEN     BROUGHT      BLOWN      CLUNG        CREPT       DWELT";
    char banco2[]="FLUNG      HOVE         HEWN       KNIT         LEARNT      SHONE";
    char banco3[]="SHRUNK     SUNK         SOWN       SPRUNG       STREWN      THRIVEN ";
    char banco4[]="THRUST     TRODDEN      WOVEN      WRUNG        WEPT        DRUNK";
    char banco5[]="SEEN       READ         FLOWN      GUESSED      WORRIED     BORN";

    cabecalho(numerospalavras, errostotal);
    letras_dificil(acertos, erros, bancodeacertos);
    printf("\n\n\t\t       BANCO DE PALAVRAS\n");
    printf("\n %s\n %s\n %s\n %s\n %s\n\n", banco1, banco2, banco3, banco4, banco5);

}

void mudacor(int cor)
{
    HANDLE Saida;
    Saida = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(Saida,cor);
}

void parabensfacil()
{
    mudacor(11);
    system("cls");
    printf("\t\t\t\t\t\t     PARABENS!!!      \n",  setlocale(LC_ALL, "Portuguese") );
    printf("\t\t\t\t\t\t Você acertou todos       \n",setlocale(LC_ALL, "Portuguese") );
    printf("\t\t\t\t\t\t os animais listados \n",setlocale(LC_ALL,"Portuguese") );
    sleep(4);

    mudacor(15);
    system("cls");
}

void parabensmedio()
{
    mudacor(10);
    system("cls");
    printf("\t\t\t\t\t\t     PARABENS!!!      \n",  setlocale(LC_ALL, "Portuguese") );
    printf("\t\t\t\t\t\t Você acertou todas       \n",setlocale(LC_ALL, "Portuguese") );
    printf("\t\t\t\t\t\t as flores listadas \n",setlocale(LC_ALL,"Portuguese") );
    sleep(4);

    mudacor(15);
    system("cls");
}

void parabensdificil()
{
    mudacor(1);
    system("cls");
    printf("\t\t\t\t\t\t     PARABENS!!!      \n",  setlocale(LC_ALL, "Portuguese") );
    printf("\t\t\t\t\t\t Você acertou todos       \n",setlocale(LC_ALL, "Portuguese") );
    printf("\t\t\t\t\t\t os verbos em inglês\n",setlocale(LC_ALL,"Portuguese") );
    sleep(4);

    mudacor(15);
    system("cls");
}

void sair(int acertos, int erros, int bancodeacertos[], int escolha, int numerospalavras, int errostotal)
{
    char ver_banco_de_palavras;
    system("cls");
    cabecalho(numerospalavras,errostotal);

    if(escolha==0)
        letras_facil(acertos, erros, bancodeacertos);
    if(escolha==1)
        letras_medio(acertos, erros, bancodeacertos);
    if(escolha==2)
        letras_dificil(acertos, erros, bancodeacertos);

    cabecalhofinal(acertos, numerospalavras, bancodeacertos, erros, errostotal);

    printf("\n\nVoce teve %d ACERTOS e %d ERROS\n", acertos, erros);
    if(escolha==0)
        if(acertos==20)
            parabensfacil();
    if(escolha==1)
        if(acertos==30)
            parabensmedio();
    if(escolha==2)
        if(acertos==30)
            parabensdificil();
    printf("\nVoce deseja ver o banco de palavras?\n");
    do
    {
        fflush(stdin);
        printf("s/n: ");
        scanf("%c", &ver_banco_de_palavras);
        ver_banco_de_palavras = toupper(ver_banco_de_palavras);

    }
    while(ver_banco_de_palavras != 'S' && ver_banco_de_palavras != 'N');

    if (ver_banco_de_palavras == 'S')
    {
        system("cls");
        if(escolha==0)
            exibir_respostasfacil(acertos,erros,bancodeacertos,numerospalavras,errostotal);
        if(escolha==1)
            exibir_respostasmedio(acertos,erros,bancodeacertos,numerospalavras,errostotal);
        if(escolha==2)
            exibir_respostasdificil(acertos,erros,bancodeacertos,numerospalavras,errostotal);
    }

    exit(0);
}

int main()
{
    char *palavra;
    int banco, acertos, erros, bancoA, escolha, numerospalavras, errostotal;
    char bancodeacertos[500], ver_banco_de_palavras;

    bancodeacertos[0]='\0';

    enunciado();
    system("cls");
    acertos = erros = numerospalavras = errostotal = 0;
    escolha=menu();
    if(escolha==0)
    {
        while(erros != 10 && acertos != 20)
        {
            system("cls");
            numerospalavras=20;
            errostotal=10;
            escolha=0;
            cabecalho(numerospalavras, errostotal);
            letras_facil(acertos, erros, bancodeacertos);
            cabecalhofinal(acertos, numerospalavras, bancodeacertos, erros, errostotal);
            printf("\n\n     Para Encerrar - tecle '0'");
            printf("\n\n >>");
            palavra = digite_palavra(acertos,erros,bancodeacertos,escolha,numerospalavras,errostotal);
            banco = verificacao_bancodepalavras(palavra, escolha);
            if (banco == 1)
            {
                bancoA = banco_de_acertos(palavra,bancodeacertos);
                if (bancoA == 0)
                {
                    strcat(bancodeacertos, palavra);
                    strcat(bancodeacertos, " ");
                    sleep(1);
                    acertos++;
                }
                else
                {
                    printf("\nA palavra ja foi digitada!");
                    sleep(1);
                }
            }
            else
            {
                printf("\nPalavra nao encontrada no banco de palavras!");
                sleep(1);
                erros++;
            }
        }
        sair(acertos,erros,bancodeacertos,escolha,numerospalavras,errostotal);
    }
    if(escolha==1)
    {
        while(erros != 5 && acertos != 30)
        {
            system("cls");
            numerospalavras=30;
            errostotal=5;
            cabecalho(numerospalavras, errostotal);
            letras_medio(acertos, erros, bancodeacertos);
            cabecalhofinal(acertos, numerospalavras, bancodeacertos, erros, errostotal);
            printf("\n\n     Para Encerrar - tecle '0'");
            printf("\n\n >>");
            palavra = digite_palavra(acertos,erros,bancodeacertos,escolha,numerospalavras,errostotal);
            banco =  verificacao_bancodepalavras(palavra, escolha);

            if (banco == 1)
            {
                bancoA = banco_de_acertos(palavra,bancodeacertos);
                if (bancoA == 0)
                {
                    strcat(bancodeacertos, palavra);
                    strcat(bancodeacertos, " ");
                    sleep(1);
                    acertos++;
                }
                else
                {
                    printf("\nA palavra ja foi digitada!");
                    sleep(1);
                }
            }
            else
            {
                printf("\nPalavra nao encontrada no banco de palavras!");
                sleep(1);
                erros++;
            }
        }
        sair(acertos,erros,bancodeacertos,escolha,numerospalavras,errostotal);
    }
    if(escolha==2)
    {
        while(erros != 3 && acertos != 30)
        {
            system("cls");
            numerospalavras=30;
            errostotal=3;
            cabecalho(numerospalavras, errostotal);
            letras_dificil(acertos, erros, bancodeacertos);
            cabecalhofinal(acertos, numerospalavras, bancodeacertos, erros, errostotal);
            printf("\n\n     Para Encerrar - tecle '0'");
            printf("\n\n >>");
            palavra = digite_palavra(acertos,erros,bancodeacertos,escolha,numerospalavras,errostotal);
            banco = verificacao_bancodepalavras(palavra, escolha);

            if (banco == 1)
            {
                bancoA = banco_de_acertos(palavra,bancodeacertos);
                if (bancoA == 0)
                {
                    strcat(bancodeacertos, palavra);
                    strcat(bancodeacertos, " ");
                    sleep(1);
                    acertos++;
                }
                else
                {
                    printf("\nA palavra ja foi digitada!");
                    sleep(1);
                }
            }
            else
            {
                printf("\nPalavra nao encontrada no banco de palavras!");
                sleep(1);
                erros++;
            }
        }
        sair(acertos,erros,bancodeacertos,escolha,numerospalavras,errostotal);
    }
    free(palavra);
    return 0;
}
