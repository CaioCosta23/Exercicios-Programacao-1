/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio2.c
 * Author: Caio Costa Lopes
 *
 * Created on 3 de agosto de 2026, 22:10
 */

#include <stdio.h>
#include <stdlib.h>

#define SOMA '+'
#define SUBTRACAO '-'
#define MULTIPLICACAO '*'
#define DIVISAO '/'

float soma(float numero1, float numero2);
float subtracao(float numero1, float numero2);
float multiplicacao(float numero1, float numero2);
float divisao(float numero1, float numero2);

/*
 * 
 */
int main(int argc, char** argv) {
    float numero1, numero2;
    char operador;
    
    scanf("%f", &numero1);
    
    while(scanf("%f ", &numero2) == 1) {
        // Verifica se a separação entre os dados é um espaço ou um '\n' (que indica o fim da iteração do programa);
        while(scanf("%c", &operador) == 1) {
            
            if(operador == SOMA){
                numero1 = soma(numero1, numero2);
            }else if(operador == SUBTRACAO){
                numero1 = subtracao(numero1, numero2);
            }else if(operador == MULTIPLICACAO){
                numero1 = multiplicacao(numero1, numero2);
            }else if(operador == DIVISAO){
                numero1 = divisao(numero1, numero2);
            }else {
                break;
            }
        }
        if (operador == '\n') {
            break;
        }
    }
    
    printf("%.2f", numero1);
    
    /*
     * Essa é a lógica mais correta devido ao formato dos casos de testes e o como o "buffer" é utilizado na linguagem,
     * por causa do caractere de EOF ("End Of File" - caractere 'especial' e invísivel que fica ao fim de arquivos, com valor -1);
    */ 
    
    return (EXIT_SUCCESS);
}

float soma(float numero1, float numero2) {
    return numero1 + numero2;
}

float subtracao(float numero1, float numero2) {
    return numero1 - numero2;
}

float multiplicacao(float numero1, float numero2) {
    return numero1 * numero2;
}

float divisao(float numero1, float numero2) {
    return numero1 / numero2;
}

