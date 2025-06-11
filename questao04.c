//Faça um programa completo que calcule e imprima a soma dos n primeiros números naturais pares. 
//O usuário deve fornecer quantos números devem ser somados. 

#include <stdio.h> 

int main(){
    int tamanho, soma_pares = 0; 

    printf("Informe quantos itens serao verificados:"); 
    scanf("%d", &tamanho); 

    for(int i=1; i<=tamanho; i++){
        soma_pares += 2*i;  
    }

    printf("A soma dos primeiros %d pares e:%d", tamanho, soma_pares); 
}
