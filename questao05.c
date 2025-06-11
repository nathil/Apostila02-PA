//Faça um programa completo que calcule e imprima a soma dos n primeiros termos da série de Fibonacci. 
//O usuário deve fornecer quantos números devem ser somados.

#include <stdio.h>

int main(){
    int soma_termos = 0, prox_termo, ult_termo = 1, penul_termo = 1, quantidade; 

    printf("Informe quantos números devem ser somados:"); 
    scanf("%d", &quantidade); 

    for(int i=1; i<=quantidade; i++){
        if(i <= 2){
            soma_termos++; 
        }
        else{
            prox_termo = ult_termo + penul_termo;
            soma_termos += prox_termo; 
            penul_termo = ult_termo; 
            ult_termo = prox_termo; 
        }
    }

    printf("A soma final e:%d", soma_termos); 
}