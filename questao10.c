//Elaborar um programa para ler três números inteiros A, B e C, e encontrar o maior, menor e o médio 
//elemento entre eles.

#include <stdio.h>

int main(){
    int maior, menor, medio, valor1, valor2, valor3; 

    printf("Informe o 1o valor:");
    scanf("%d", &valor1); 
    printf("Informe o 2o valor:");
    scanf("%d", &valor2); 
    printf("Informe o 3o valor:"); 
    scanf("%d", &valor3); 

    maior = valor1; 
    menor = valor2; 
    medio = valor3; 

    if(valor2 > maior){
        maior = valor2; 
    }
    if(valor3 > maior){
        maior = valor3; 
    }   
    if(valor1 < menor){
        menor = valor1; 
    }
    if(valor3 < menor){
        menor = valor3; 
    }
    if(valor1 != maior && valor1 != menor){
        medio = valor1; 
    }
    if(valor2 != maior && valor2 != menor){
        medio = valor2; 
    }
    if(valor3 != maior && valor3 != menor){
        medio = valor3; 
    }

    printf("maior:%d\nmenor:%d\nmedio:%d\n", maior, menor, medio); 
}