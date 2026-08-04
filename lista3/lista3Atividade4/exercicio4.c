/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio4.c
 * Author: Caio Costa Lopes
 *
 * Created on 4 de agosto de 2026, 11:49
 */

#include <stdio.h>
#include <stdlib.h>


int primo(int numero) {
    int p;
    int quantidadeDivisores = 0;
    int valorPrimo = 0;
    
    for(p = 1; p <= numero; p++) {
        if (numero % p == 0)
            quantidadeDivisores += 1;
    }
    
    if (quantidadeDivisores == 2)
        valorPrimo = 1;
    
    return valorPrimo;
}

void imprimeMultiplos(int numero, int maximo) {
    int m;
    // Variável lógica que verifica se o número possui múltiĺos dentro do intervalo ou não;
    int possuiMultiplo = 0;
    
    for(m = numero + 1; m < maximo; m++) {
        if (m % numero == 0) {
            possuiMultiplo = 1;
            printf("%d ", m);
        }
    }
    
    if (possuiMultiplo)
        printf("\n");
    else
        printf("*\n");
}


/*
 * Programa que exibe os números primos dentro de um interval e os múltiplos desse valor primo;
 * Caso o valor seja primo e não posua múltiplos dentro do intervalo, imprimir um "*";
 */
int main(int argc, char** argv) {
    int inicioIntervalo, fimIntervalo, i;
    int existePrimo = 0;
    
    scanf("%d %d", &inicioIntervalo, &fimIntervalo);
    
    for(i = inicioIntervalo + 1; i < fimIntervalo; i++) {
        if (primo(i)){
            /* "if/else" ternáro (condição ? senteça verdadeira : senteça falsa)
             * que verifica se já foram encontrados outros primos para determinar o formato de impressão do valor primo;
             */ 
            printf("%d\n", i);
            existePrimo += 1;
            imprimeMultiplos(i, fimIntervalo);
        }
    }

    return (EXIT_SUCCESS);
}

