/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio5.c
 * Author: Caio Costa Lopes
 *
 * Created on 4 de agosto de 2026, 14:09
 */

#include <stdio.h>
#include <stdlib.h>


int propriedade(int numero) {
    short int parte1, parte2, somaPartes;
    
    parte1 = numero / 100;
    parte2 = numero % 100;
    
    somaPartes = parte1 + parte2;
    
    // Retorna verdadeiro se a multiplicação entre as soma das partes é igual ao número, e falso, caso contrário;
    return ((somaPartes * somaPartes) == numero);
}


/*
 * Programa que verifica se os numesros dentro de um intervalo possuem a seguinte propriedade:
 * abcd, onde ab + cd = ef, ef * ef = abcd;
 * 
 * Exemplo: 3025, onde 30 + 25 = 55 e 55 x 55 = 3025;
 * OBS: Os valores do intervalo devem estar entre 1000 e 9999 e deve-se resolver a questão usando funções;
 */
int main(int argc, char** argv) {
    int inicioIntervalo, fimIntervalo, i;
    
    scanf("%d %d", &inicioIntervalo, &fimIntervalo);
    
    for(i = inicioIntervalo + 1; i < fimIntervalo; i++) {
        if (propriedade(i))
            printf("%d\n", i);
    }

    return (EXIT_SUCCESS);
}

