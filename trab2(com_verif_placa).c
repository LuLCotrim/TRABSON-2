#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM 20

typedef struct {

    char prop[30];
    char comb[15];
    char modelo[25];
    char cor[18];
    int chassi;
    int ano;
    char placa[10];

} Veiculos;

int verificar_placa(char x[]){
    int aux,i,l=3;
    char aux2[5];

    x[7] = '\0';

    for(i=0;i<5;i++){
        aux2[i] = x[l];
        l++;
    }

    aux = atoi(aux2);

    if((x[0]=='a')&&(aux%2==0)){
        return 1;
    }
    return 0;
}

int main() {

	int i;
	Veiculos veic;
	Veiculos vetor[20];

    for (i=0;i<TAM;i++) {
        printf("=====NOVO CADASTRO====");

        printf("Digite o proprietario do carro.\n");
        fgets(veic.prop,30,stdin);

        printf("Digite o tipo de combustivel do carro\n");
        fgets(veic.comb,10,stdin);

        printf("Digite o modelo do veiculo\n");
        fgets(veic.modelo,22,stdin);

        printf("Digite a cor do veiculo\n");
        fflush(stdin);
        fgets(veic.cor,28,stdin);

        printf("Digite o numero de chassi do veiculo\n");
        fflush(stdin);
        scanf("%d", &veic.chassi);

        printf("Digite o ano do veiculo\n");
        fflush(stdin);
        scanf("%d", &veic.ano);

        printf("Digite a placa do veiculo\n");
        fflush(stdin);
        fgets(veic.placa,10,stdin);

        vetor[i] = veic;
    }

    for(i=0;i<TAM;i++){
        if(verificar_placa(vetor[i].placa)){
            printf("Nome do proprietário:\n");
            printf("%s", vetor[i].prop);
            printf("Combustível utilizado:\n");
            printf("%s", vetor[i].comb);
            printf("Modelo do carro: ");
            printf("%s", vetor[i].modelo);
            printf("Cor do carro:\n");
            printf("%s", vetor[i].cor);
            printf("Número do chassi:\n");
            printf("%d", vetor[i].chassi);
            printf("Ano do carro:\n");
            printf("%d", vetor[i].ano);
            printf("Placa do carro:\n");
            printf("%s\n", vetor[i].placa);
        }
    }

    return 0;
}
