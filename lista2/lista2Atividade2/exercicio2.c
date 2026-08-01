/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio2.c
 * Author: Caio Costa Lopes
 *
 * Created on 31 de julho de 2026, 22:23
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Programa que exibe todos os valores dentro de um intervalo que são múltiplos de 3, 4 ou 7;
 */
int main(int argc, char** argv) {
    int inicioIntervalo, fimIntervalo, i;

    scanf("%d %d", &inicioIntervalo, &fimIntervalo);
    
    for(i = inicioIntervalo + 1; i < fimIntervalo; i++) {
        if ((i % 3 == 0) || (i % 4 == 0) || (i % 7 == 0))
            printf("%d ", i);
    }
    
    return (EXIT_SUCCESS);
}

