/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio3.c
 * Author: Caio Costa Lopes
 *
 * Created on 4 de agosto de 2026, 11:06
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Verifica se o número é primo ou não;
 */
int primo(int numero) {
    int p;
    int quantidadeDivisores = 0;
    // Variável lógica (verificador se o número é primo ou não;
    int valorPrimo = 0;
    
    for (p = 1; p <= numero; p++) {
        if (numero % p == 0)
            quantidadeDivisores += 1;
    }
    
    if (quantidadeDivisores == 2)
        valorPrimo = 1;
    
    return valorPrimo;
}

/*
 * Programa que verifica se um número é primo ou não dentro de um intervalo - deve ser feito com funções;
 */
int main(int argc, char** argv) {
    
    int inicioIntervalo, fimIntervalo, i;
    
    scanf("%d %d", &inicioIntervalo, &fimIntervalo);
    
    for(i = inicioIntervalo + 1; i < fimIntervalo; i++) {
        if (primo(i))
            printf("%d ", i);
    }

    return (EXIT_SUCCESS);
}

