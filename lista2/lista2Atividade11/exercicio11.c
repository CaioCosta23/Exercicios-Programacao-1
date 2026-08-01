/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio11.c
 * Author: Caio Costa Lopes
 *
 * Created on 1 de agosto de 2026, 12:36
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Programa que receba dois números representando o início e o fim de um intervalo numérico (estando eles entre 1000 e 9999)
 * que satisfaçam a seguinte propriedade: "abcd, onde ab + cd = ef, e consequentemente, ef x ef = abcd"
 * 
 * Exemplo: 3025 -> 30 + 25 = 55 | 55 x 55 = 3025;
 * 
 * OBS: Lembrando que os valores de início e fim devem estar obrigatoriamente entre 1000 e 9999 
 * (inicio do intervalo >= 1000 e < 9999, e fim fo intervalo > 1000 e <= 9999);
 */
int main(int argc, char** argv) {
    int inicioIntervalo, fimIntervalo, i, soma;
    
    scanf("%d %d", &inicioIntervalo, &fimIntervalo);
    
    for (i = inicioIntervalo; i <= fimIntervalo; i++) {
        soma = (i / 100) + (i % 100);
        
        if ((soma * soma) == i)
            printf("%d\n", i);
    }

    return (EXIT_SUCCESS);
}

