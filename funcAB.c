int prop(int ano, char combustivel[]){

   

    if ((ano >= 1980) && (strcmp(combustivel, "diesel\n") == 0)){

        return 1;    


    }
    else if(((strcmp(combustivel, "alcool\n") == 0) || (strcmp(combustivel, "gasolina\n") == 0)) && (ano >= 2000)){
        return 2;
    }


}

//EXECUTANDO FUNÇÂO DENTRO DA MAIN
for(i=0; i<TAM;i++){
        if(prop(vetor[i].ano,vetor[i].comb) == 1){
            printf("Proprietario do veiculo do ano 1980 ou posterior e a diesel: %s\n",vetor[i].prop);
        }
        else if(prop(vetor[i].ano,vetor[i].comb) == 2){
            printf("Proprietario do veiculo do ano 2000 ou posterior e a %s: %s\n",vetor[i].comb,vetor[i].prop);    
        }
    }
