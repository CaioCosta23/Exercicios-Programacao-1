/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio6.c
 * Author: Caio Costa Lopes
 *
 * Created on 6 de agosto de 2026, 13:44
 */

#include <stdio.h>
#include <stdlib.h>

#include <math.h>

typedef struct{
    int x, y;
}Ponto;

typedef struct {
    Ponto inicio, final;
}Reta;

Ponto lePonto();
Reta leReta();
void imprimeDistancia(Ponto ponto, Reta reta);

double calculaDistancia(Ponto pontoReta, Ponto ponto) {
    return (sqrt((pow((pontoReta.y - ponto.y), 2)) + (pow((pontoReta.x - ponto.x), 2))));
}

/*
 * Programa que recebe um ponto e mais outros dois que representam uma reta e calcula a ditância do primeiro
 * para os outros dois e indicar se está mais próximo do início ou do fim está equidistante; 
 */
int main(int argc, char** argv) {
    int quantidadeConjuntoPontos, p;
    Ponto ponto;
    Reta reta;
    
    scanf("%d", &quantidadeConjuntoPontos);
    
    for(p = 0; p < quantidadeConjuntoPontos; p++){
        ponto = lePonto();
        reta = leReta();
        
        imprimeDistancia(ponto, reta);
    }

    return (EXIT_SUCCESS);
}

Ponto lePonto() {
    Ponto ponto;
    
    scanf("%d %d", &ponto.x, &ponto.y);
    
    return ponto;
}

Reta leReta(){
    Reta reta;
    
    reta.inicio = lePonto();
    reta.final = lePonto();
    
    return reta;
}

void imprimeDistancia(Ponto ponto, Reta reta){
    if (calculaDistancia(reta.final, ponto) > calculaDistancia(reta.inicio, ponto))
        printf("INICIO\n");
    else if (calculaDistancia(reta.final, ponto) < calculaDistancia(reta.inicio, ponto))
        printf("FIM\n");
    else
        printf("EQUIDISTANTE\n");
}

