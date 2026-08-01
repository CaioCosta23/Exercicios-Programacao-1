/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio7.c
 * Author: Caio Costa Lopes
 *
 * Created on 1 de agosto de 2026, 11:21
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Programa para verificar se um número é primo ou não;
 */
int main(int argc, char** argv) {
    int n, numero;
    int divisores = 0;
    
    scanf("%d", &numero);
    
    for(n = 1; n <= numero; n++) {
        if (numero % n == 0)
            divisores += 1;
    }
    
    if (divisores == 2)
        printf("Primo");
    else
        printf("Nao primo");

    return (EXIT_SUCCESS);
}

