#include <stdio.h>

    int main (){


            
                //Definindo variaveis:

            char estado[3];
            char cidade[20];
            int populacao;
            int pontos_turisticos;
            float area;
            float pib;
            float PIBCapita;
            float densidade;

        printf("Olá, Seja bem vindo ao jogo Super Trunfo: Países!\nVamos começar cadastrando cartas, é a base do jogo.\n");

        printf("Vamos a primeira carta, me informe a sigla do estado:\n");
        scanf(" %s", &estado);

        printf("Muito bem, agora me informe a cidade para definir o nome da carta:\n");
        scanf("%s", &cidade);



                    //Informações da carta

                printf("Tudo certo, Vamos definir as propriedas da carta %s - %s: \n", cidade, estado);

                printf("População:\n");
                scanf("%d", &populacao);

                printf("Área (em km^2):\n");
                scanf("%f", &area);

                printf("PIB:\n");
                scanf("%f", &pib);

                printf("Número de Pontos Turísticos:\n");
                scanf("%d", &pontos_turisticos);

                    //calculando medias
                densidade = (float)populacao / area;
                PIBCapita = (float)pib / populacao;
                

                    // Exibindo os dados da carta cadastrada
                printf("\n=== Carta Cadastrada ===\n");
                printf("Carta: %s - %s\n", cidade, estado);
                printf("População: %d\n", populacao);
                printf("Área: %.2f km^2\n", area);
                printf("PIB: R$ %.2f\n", pib);
                printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
                printf("Densidade Populacional: %f\n", densidade);
                printf("PIB per Capita: %f\n", PIBCapita);
                printf("---------------------------\n");


return 0;
};