#include <stdio.h>

int main(){

       ///VARIÁVEIS
       char Estado, Estado2;
       char codigo_carta[50], codigo_carta2[50];
       char nome_cidade[50], nome_cidade2[50];
       int  populacao, ponto_turismo, populacao2, ponto_turismo2;
       float area, area2, pib, pib2;
   
       /// ENTRADA DE DADOS CARTA 1
       
       /// Estado
       printf("Digite o Estado da Primeira Carta: \n");
       scanf("%s", &Estado);
   
       /// Codigo da Carta
       printf("Digite o primeiro código da carta: \n");
       scanf("%s", codigo_carta);
       
       /// Nome da Cidade
       printf("Digite o nome da primeira cidade: \n");
       fgets(nome_cidade, sizeof(nome_cidade), stdin);
   
       /// População
       printf("Digite a população da primeira cidade: \n");
       scanf("%d", &populacao);
       
       ///Ponto de Turismo
       printf("Digite quantos pontos turísticos a primeira cidade vai ter: \n") ;
       scanf("%d", &ponto_turismo);
   
       ///Área da cidade
       printf("Digite quantos km vai ter a primeira cidade: \n");
       scanf("%f", &area);
   
       ///Pib
       printf("Digite o pib da primeira cidade: \n");
       scanf("%f", &pib);
   
   
   
       //// ENTRADA DE DADOS CARTA 2
       printf("Digite o Estado da Segunda Carta: \n");
       scanf("%s", &Estado2);
   
       printf("Digite o segundo código da carta: \n");
       scanf("%s", codigo_carta2);
   
       printf("Digite o nome da segunda cidade: \n");
       fgets(nome_cidade2, sizeof(nome_cidade2), stdin);
   
       printf("Digite a população da segunda cidade: \n");
       scanf("%d", &populacao2);
   
       printf("Digite quantos pontos turísticos a segunda cidade vai ter: \n") ;
       scanf("%d", &ponto_turismo2);
   
       printf("Digite quantos km vai ter a segunda cidade: \n");
       scanf("%f", &area2);
   
       printf("Digite o pib da segunda cidade: \n");
       scanf("%f", &pib2);
   
   
       ///Informações da Carta 1
       printf("\n=== Carta 1 ===\n");
       printf("Estado: %s \n", Estado);
       printf("Codigo da Carta: %s \n", codigo_carta);
       printf("Nome da Cidade: %s \n", nome_cidade);
       printf("População: %d \n", populacao);
       printf("Pontos Turísticos: %d \n", ponto_turismo);
       printf("Área da Cidade: %f km²\n", area);
       printf("Pib: %f bilhões de reais\n", pib);
   
       /// CARTA 2
       
       printf("\n=== Carta 2 ===\n");
       printf("Estado: %s \n", Estado2);
       printf("Codigo da Carta: %s \n", codigo_carta2);
       printf("Nome da Cidade: %s \n", nome_cidade2);
       printf("População: %d \n", populacao2);
       printf("Pontos Turísticos: %d \n", ponto_turismo2);
       printf("Área da Cidade: %f km²\n", area2);
       printf("Pib: %f bilhões de reais\n", pib2);
   
   
       return 0;

}