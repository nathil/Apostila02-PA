//Fazer um programa que calcula o fatorial de um número, testar se o número que vc está entrando é positivo, 
//sugestão usar instrução do {.......} while( ); 

#include <stdio.h>

int main(){
    int numero = 1, fatorial = 1;

    do{
        printf("Informe um número para calcular o fatorial:\n"); 
        scanf("%d", &numero); 

        for(int i=1; i<=numero; i++){
            fatorial *= i;
        }
        printf("%d\n", fatorial); 

    } while(numero > 0); 

}
