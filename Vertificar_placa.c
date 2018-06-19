#include<stdio.h>
#include<string.h>
#include<stdlib.h>

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
