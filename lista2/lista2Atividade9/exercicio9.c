/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio9.c
 * Author: Caio Costa Lopes
 *
 * Created on 1 de agosto de 2026, 11:47
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Programa que imprime os valores primos contidos em um intervalo e os múltipolos desse valor primo;
 * 
 * Cada valor primo deve ser acompanhado de seus múltiplos e depois por um "*" para separá-los do outro 
 * valor primo e seus multiplos;
 */
int main(int argc, char** argv) {
    int inicioIntervalo, fimIntervalo, a, v, m;
    int quantidadeDivisores;
    int quantidadePrimos = 0;
    int possuiMultiplo; // Variável "booleana" - verdadeiro (qualquer coisa diferente de 0) ou falso(0);
    
    scanf("%d %d", &inicioIntervalo, &fimIntervalo);
    
    for(a = inicioIntervalo + 1; a < fimIntervalo; a++) {
        quantidadeDivisores = 0;
        possuiMultiplo = 0;
        for (v = 1; v <= a; v++) {
            if (a % v == 0)
                quantidadeDivisores += 1;
        }
        if (quantidadeDivisores == 2) {
            printf("%d\n", a);
            
            for(m = a + 1; m < fimIntervalo; m++) {
                if (m % a == 0) {
                    printf("%d ", m);
                    possuiMultiplo = 1;
                }
            }
            // Verifica se o o valor primo possui multiplo(s) ou não. Caso não possua, entra na condicional ("flag");
            if (!(possuiMultiplo))
                printf("*");
                
            printf("\n");
        }
    }

    return (EXIT_SUCCESS);
}

