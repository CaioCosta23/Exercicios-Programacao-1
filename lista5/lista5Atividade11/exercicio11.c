/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   eexercicio11.c
 * Author: Caio Costa Lopes
 *
 * Created on 8 de agosto de 2026, 01:00
 */

#include <stdio.h>
#include <stdlib.h>

void leLista(int llista[], int quantidadeElementos);
void ordenaListaCrescente(int lista[], int quantidadeElementos);
void imprimeSequenciaListas(int lista1[], int lista2[], int quantidadeElementosLista1, int quantidadeElementosLista2);

void trocaValores(int lista[], int indice1, int indice2){
    int auxiliar;
    
    auxiliar = lista[indice1];
    lista[indice1] = lista[indice2];
    lista[indice2] = auxiliar;
}

/*
 * Programa que lê duas sequências de valores, coloca-as em ordem crescente e, em seguida,
 * indica na tela qual seria a ordem crescente das duas "juntas" (através de letras);
 * 
 * Exemplo: lista A [3, 6, 7, 5], lista B [9, 8, 1, 2];
 * Listas ordenadas -> lista A [3, 5, 6, 7], lista B [1, 2, 8, 9]
 * Listas oredenadas conjuntamente -> [1, 2, 3, 5, 6, 7, 8, 9];
 * Sequencia de saída -> BBAAAABB (cada letra representa um elemento/ letra da lista onde a mesma se encontra;
 */
int main(int argc, char** argv) {
    int quantidadeElementosLista1, quantidadeElementosLista2;
    
    scanf("%d", &quantidadeElementosLista1);
    
    int lista1[quantidadeElementosLista1];
    
    leLista(lista1, quantidadeElementosLista1);
    ordenaListaCrescente(lista1, quantidadeElementosLista1);
    
    scanf("%d", &quantidadeElementosLista2);
    
    int lista2[quantidadeElementosLista2];
    
    leLista(lista2, quantidadeElementosLista2);
    ordenaListaCrescente(lista2, quantidadeElementosLista2);
    imprimeSequenciaListas(lista1, lista2, quantidadeElementosLista1, quantidadeElementosLista2);
    
    return (EXIT_SUCCESS);
}

void leLista(int lista[], int quantidadeElementos) {
    int l;
    
    for(l = 0; l < quantidadeElementos; l++) {
        scanf("%d", &lista[l]);
    }
}

void ordenaListaCrescente(int lista[], int quantidadeElementos) {
    int l1, l2;
    
    for (l1 = 0; l1 < quantidadeElementos - 1; l1++) {
        for (l2 = l1 + 1; l2 < quantidadeElementos; l2++) {
            if (lista[l1] > lista[l2])
                trocaValores(lista, l1, l2);
        }
    }
}

void imprimeSequenciaListas(int lista1[], int lista2[], int quantidadeElementosLista1, int quantidadeElementosLista2) {
    int indiceLista1= 0, indiceLista2 = 0;
    
    while((indiceLista1 < quantidadeElementosLista1) || (indiceLista2 < quantidadeElementosLista2)) {
        if (((lista1[indiceLista1] <= lista2[indiceLista2]) || (indiceLista2 >= quantidadeElementosLista2)) &&
            (indiceLista1 < quantidadeElementosLista1)){
            printf("A");
            indiceLista1++;
        }else if (((lista1[indiceLista1] > lista2[indiceLista2]) || (indiceLista1 >= quantidadeElementosLista1)) &&
                   (indiceLista2 < quantidadeElementosLista2)){
            printf("B");
            indiceLista2++;
        }
    }
}