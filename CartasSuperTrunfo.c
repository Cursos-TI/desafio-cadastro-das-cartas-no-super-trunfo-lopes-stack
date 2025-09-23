#include <stdio.h>

int main(){
/* Declaração das variáveis */
char carta [10];          /* Nome da carta */
char estado [20];       /* Nome do estado*/
char cidade [20];      /* Nome da cidade*/
char codigo [5];       /*Codigo da carta*/
int populacao;        /*Numero de habitantes*/
float area;              /* Area em(km²)*/
float pib;               /*pib da cidade*/
int ponto;            /*Numero de pontos turisticos*/
          
/* Entrada de dados do usuário */
printf("Digite sua carta: \n");
scanf("%s" , carta);
                      
printf("Qual seu estado?: \n");
scanf("%s" , estado);
                                  
printf("Digite o nome da cidade: \n");
scanf("%s" , cidade);
                                              
printf("Diga seu código: \n");
scanf("%s" , codigo);
                                                          
printf("Qual a população da sua cidade?: \n");
scanf("%d" , &populacao);

printf("Qual sua área?:  \n");
scanf("%f", &area);
                                                                                  
printf("Digite seu pib: \n");
scanf("%f" ,&pib);
                                                                                              
printf("Há quantos pontos turísticos?: \n");
scanf("%d" , &ponto);
                                                                                                       
  /* Exibição das informações cadastradas */  
printf("Carta: %s\n" , carta);
printf("Estado: %s\n" , estado);
printf("Cidade: %s\n" , cidade);
printf("Código: %s\n" , codigo);
printf("População: %d habitantes\n" , populacao);
printf("Área: %.3f km²\n" , area);
printf("PIB: %.1f Bilhões'\n" , pib);
printf("Número de Pontos Turísticos: %d\n" , ponto);
                                                                                                                
  /* Entrada de dados do usuário */
printf("Digite sua carta: \n");
scanf("%s", carta);

printf("Qual seu estado?: \n"); 
scanf("%s", estado);

printf("Digite o nome da cidade: \n"); 
scanf("%s", cidade);

printf("Diga seu código: \n"); 
scanf("%s", codigo);

printf("Qual a população da sua cidade?: \n"); 
scanf("%d", &populacao);

printf("Qual sua área?: \n"); 
scanf("%f", &area);

printf("Digite seu pib: \n");
scanf("%f",&pib);

printf("Há quantos pontos turísticos?: \n");
scanf("%d", &ponto);

  /* Exibição das informações cadastradas */
printf("Carta: %s\n", carta);
printf("Estado: %s\n", estado);
printf("Cidade: %s\n", cidade);
printf("Código: %s\n", codigo);
printf("População: %d habitantes\n", populacao);
printf("Área: %.1f km²\n", area);
printf("PIB: %.2f Bilhões\n", pib);
printf("Número de Pontos Turísticos: %d\n", ponto);
                                                                                                                                   
 return 0;
}