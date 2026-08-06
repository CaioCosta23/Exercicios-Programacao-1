/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio6.c
 * Author: Caio Costa Lopes;
 *
 * Created on 6 de agosto de 2026, 19:44
 */

#include <stdio.h>
#include <stdlib.h>

#define NENHUM 1
#define PARCIAL 2
#define TODOS 3

void leNumeros(int lista[], int quantidadeNumerosSequencia);
void imprimeTipoPertencente(int tipoPertencente);

int verificaLista1EmLista2(int lista1[], int quantidadeNumerosSequencia1, int lista2[], int quantidadeNumerosSequencia2){
    int l1, l2;
    // Variável lógica (booleana) para verificar se um número da lista 1 está contido na lista 2;
    short int encontrado;
    int quantidadeEncontrada = 0;
    
    for(l1 = 0; l1 < quantidadeNumerosSequencia1; l1++) {
        encontrado = 0;
        for(l2 = 0; l2 < quantidadeNumerosSequencia2; l2++) {
            if (lista1[l1] == lista2[l2]){
                encontrado = 1;
                break;
            }
        }
        if (encontrado) {
            quantidadeEncontrada += 1;
        }
    }
    
    if (quantidadeEncontrada == 0)
        return NENHUM;
    else if ((quantidadeEncontrada > 0) && (quantidadeEncontrada < quantidadeNumerosSequencia1))
        return PARCIAL;
    else
        return TODOS; 
}

/*
 * Programa que lê duas sequências de números e verifica se todos os valores da primeira estão presentes na segunda;
 */
int main(int argc, char** argv) {
    int quantidadeNumerosSequencia1, quantidadeNumerosSequencia2, tipoPertencente;
    
    scanf("%d", &quantidadeNumerosSequencia1);
    
    int lista1[quantidadeNumerosSequencia1];
    
    leNumeros(lista1, quantidadeNumerosSequencia1);
    
    scanf("%d", &quantidadeNumerosSequencia2);
    
    int lista2[quantidadeNumerosSequencia2];
    
    leNumeros(lista2, quantidadeNumerosSequencia2);
    
    tipoPertencente = verificaLista1EmLista2(lista1, quantidadeNumerosSequencia1, lista2, quantidadeNumerosSequencia2);
    
    imprimeTipoPertencente(tipoPertencente);
    
    return (EXIT_SUCCESS);
}


void leNumeros(int lista[], int quantidadeNumerosSequencia) {
    int n;
    
    for(n = 0; n < quantidadeNumerosSequencia; n++) {
        scanf("%d", &lista[n]);
    }
}

void imprimeTipoPertencente(int tipoPertencente) {
    if (tipoPertencente == NENHUM)
        printf("NENHUM");
    else if (tipoPertencente == PARCIAL)
        printf("PARCIAL");
    else if (tipoPertencente == TODOS)
        printf("TODOS");
}