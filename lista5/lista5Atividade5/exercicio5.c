/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio5.c
 * Author: Caio Costa Lopes
 *
 * Created on 6 de agosto de 2026, 19:22
 */

#include <stdio.h>
#include <stdlib.h>

void leNumeros(int numeros[], int quantidadeNumeros);
void imprimeNumeroIndiceNumero(int numeros[], int quantidadeNumeros, int numeroProcurado);

/*
 * Programa que lê uma quantidade e números e os números em si e depois lê outro número e procura qual a primeira
 * ocorrência deste no vetor lido;
 */
int main(int argc, char** argv) {
    int quantidadeNumeros, numeroProcurado;
    
    scanf("%d %d", &numeroProcurado, &quantidadeNumeros);
    
    int numeros[quantidadeNumeros];
    
    leNumeros(numeros, quantidadeNumeros);
    imprimeNumeroIndiceNumero(numeros, quantidadeNumeros, numeroProcurado);

    return (EXIT_SUCCESS);
}


void leNumeros(int numeros[], int quantidadeNumeros) {
    int n;
    
    for (n = 0; n < quantidadeNumeros; n++) {
        scanf("%d", &numeros[n]);
    }
}

void imprimeNumeroIndiceNumero(int numeros[], int quantidadeNumeros, int numeroProcurado) {
    int n;
    int encontrado = 0;
    
    for (n = 0; n < quantidadeNumeros; n++) {
        if (numeros[n] == numeroProcurado) {
            encontrado = 1;
            break;
        }
    }
    
    if (encontrado)
        printf("RESP:%d", n);
    else
        printf("RESP:%d", quantidadeNumeros);
}
