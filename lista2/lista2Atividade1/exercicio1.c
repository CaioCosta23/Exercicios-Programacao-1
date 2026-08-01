/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio1.c
 * Author: Caio Costa Lopes
 *
 * Created on 31 de julho de 2026, 22:11
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Programa que exibe todos os números pares em um determinado intervalo;
 */
int main(int argc, char** argv) {
    
    int valorInicial, valorFinal, i;
    
    scanf("%d %d", &valorInicial, &valorFinal);
    
    printf("RESP:");
    for (i = valorInicial +  1; i < valorFinal; i++) {
        if (i % 2 == 0)
            printf("%d ", i);
    }

    return (EXIT_SUCCESS);
}

