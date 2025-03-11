#include <stdio.h>

int main() {
   
printf("Cadastro de cartas do Supertrunfo: \n");
    
    char estado[50]= "SP";
    char codigoEstado [10]="A1";
    char NomeCidade [50]="Fortaleza";
    int população = 200000;
    float PIB = 120000.00;
    int PontoTuristico = 35;
    float area=1000.00;  
    float DensidadePopulacional=0.00;
    float PibPerCapita=0.00;


    float divisão1, divisão2; 


    printf ("Digite as informações da sua carta 01: \n");
    
    printf ("Digite o Nome da cidade: \n", NomeCidade);
    scanf ("%s", &NomeCidade);

    printf("Digite o nome do estado: \n",estado);
    scanf("%s", &estado);

    printf ("Digite o codigo do estado: \n", codigoEstado);
    scanf ("%s", &codigoEstado);

    printf ("Digite o numero populacional: \n", população);
    scanf ("%d", &população);


    printf ("Digite o PIB do seu estado: \n", PIB);
    scanf ("%i", &PIB);

    printf ("Digite a quantidade de pontos turisticos da sua carta: \n", PontoTuristico);
    scanf ("%d", &PontoTuristico);
    
    divisão1= população/ area;
    divisão2= PIB/população;



    printf ("Carta 1: \n");
    printf("Nome da cidade: %s \n", NomeCidade);
    printf ("Estado: %s \n", estado);
    printf("Codigo do Estado: %s \n", codigoEstado);
    printf("População: %d \n", população);
    printf("PIB: bilhões de reais %f \n", PIB);
    printf("A area da sua cidade é de: %.2f km² \n", area);
    printf("Quantidade de Pontos Turisticos: %d \n", PontoTuristico);
    printf("Densidade Populacional: hab/km² %.2f \n", divisão1);
    printf("PIB per Capita: reais %.2f \n", divisão2);



    printf ("Digite as informações da sua carta 02: \n");
    
    printf ("Digite o Nome da cidade: \n", NomeCidade);
    scanf ("%s", &NomeCidade);

    printf("Digite o nome do estado: \n",estado);
    scanf("%s", &estado);

    printf ("Digite o codigo do estado: \n", codigoEstado);
    scanf ("%s", &codigoEstado);

    printf ("Digite o numero populacional: \n", população);
    scanf ("%d", &população);

    printf ("Digite o PIB do seu estado: \n", PIB);
    scanf ("%i", &PIB);

    printf ("Digite a área da cidade: \n", area);
     scanf ( "%f", &area);

    printf ("Digite a quantidade de pontos turisticos da sua carta: \n", PontoTuristico);
    scanf ("%d", &PontoTuristico);

    divisão1= população/ area;
    divisão2= PIB/população;



    printf ("Carta 2: \n");
    printf("Nome da cidade: %s \n", NomeCidade);
    printf ("Estado: %s \n", estado);
    printf("Codigo do Estado: %s \n", codigoEstado);
    printf("População: %d \n", população);
    printf("PIB: bilhões de reais %f \n", PIB);
    printf("A area da sua cidade é de: %.2f km² \n", area);
    printf("Quantidade de Pontos Turisticos: %d \n", PontoTuristico);
    printf("Densidade Populacional: hab/km² %.2f \n", divisão1);
    printf("PIB per Capita: reais %.2f \n", divisão2);






















    
    
    
    return 0; 
    
    
}
