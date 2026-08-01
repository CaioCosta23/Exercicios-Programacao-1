/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio8.c
 * Author: Caio Costa Lopes
 *
 * Created on 1 de agosto de 2026, 11:33
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Programa que exibe todos os números primos contidos em um intervalo;
 */
int main(int argc, char** argv) {
    int inicioIntervalo, fimIntervalo, a, v;
    int quantidadeDivisores;
    
    scanf("%d %d", &inicioIntervalo, &fimIntervalo);
    
    printf("RESP:");
    for (a = inicioIntervalo + 1; a < fimIntervalo; a++) {
        quantidadeDivisores = 0;
        for (v = 1; v <= a; v++) {
            if (a % v == 0)
                quantidadeDivisores += 1;
        }
        if (quantidadeDivisores == 2)
            printf("%d ", a);
        
    }

    return (EXIT_SUCCESS);
}

