/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio8.c
 * Author: archer
 *
 * Created on 6 de agosto de 2026, 20:46
 */

#include <stdio.h>
#include <stdlib.h>

void leNumeros(int lista[], int quantidadeNumeros);
void inverteIndiceParComImpar(int lista[], int quantidadeNumeros);
void imprimeLista(int lista[], int quantidadeNumeros);

void trocaValoresPosicao(int lista[], int indice) {
    int auxiliar;
    
    auxiliar = lista[indice];
    lista[indice] = lista[indice + 1];
    lista[indice + 1] = auxiliar;
}

/*
 * Programa que lê um valor representando uma quantidade de números e, em seguida lê esses números,
 * inverte os valores de posição par com a posição ímpar e exibe na tela;
 */
int main(int argc, char** argv) {
    int quantidadeNumeros;
    
    scanf("%d", &quantidadeNumeros);
    
    int lista[quantidadeNumeros];
    
    leNumeros(lista, quantidadeNumeros);
    inverteIndiceParComImpar(lista, quantidadeNumeros);
    imprimeLista(lista, quantidadeNumeros);
    
    return (EXIT_SUCCESS);
}

void leNumeros(int lista[], int quantidadeNumeros) {
    int l;
    
    for(l = 0; l < quantidadeNumeros; l++) {
        scanf("%d", &lista[l]);
    }
}

void inverteIndiceParComImpar(int lista[], int quantidadeNumeros) {
    int l;
    
    if (quantidadeNumeros > 1){ 
        for(l = 0; l < quantidadeNumeros; l += 2) {
            // Condicional para caso a lista tenha tamanho ímpar e evitar pegar valores fora da memória do vetor;
            if (l == (quantidadeNumeros - 1))
                break;
            
            trocaValoresPosicao(lista, l);
        }
    }
}

void imprimeLista(int lista[], int quantidadeNumeros) {
    int l;
    
    printf("{");
    
    if (quantidadeNumeros > 0){
        for(l = 0; l < quantidadeNumeros; l++) {
            if (l < (quantidadeNumeros -1))
                printf("%d, ", lista[l]);
            else
                printf("%d", lista[l]);
        }
    }
    
    printf("}");
}

