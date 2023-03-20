#include "misfunciones.h"
#include<stdio.h>
int main(){
    int valor_1,valor_2,resultado,resultado_2;
    do{
    printf("Ingrese valor 1:\n");
    scanf("%d",&valor_1);
    printf("Ingrese valor 2:\n");
    scanf("%d",&valor_2);
    
    resultado=sumar_enteros(valor_1,valor_2);
    resultado_2=restar_enteros(valor_1,valor_2);
    printf("La suma de los numeros enteros es =>%d\n",resultado);
    printf("La resta de los numeros enteros es =>%d\n",resultado_2);   
    }while(valor_1!=0||valor_2!=0);
    printf("\nFIN DEL PROGRAMA");
    return 0;
}
