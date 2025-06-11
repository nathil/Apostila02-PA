//Faça um programa completo que imprima os n primeiros números termos da série de Fibonacci

#include <stdio.h> 

int main(){
    int termos, ultimo_termo = 1, penul_termo = 1, prox_termo = 0;
  
    printf("Informe a quantidade de termos:"); 
    scanf("%d", &termos); 

    for(int i=0; i<termos; i++){
        if(i == 1){
            printf("%d ", ultimo_termo); 
        }
        if(i == 2){
            printf("%d ", penul_termo); 
        }
        if(i >= 3){
            prox_termo = ultimo_termo + penul_termo; 
            printf("%d ", prox_termo);

            penul_termo = ultimo_termo; 
            ultimo_termo = prox_termo; 
        }
    }
}