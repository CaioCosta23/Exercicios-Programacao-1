/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio2.c
 * Author: Caio Costa Lopes
 *
 * Created on 6 de agosto de 2026, 16:56
 */

#include <stdio.h>
#include <stdlib.h>

#define ORDEM_CRESCENTE 1
#define ORDEM_DECRESCENTE 2
#define DESORDENADO 3
#define IGUAIS 4

void leNotas(float notas[], int quantidadeNotas);
void imprimeOrdenacao(float notas[], int quantidadeNotas);

int verificaOrdenacao(float notas[], int quantidadeNotas) {
    int n;
    int crescente = 1, decrescente = 1, desordenado = 1, iguais = 1;
    
    // Começa em 1 porque vamos comparar uma nota com sua anterior, e como a nota[0] não tem anterior, não vamos compará-la com nada antes
    for (n = 1; n < quantidadeNotas; n++) {
        if (notas[n] > notas[n - 1]){
            decrescente = 0;
            iguais = 0;
        }else if (notas[n] < notas[n - 1]) {
            crescente = 0;
            iguais = 0;
        }
    }
    
    if (iguais) {
        return IGUAIS;
    }else if ((!(crescente)) & (!(decrescente))) {
        return DESORDENADO;
    }else {
        if (decrescente)
            return ORDEM_DECRESCENTE; 
        else
            return ORDEM_CRESCENTE;
    }
}

/*
 * Programa que lê uma quantidade de notas e informa se o vetor está em ordem crescente, decrescente,
 * os dois ao mesmo tempo (todos os valores iguais) ou desordenado;
 */
int main(int argc, char** argv) {
    int quantidadeNotas;
    
    scanf("%d", &quantidadeNotas);
    
    float notas[quantidadeNotas];
    
    leNotas(notas, quantidadeNotas);
    
    imprimeOrdenacao(notas, quantidadeNotas);

    return (EXIT_SUCCESS);
}

void leNotas(float notas[], int quantidadeNotas) {
    int n;
    
    for (n = 0; n < quantidadeNotas; n++) {
        scanf("%f", &notas[n]);
    }
}

void imprimeOrdenacao(float notas[], int quantidadeNotas) {
    int tipoOrdenacao;
    
    tipoOrdenacao = verificaOrdenacao(notas, quantidadeNotas);
    
    if (tipoOrdenacao == ORDEM_CRESCENTE)
        printf("CRESCENTE");
    else if (tipoOrdenacao == ORDEM_DECRESCENTE)
        printf("DECRESCENTE");
    else if (tipoOrdenacao == DESORDENADO)
        printf("DESORDENADO");
    else
        printf("CRESCENTE&DECRESCENTE");
}