/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio14.c
 * Author: Caio Costa Lopes
 *
 * Created on 30 de julho de 2026, 21:19
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Programa que verifica se um ponto (em coordenadas cartesianas) está contido 
 * dentro de um retângulo (que também está representado em coordenadas cartesianas -
 * com seus pontos representados por vértices opostos um do outro);
 */
int main(int argc, char** argv) {
    int xVertice1, yVertice1, xVertice2, yVertice2, xPonto, yPonto;
    
    scanf("%d %d %d %d %d %d", &xVertice1, &yVertice1, &xVertice2, &yVertice2, &xPonto, &yPonto);
    
    // O X do vértice 1 está mais à esquerda que o X do vértice 2 e o Y do vértice 1 está mais abaixo que o Y do vértice 2;
    if ((xVertice1 < xVertice2) && (yVertice1 < yVertice2)) {
        if (((xPonto >= xVertice1) && (xPonto <= xVertice2)) && ((yPonto >= yVertice1) && (yPonto <= yVertice2)))
            printf("Dentro");
        else
            printf("Fora");
    // O X do vértice 1 está mais a direita do X do vértice 2 e o Y do vértice 1 está mais abaixo que o Y do vértice 2;
    }else if ((xVertice1 > xVertice2) && (yVertice1 < yVertice2)) {
        if (((xPonto <= xVertice1) && (xPonto >= xVertice2)) && ((yPonto >= yVertice1) && (yPonto <= yVertice2)))
            printf("Dentro");
        else
            printf("Fora");
    // O X do vértice 1 está mais a direita do X do vértice 2 e o Y do vértice 1 está mais acima que o Y do vértice 2;
    }else if ((xVertice1 > xVertice2) && (yVertice1 > yVertice2)) {
        if (((xPonto <= xVertice1) && (xPonto >= xVertice2)) && ((yPonto <= yVertice1) && (yPonto >= yVertice2)))
            printf("Dentro");
        else
            printf("Fora");
        // O X do vértice 1 está mais a esquerda do X do vértice 2 e o Y do vértice 1 está mais acima que o Y do vértice 2;
    }else if ((xVertice1 < xVertice2) && (yVertice1 > yVertice2)) {
        if (((xPonto >= xVertice1) && (xPonto <= xVertice2)) && ((yPonto <= yVertice1) && (yPonto >= yVertice2)))
            printf("Dentro");
        else 
            printf("Fora");
        // O dois pontos estão um em cima do outro;
    }else {
        // E o ponto indicado está em cima dos outros dois (tecnicamente, dentro);
        if ((xPonto == xVertice1) && (yPonto <= yVertice1))
            printf("Dentro");
        else
            printf("Fora");
    }
    
    /* Para melhor visualização do problema, recomenda-se que desenhe as possibilidades de pontos
     * indicadas nos comentários ou as entradas de teste;
     */

    return (EXIT_SUCCESS);
}

