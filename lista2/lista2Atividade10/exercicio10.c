/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio10.c
 * Author: Caio Costa Lopes
 *
 * Created on 1 de agosto de 2026, 12:25
 */

#include <stdio.h>
#include <stdlib.h>

#define INICIO_TABUADA 1
#define FIM_TABUADA 10

/*
 * Programa que imprime a tabuada de n até m (de 1 até 3, por exemplo, toda a tabuada de 1, 2 e 3);
 */
int main(int argc, char** argv) {
    int inicioIntervalo, fimIntervalo, i, t;
    
    scanf("%d %d", &inicioIntervalo, &fimIntervalo);
    
    for (i = inicioIntervalo; i <= fimIntervalo; i++) {
        for(t = INICIO_TABUADA; t <= FIM_TABUADA; t++) {
            printf("%d x %d = %d\n", i, t, (i * t));
        }
    }
    
    return (EXIT_SUCCESS);
}

