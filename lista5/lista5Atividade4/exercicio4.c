/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio4.c
 * Author: Caio Costa Lopes
 *
 * Created on 6 de agosto de 2026, 18:36
 */

#include <stdio.h>
#include <stdlib.h>

void leNumeros(int numeros[], int quantidadeNumeros);
void imprimeValoresDentroForaIntervalo(int numeros[], int quantidadeNumeros, int inicioIntervalo, int fimIntervalo);

/*
 * Programa que lê a quantidade de números a sem lidos, os números em si e, em seguida, um intervalo (fechado)
 * de números. Logo depois deve-se vefificar quantos dos números lidos estão dentro e quantos estão fora do
 * intervalo e imprimir esa informação na tela;
 */
int main(int argc, char** argv) {
    int quantidadeNumeros, inicioIntervalo, fimIntervalo;
    
    scanf("%d", &quantidadeNumeros);
    
    int numeros[quantidadeNumeros];
    
    leNumeros(numeros, quantidadeNumeros);
    
    scanf("%d %d", &inicioIntervalo, &fimIntervalo);
    
    imprimeValoresDentroForaIntervalo(numeros, quantidadeNumeros, inicioIntervalo, fimIntervalo);

    return (EXIT_SUCCESS);
}

void leNumeros(int numeros[], int quantidadeNumeros) {
    int n;
    
    for(n = 0; n < quantidadeNumeros; n++) {
        scanf("%d", &numeros[n]);
    }
}

void imprimeValoresDentroForaIntervalo(int numeros[], int quantidadeNumeros, int inicioIntervalo, int fimIntervalo) {
    int n, i;
    int dentro = 0, fora = 0;
    int achado;
    
    
    for(n = 0; n < quantidadeNumeros; n++) {
        achado = 0;
        for(i = inicioIntervalo; i <= fimIntervalo; i++) {
            if (numeros[n] == i){
                achado = 1;
                break;
            }
        }
        if (achado)
            dentro += 1;
        else
            fora += 1;
    }
    
    printf("%d %d", dentro, fora);
}

