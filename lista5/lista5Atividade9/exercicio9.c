/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio9.c
 * Author: Caio Costa Lopes
 *
 * Created on 6 de agosto de 2026, 21:47
 */

#include <stdio.h>
#include <stdlib.h>

void leNumeros(int lista[], int quantidadeNumeros);
void inverteLista(int lista[], int quantidadeNumeros);
void imprimeLista(int lista[], int quantidadeNumeros);

/*
 * Programa que lê um valor representando a quantidade de valores a serem lidos, os valores em si e ,em seguida,
 * imprime na tela a lista inversa da digitada;
 */
int main(int argc, char** argv) {
    int quantidadeNumeros;
    
    scanf("%d", &quantidadeNumeros);
    
    int lista[quantidadeNumeros];
    
    leNumeros(lista, quantidadeNumeros);
    inverteLista(lista, quantidadeNumeros);
    imprimeLista(lista, quantidadeNumeros);
    
    return (EXIT_SUCCESS);
}


void leNumeros(int lista[], int quantidadeNumeros) {
    int l;
    
    for(l = 0; l < quantidadeNumeros; l++) {
        scanf("%d", &lista[l]);
    }
}

void inverteLista(int lista[], int quantidadeNumeros) {
    int l, nl;
    int novaLista[quantidadeNumeros];
    
    for(l = (quantidadeNumeros - 1), nl = 0; l >= 0, nl < quantidadeNumeros; l--, nl++){
        novaLista[nl] = lista[l];
    }
    
    for (l = 0; l < quantidadeNumeros; l++) {
        lista[l] = novaLista[l];
    }
}

void imprimeLista(int lista[], int quantidadeNumeros){
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