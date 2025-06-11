//Faça um programa completo (função main e inclusão dos arquivos de cabeçalhos adequados) que verifique se um determinado
//aluno foi aprovado por média , o programa deve ler 3 notas e calcular a média, caso seja maior do que 8 o aluno estará aprovado)

#include <stdio.h> 
#include <stdlib.h>

float media(float *vetor, int tamanho){ 
    float soma = 0; 

    for(int i = 0; i < tamanho; i++){
        soma += vetor[i]; 
    }

    return soma/tamanho; 
}


int main(){
    int tamanho; 
    
    printf("Informe o tamanho do vetor:"); 
    scanf("%d", &tamanho); 
    
    float* vetor = malloc(sizeof(float) * tamanho); 

    for(int i = 0; i < tamanho; i++){
        printf("Informe a %da nota:", i + 1); 
        scanf("%f", &vetor[i]); 
    }

    if(media(vetor, tamanho) > 8 ){
        printf("Aluno(a) aprovado(a)!");
    }
    else{
        printf("Aluno(a) reprovado(a)."); 
    }
}