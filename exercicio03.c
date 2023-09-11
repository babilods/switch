#include<stdio.h>
#include<math.h>
main(){

    int prato, sobremesa, bebida, calorias;

    printf("codigo do prato: 1 - Vegetariano(180cal), 2- Peixe (230 cal), 3 - Frango (250cal), 4 - Carne (350 cal) ");
    scanf("%d",&prato);

    switch(prato){
        case 1:
            calorias = 180;
        break;
        case 2:
            calorias = 230;
        break;
        case 3:
            calorias = 250;
        break;
        case 4:
            calorias = 350;
        break;
    }

    printf("codigo da sobremesa: 1 - Abacaxi(75cal), 2- Sorvete Diet (110 cal), 3 - Mouse diet (170cal), 4 - Mouse de chocolate (200 cal) ");
    scanf("%d",&sobremesa);

    switch(sobremesa){
        case 1:
            calorias = calorias + 75;
        break;
        case 2:
            calorias += 110;
        break;
        case 3:
            calorias += 170;
        break;
        case 4:
            calorias += 200;
        break;
    }
    printf("\ncodigo da bebida: 1 - Cha(20cal), 2- Suco laranja (75 cal), 3 - Suco melao (100cal), 4 - Refrigerante Diet (65 cal) ");
    scanf("%d",&bebida);

    switch(bebida){
        case 1:
            calorias = calorias + 20;
        break;
        case 2:
            calorias += 75;
        break;
        case 3:
            calorias += 75;
        break;
        case 4:
            calorias += 65;
        break;
    }
    printf("Total de calorias da refeicao: %d", calorias);
}