#include<stdio.h>

int main(int argc, char const *argv[])
{    //VARIAVEIS PARA CAMPO CADASTRAL DA CARTA 1
     /*algumas modificações, usei o tipo long long int na variavel pib, para que o valor em bilhoes seja integralmente digitado pelo ususario
     principalmente para que todos os calculos fossem o mais exatos possíveis*/
     char estado1;
     char codigocarta1[6];
     char nomecidade1[50];
     int populacao1;
     float area1;
     long long int pib1;//para que os numeros lidos pelo scanf sejam identicos aos digitados pelo usuario
     int pontotur1;
     float densdemo1;
     float rendper1;
     long long int superpower1;
     double densdinversa1;/*variavel criada para armazenar resultado do calculo de densidade populacional
                          inversa, tipo double foi usado dada a necessidade de alta precisao no resultado do calculo*/
     
     //VARIAVEIS PARA CAMPO CADASTRAL DA CARTA 2
     char estado2;
     char codigocarta2[6];
     char nomecidade2[50];
     int populacao2;
     float area2;
     long long int pib2;
     int pontotur2;
     float densdemo2;
     float rendper2;
     long long int superpower2;
     double densdinversa2; // variavel para calculo de densidade demografica inversa
     

     printf("********CADASTRO DAS CARTAS JOGO SUPER TRUNFO********\n");
     
     printf("\n");

     //CAMPOS CADASTRAIS DA CARTA 1
     printf("Entre com a letra de identificacao (de A ate H): ");
     scanf("%c",&estado1); //usei o modificador %c para caractere numa variavel tipo char sem array
     printf("Digite o codigo da carta: ");
     scanf("%4s",codigocarta1);
     printf("Entre com o nome da cidade: ");//só adicionei esse recurso porque estava dando muito estouro enquanto eu testava o codigo
     scanf(" %49[^\n]",nomecidade1); //para que possa ser digitado um nome composto com ate 49 caracteres antes da quebra
     printf("Qual o total de habitantes?: ");
     scanf("%d",&populacao1);
     printf("Qual a area(em km2)?: ");
     scanf("%f",&area1);
     printf("Qual o PIB? (digite o valor integral sem usar pontos ou vírgula): ");
     scanf("%lld",&pib1);
     printf("Quantos pontos turisticos existem nessa cidade?: ");
     scanf("%d",&pontotur1);
  
     while (getchar() != '\n');//limpeza de buffer caso contraraio os dois primeiros campos se concatenam e não épossivel digitat a letra para o Estado
     
     printf("\n");
     printf("******Pronto para cadastrar a segunda carta?******\n");
     printf("\n");
     
     //CAMPOS CADASTRAIS CARTA 2
     printf("Entre com a letra de identificacao (de A ate H): ");
     scanf("%c",&estado2); //usei o modificador %c para caractere
     printf("Digite o codigo da carta: ");
     scanf("%4s",codigocarta2);
     printf("Entre com o nome da cidade: ");//só adicionei esse recurso porque estava dando muito estouro enquanto eu testava o codigo
     scanf(" %49[^\n]",nomecidade2); //para que possa ser digitado um nome composto com ate 49 caracteres antes da quebra
     printf("Qual o total de habitantes?: ");
     scanf("%d",&populacao2);
     printf("Qual a area(em km2)?: ");
     scanf("%f",&area2);
     printf("Qual o PIB? (digite o valor integral sem usar pontos ou vírgula): ");
     scanf("%lld",&pib2);
     printf("Quantos pontos turisticos existem nessa cidade?: ");
     scanf("%d",&pontotur2);

     //CALCULO densidade demografica, densidade demografica inversa, pib per capita e superpoder da carta
     densdemo1 = (float) populacao1 / area1;
     densdinversa1 =(double) 1 / densdemo1;
     rendper1 = (float) pib1 / populacao1;//mesmo alterando pib1 para long long int usei um casting float por causa da natureza do resultado da operação
     superpower1= (long  long int) populacao1 + area1 + pib1 + pontotur1 + rendper1 + densdinversa1;
     
     //CALCULO densidade demografica, densidade demografica inversa, pib per capita e superpoder da carta
     densdemo2 = (float) populacao2 / area2;//calculo para densidade demografica
     densdinversa2 = (double) 1 / densdemo2;//calculo para densidade demografica inversa
     rendper2 = (float) pib2 / populacao2;//mesmo alterando pib2 para long long int usei o casting float por causa da narureza do resultado da operação
     superpower2 = (long long int) populacao2 + area2 + pib2 + pontotur2 + rendper2 + densdinversa2;// soma todos valores desses campos
    
    printf("\n");
    printf("******CONFIRA AS INFORMAÇÕES DIGITADAS!!******\n");
    printf("\n");
    
    //EXIBE AS INFORMAÇÕES CADASTRAIS DAS CARTAS 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigocarta1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %lld bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontotur1);
    printf("Densidade Demográfica: %.2f hab/km²\n", densdemo1);
    printf("Densidade Demografica inversa: %.8f\n",densdinversa1);
    printf("Renda Per Capita: R$ %.2f\n", rendper1);
    printf("SUPER PODER: %lld\n", superpower1);
    
    //EXIBE AS INFORMAÇÕES CADASTRAIS DA CARTA 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigocarta2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %lld bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontotur2);
    printf("Densidade Demográfica: %.2f hab/km²\n", densdemo2);
    printf("Densidade Demografica inversa: %.8f\n",densdinversa2);
    printf("Renda Per Capita: R$ %.2f\n", rendper2);
    printf("SUPER PODER: %lld\n", superpower2);
    
    while (getchar() != '\n');
    printf("\n");

    printf("\n");

    //COMPARAÇÃO ENTRE OS DADOS DAS CARTAS SEGUNDO AS REGRAS DO JOGO SUPER TRUNFO
    printf("Comparacao entre os atributos das cartas: Resultado = 1 Carta1 vence! Resultado = 0 Carta2 vence!\n");
    printf("\n");
    
    printf("Populacao Resultado = %d\n",populacao1 > populacao2);
    
    printf("Area Resultado = %d\n",area1 > area2);

    printf("PIB Resultado = %d\n",pib1 > pib2);

    printf("Pontos Turisticos Resultado = %d\n",pontotur1 > pontotur2);

    printf("Densidade Demografica Inversa Resultado = %d\n", densdinversa1 < densdinversa2);//usado aqui o operador menor para verificar a o menor valor entre esses atributos
    
    printf("PIB per Capita Resultado = %d\n",rendper1 > rendper2);

    printf("SUPER PODER!! Resultado = %d\n", superpower1 > superpower2);
    
    
    printf("\n");
    
    printf("\n");
    printf("******Escolha, Compare e Vença!******");
    printf("\n");
    printf("            SUPER TRUNFO      \n");
    return 0;
}