#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>

int main(){
    setlocale(LC_ALL , "portuguese");

    char nome[5][200];
    int i;
    int idade[6];
    int idadeMaior = 0;
    int idadeMenor = 999999999;
    int opcoes;
    float peso[6];
    float altura[6];
    float pesoBaixo = 999999999;
    float pesoAlto = 0;
    float alturaBaixa = 999999999;
    float alturaAlta = 0;

    printf("À baixo insira o nome, idade, peso e altura de cada pessoa.");
    printf("\n\n");
    sleep(1);

    for ( i = 1; i <= 5; i++)
    {  
        printf("%dº PESSOA:\n", i + 0);
        printf("\n");
        printf("Insira seu nome: ");
        gets(nome[i]);

        printf("Insira sua idade: ");
        scanf("%d" ,&idade[i]);

        printf("Insira seu peso: ");
        scanf("%f" ,&peso[i]);

        printf("Insira sua altura: ");
        scanf("%f" ,&altura[i]);

        system("cls");

        printf("\n\n");

        pesoAlto = pesoAlto > peso[i] ? pesoAlto : peso[i];
        pesoBaixo = pesoBaixo < peso[i] ? pesoBaixo : peso[i];

        alturaAlta = alturaAlta > altura[i] ? alturaAlta : altura[i];
        alturaBaixa = alturaBaixa < altura[i] ? alturaBaixa : altura[i];

        idadeMaior = idadeMaior > idade[i] ? idadeMaior : idade[i];
        idadeMenor = idadeMenor < idade[i] ? idadeMenor : idade[i];

        fflush(stdin);    
    }

    system("cls");

    printf("Informações: ");
    printf("\n\n");

    for ( i = 1; i <= 5; i++)
    { 
        printf("%dº Nome: %s \n" ,i ,nome[i]);
        printf("%dº idade: %d\n" ,i ,idade[i]);
        printf("%dº informação do peso: %.2f \n" ,i ,peso[i]);        
        printf("%dº informação da altura: %.2f\n\n" ,i ,altura[i]);
    }

    printf("Gostaria de prosseguir com o programação?\n");
    printf("1 - Sim\n");
    printf("2 - Não\n");
    scanf("%d", &opcoes);

    system("cls");

    switch (opcoes)
    {
    case 1 :
       for ( i = 1; i <= 5; i++)
    {
         if (peso[i] == pesoAlto)
        {
            printf("\nNome: %s \n" ,nome[i]);
            printf("Maior Peso: %.1f kg \n" ,pesoAlto);
        }
         else if(peso[i] == pesoBaixo)
        {
            printf("\nNome: %s \n" ,nome[i]);
            printf("Menor Peso: %.1f kg \n" ,pesoBaixo);
        }

        if (altura[i] == alturaAlta)
        {   
            printf("\nNome: %s \n " ,nome[i]);
            printf("Maior Altura: %.2f cm \n" ,alturaAlta);
        }
        else if(altura[i] == alturaBaixa)
        {
            printf("\nNome: %s \n" ,nome[i]);
            printf("Menor Altura: %.2f cm \n" ,alturaBaixa); 
        }

        if (idade[i] == idadeMaior)
        {
            printf("\nNome: %s \n" ,nome[i]);
            printf("Maior Idade: %d \n" ,idadeMaior);
        }
        else if (idade[i] == idadeMenor)
        {
            printf("\nNome: -%s- \n " ,nome[i]);
            printf("Menor Idade: %d \n" ,idadeMenor);
        }    
    }
        break;
    
    case 2 :
        return 0;
        break;
    }
    
    return 0;
}