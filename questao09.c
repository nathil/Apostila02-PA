// Escreva um programa completo que calcula os juros progressivos em um investimento financeiro 

#include <stdio.h>

int main(){
    float saldo_conta, juros_mensal; 

    printf("Informe o saldo da conta:"); 
    scanf("%f", &saldo_conta); 

    if(saldo_conta >= 3000 && saldo_conta < 5000){
        juros_mensal = 0.01 * saldo_conta; 
        printf("O valor do juros a ser pago e: R$%.2f", juros_mensal); 
    }
    if(saldo_conta >= 5000 && saldo_conta < 10000){
        juros_mensal = 0.02 * saldo_conta; 
        printf("O valor do juros a ser pago e: R$%.2f", juros_mensal); 
    }
    if(saldo_conta >= 10000){
        juros_mensal = 0.03 * saldo_conta; 
        printf("O valor do juros a ser pago e: R$%.2f", juros_mensal); 
    }
    if(saldo_conta < 3000){
        printf("O banco não paga juros mensal."); 
    }
}