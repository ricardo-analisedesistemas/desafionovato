#include <stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char idcarta[2]= "";//foi preferencia pessoal referenciar essa variavel ESTADO a um ID atribuido ao  campo ESTADO de cada carta cadastrada
    char codcarta[5]= "";
    char nomecidade[40];
    int  pop;
    float area;
    float pib;
    int ponttur;

    printf("***************************************\n");
    printf("CADASTRO PARA CARTAS JOGO SUPER TRUNFO\n");
    
       printf("Digite o ID da Carta: ");
       scanf("%1s",idcarta);
              
       printf("Digite o Codigo da Carta: ");
                                            
       scanf("%4s",codcarta);
       while (getchar() != '\n');//para limpar buffer antes da inicilização da var nomecidade
                                 //caso contrario  o printf a seguir nao aparece como proxima opção a ser digitada pelo usuário
       printf("Qual o nome da cidade?: ");
       fgets(nomecidade, sizeof(nomecidade), stdin); //foi usado porque o desafio mostrou como exemplo de resultado de saída de dados "Nome da cidade" com string composta
       nomecidade[strcspn(nomecidade, "\n")] = '\0'; //comando colocado para que o sistema não de um espaço muito grande entre o campo atual e o proximo, a fim de que seja mostrada ao usuario linha a linha a informação
       
       printf("Qual o numero total de habitantes?: ");
       scanf("%d",&pop);
       
       printf("Qual a extensao territorial?: ");
       scanf("%f",&area);
       
       printf("Qual o PIB em Bilhoes de Reais?: ");
       scanf("%f",&pib); 
       
       printf("Quantos pontos turisticos ha?: ");
       scanf("%d",&ponttur);
      
    printf("**********************************************\n");

         printf("ID-ESTADO: %s \n",idcarta);
         printf("Codigo da Carta: %s\n",codcarta);
         printf("Cidade: %s\n",nomecidade);
         printf("Populacao: %d habitantes\n",pop);
         printf("Extensao Territorial: %.2fkm2\n",area);
         printf("PIB: R$ %.2f Bilhoes\n",pib);
         printf("Total de pontos turisticos: %d\n",ponttur);
        
    printf("**********************************************\n");   
    printf("  CADASTRO DA CARTA EFETUADO COM SUCESSO ! ");
    return 0;
}
