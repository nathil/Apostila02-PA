//Faça um programa completo que calcule e imprima a soma dos n primeiros números naturais impares.
//O usuário deve fornecer quantos números devem ser somados. 

#include <stdio.h>

int main(){
    int tamanho, soma_impar = 0; 

    printf("Informe quantos números deseja verificar:"); 
    scanf("%d", &tamanho);
    
    for(int i=0; i<tamanho; i++){
        soma_impar += 2*i + 1; 
    }

    printf("A soma dos primeiros %d é: %d", tamanho, soma_impar); 
}