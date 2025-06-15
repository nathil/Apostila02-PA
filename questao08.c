//Fazer um programa em C que executa um laço for e na execução deste pula uma iteração, utilize comando
// continue;

#include <stdio.h>

int main(){
    for(int i=0; i<6; i++){
        if(i % 2 == 0){
            continue;
        }
        printf("%d ", i); 
    }
}