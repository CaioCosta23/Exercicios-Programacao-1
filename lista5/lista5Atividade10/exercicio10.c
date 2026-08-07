/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio10.c
 * Author: Caio Costa Lopes
 *
 * Created on 6 de agosto de 2026, 22:03
 */

#include <stdio.h>
#include <stdlib.h>

void leLista(int lista[], int quantidadeNumeros);
void ordenaListaCrescente(int lista[], int quantidadeNumeros);
void imprimeLista(int lista[], int quantidadeNumeros);

void trocaValor(int lista[], int indice1, int indice2) {
    int auxiliar;
    
    auxiliar = lista[indice1];
    lista[indice1] = lista[indice2];
    lista[indice2] = auxiliar;
}

/*
 * Programa que lê um valor representando a quantidade de números a serem lidos, lê esses números;
 * e imprime-os de forma crescente;
 */
int main(int argc, char** argv) {
    int quantidadeNumeros;
    
    scanf("%d", &quantidadeNumeros);
    
    int lista[quantidadeNumeros];
    
    leLista(lista, quantidadeNumeros);
    ordenaListaCrescente(lista, quantidadeNumeros);
    imprimeLista(lista, quantidadeNumeros);
    return (EXIT_SUCCESS);
}


void leLista(int lista[], int quantidadeNumeros) {
    int l;
    
    for(l = 0; l < quantidadeNumeros; l++) {
        scanf("%d", &lista[l]);
    }
}

void ordenaListaCrescente(int lista[], int quantidadeNumeros) {
    int l1, l2;
    
    for(l1 = 0; l1 < quantidadeNumeros - 1; l1++) {
        for(l2 = l1 + 1; l2 < quantidadeNumeros; l2++) {
            if (lista[l1] > lista[l2])
                trocaValor(lista, l1, l2);
        }
    }
}

void imprimeLista(int lista[], int quantidadeNumeros) {
    int l;
    
    printf("{");
    for(l = 0; l < quantidadeNumeros; l++) {
        if (l < (quantidadeNumeros - 1))
            printf("%d, ", lista[l]);
        else
            printf("%d", lista[l]);
    }
    printf("}");
}