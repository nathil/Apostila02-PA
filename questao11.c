#include <stdio.h>

int main(){
    float ind_poluicao; 
    printf("Informe qual o indice de poluicao:"); 
    scanf("%f", &ind_poluicao); 

    if(ind_poluicao >= 0.30 && ind_poluicao < 0.40){
        printf("Notificar as industrias da lista A."); 
    }
    if(ind_poluicao >= 0.40 && ind_poluicao < 0.50){
        printf("Notificar as industrias da lista A e B."); 
    }
    if(ind_poluicao >= 0.50){
        printf("Notificar as industrias da lista A, B e C."); 
    }
}