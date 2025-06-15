//Fazer um programa em C que testa o valor de uma variável dentro de um laço for e se ela for igual a 5, interrompe o laço pelo
//comando break;

#include <stdio.h>

int main(){
    int valor;

    printf("Insira um valor:"); 
    scanf("%d", &valor); 

    
    for(int i=0; i<valor; i++){
        printf("%d ", valor); 
        if(valor == 5){
            break;
        }
    }
}