/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio3.c
 * Author: archer
 *
 * Created on 6 de agosto de 2026, 17:46
 */

#include <stdio.h>
#include <stdlib.h>

#define ALTURAS_PARA_DIFERENCA 2

void leAlturas(float alturas[], int quantidadeAlturas);
void imprimeMaiorDiferencaAlturas(float alturas[], int quantidadeAlturas);

float diferencaAlturas(float altura1, float altura2) {
    float diferenca;
    
    diferenca = altura1 - altura2;
    
    /* O valor é multiplicado por -1 pois a diferença pode ser negativa (lembrando que independente de ser positivo ou negativo,
    * a diferença SEMPRE será o módulo da diferença entre uma altura e outra);
    */
    if (diferenca < 0)
        diferenca = diferenca * (-1);
    
    return  diferenca;
}

float encontraMaiorDiferenca(float alturas[], int quantidadeAlturas) {
    int a;
    float maiorDiferenca, diferencaAtual;
    
    for(a = 1; a < quantidadeAlturas; a++) {
        diferencaAtual = diferencaAlturas(alturas[a], alturas[a - 1]);
        
        if ((a == 1) || (diferencaAtual > maiorDiferenca))
            maiorDiferenca = diferencaAtual;
    }
    
    return maiorDiferenca;
}

/*
 * Programa que lê uma determinada quantidade de postes e suas respectivas alturas e imprime os índices dos postes
 * com maior diferença entre eles;
 */
int main(int argc, char** argv) {
    int quantidadePostes;
    
    scanf("%d", &quantidadePostes);
    
    float alturas[quantidadePostes];
    
    leAlturas(alturas, quantidadePostes);
    
    imprimeMaiorDiferencaAlturas(alturas, quantidadePostes);
    
    return (EXIT_SUCCESS);
}

void leAlturas(float alturas[], int quantidadeAlturas) {
    int a;
    
    for(a = 0; a < quantidadeAlturas; a++) {
        scanf("%f", &alturas[a]);
    }
}

void imprimeMaiorDiferencaAlturas(float alturas[], int quantidadeAlturas) {
    float maiorDiferenca;
    int a;
    
    if (quantidadeAlturas < ALTURAS_PARA_DIFERENCA){
        printf("IMPOSSIVEL");
    }else {
        maiorDiferenca = encontraMaiorDiferenca(alturas, quantidadeAlturas);
        for (a = 1; a < quantidadeAlturas; a++) {
            if (diferencaAlturas(alturas[a], alturas[a - 1]) == maiorDiferenca)
                printf(" (%d %d)", (a - 1), a);
        }
    }
}