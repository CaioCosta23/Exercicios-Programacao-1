/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio4.c
 * Author: Caio Costa Lopes
 *
 * Created on 6 de agosto de 2026, 02:44
 */

#include <stdio.h>
#include <stdlib.h>

#define QUADRANTE_1 1
#define QUADRANTE_2 2
#define QUADRANTE_3 3
#define QUADRANTE_4 4
// Essa definção significa que uma das coordenadas está sobre um dos eixos (x ou y);
#define SOBRE_EIXO 0

typedef struct{
    int x, y;
}Ponto;

Ponto lePonto();
Ponto encontraSimetrico();
void imprimePonto(Ponto ponto);

int encontraQuadrante(Ponto ponto){
    if ((ponto.x > 0) && (ponto.y > 0))
        return QUADRANTE_1;
    else if ((ponto.x < 0) && (ponto.y > 0))
        return QUADRANTE_2;
    else if ((ponto.x < 0) && (ponto.y < 0))
        return QUADRANTE_3;
    else if ((ponto.x > 0) && (ponto.y < 0))
        return QUADRANTE_4;
    
    return SOBRE_EIXO;
}

/*
 * Programa que lê certa quantidade de pontos imprime o ponto e seu quadrante e o ponto simétrico e o seu quadrante;
 */
int main(int argc, char** argv) {
    int quantidadePontos, p;
    Ponto ponto, simetrico;
    
    scanf("%d", &quantidadePontos);
    
    for(p = 0; p < quantidadePontos; p++) {
        ponto = lePonto();
        simetrico = encontraSimetrico(ponto);
        
        imprimePonto(ponto);
        printf(" ");
        imprimePonto(simetrico);
        printf("\n");
    }

    return (EXIT_SUCCESS);
}


Ponto lePonto() {
    Ponto ponto;
    
    scanf("%d %d", &ponto.x, &ponto.y);
    
    return ponto;
}

Ponto encontraSimetrico(Ponto ponto) {
    ponto.x = ponto.x * (-1);
    ponto.y = ponto.y * (-1);
    
    return ponto;
}

void imprimePonto(Ponto ponto){
    printf("(%d,%d) %d", ponto.x, ponto.y, encontraQuadrante(ponto));
}

