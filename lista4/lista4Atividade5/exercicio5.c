/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio5.c
 * Author: Caio Costa Lopes
 *
 * Created on 6 de agosto de 2026, 13:15
 */

#include <stdio.h>
#include <stdlib.h>

#include <math.h>

typedef struct{
    int x, y;
}Ponto;

Ponto lePonto();
double calculaDistanciaPontos(Ponto pontoAntecessor, Ponto ponto);

/*
 * Programa que lê uma certa de quantidade de pontos e calcula a distancia para o ponto anterior digitado;
 * 
 * OBS: Caso não haja ponto anterior digitado, imprima "-";
 */
int main(int argc, char** argv) {
    int quantidadePontos, p;
    Ponto ponto, pontoAntecessor;
    
    scanf("%d", &quantidadePontos);
    
    for (p = 0; p < quantidadePontos; p++) {
        if (p == 0){
            ponto = lePonto();
            printf("-\n");
        }else {
            pontoAntecessor = ponto;
            ponto = lePonto();
            printf("%.2lf\n", calculaDistanciaPontos(pontoAntecessor, ponto));
        }
    }

    return (EXIT_SUCCESS);
}

Ponto lePonto() {
    Ponto ponto;
    
    scanf("%d %d", &ponto.x, &ponto.y);
    
    return ponto;
}
double calculaDistanciaPontos(Ponto pontoAntecessor, Ponto ponto) {
    return sqrt((pow((ponto.x - pontoAntecessor.x), 2)) + (pow((ponto.y - pontoAntecessor.y), 2)));
}