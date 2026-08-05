/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio8.c
 * Author: Caio Costa Lopes
 *
 * Created on 4 de agosto de 2026, 17:39
 */

#include <stdio.h>
#include <stdlib.h>

#define INICIO_INTERVALO -32000
#define FIM_INTERVALO 32000

#define LINHAS_MAXIMAS 100
#define COLUNAS_MAXIMAS 100

int verificaPrimo(int numero);
int transformaPrimo(int numero);
int verificaNegativo(int numero);

/*
 * Programa que captura o tamanho de uma matriz e a matriz em si e transforma o elemento da matriz no próximo número primo;
 * 
 * Características da matriz e dos elementos: 1 <= linhas <= 100, 1 <= colunas <= 100, -32000 <= elemento <= 32000
 * OBS: Se o valor do elemento não estiver dentro do intervalo, não precisa transformá-lo, apenas o mantenha do jeito que ele é;
 */
int main(int argc, char** argv) {
    int linhas, colunas, l, c, elemento, novoElemento;
    
    scanf("%d %d", &linhas, &colunas);
    
    if (((linhas >= 1) && (linhas <= LINHAS_MAXIMAS)) && ((colunas >= 1) && (colunas <= COLUNAS_MAXIMAS))){
        for(l = 0; l < linhas; l++) {
            printf("\t");
            for(c = 0; c < colunas; c++) {
                scanf("%d", &elemento);
                
                novoElemento = transformaPrimo(elemento);

                if ((novoElemento < INICIO_INTERVALO) || (novoElemento > FIM_INTERVALO))
                    printf("%d ", elemento);
                else
                    printf("%d ", novoElemento);
            }
            printf("\n");
        }
    }
    
    return (EXIT_SUCCESS);
}

int verificaPrimo(int numero){
    int p;
    int quantidadeDivisores = 0;
    
    if (verificaNegativo(numero)) {
        for (p = -1; p >= numero; p--) {
            if (numero % p == 0)
                quantidadeDivisores += 1;
        }
    }else {
        for (p = 1; p <= numero; p++) {
            if (numero % p == 0)
                quantidadeDivisores += 1;
        }
    }
    
    if (quantidadeDivisores == 2)
        return 1;
    else
        return 0;
}

int transformaPrimo(int numero) {
    int novoNumero = numero;
    
    if (verificaNegativo(numero)) {
        while(!(verificaPrimo(novoNumero))){
            novoNumero--;
        }
    }else {
        while(!(verificaPrimo(novoNumero))){
            novoNumero++;
        }
    }
    
    return novoNumero;
}

int verificaNegativo(int numero) {
    return (numero < 0);
}

