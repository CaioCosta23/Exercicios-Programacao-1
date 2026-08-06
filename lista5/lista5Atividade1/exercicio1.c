/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio1.c
 * Author: Caio Costa Lopes
 *
 * Created on 6 de agosto de 2026, 14:40
 */

#include <stdio.h>
#include <stdlib.h>

#include <math.h>

#define NOTA_MINIMA_APROVACAO 70


void leNotas(float notas[], int quantidadeNotas);
void imprimeDadosConcurso(float notas[], int quantidadeNotas);

float maiorNota(float notas[], int quantidadeNotas) {
    int n;
    float maior;
    
    for (n = 0; n < quantidadeNotas; n++) {
        if ((n == 0) || (notas[n] > maior))
            maior = notas[n];
    }
    return maior;
}

float menorNota(float notas[], int quantidadeNotas) {
    int n;
    float menor;
    
    for (n = 0; n < quantidadeNotas; n++) {
        if ((n == 0) || (notas[n] < menor))
            menor = notas[n];
    }
    return menor;
}

float calculaMediaNotas(float notas[], int quantidadeNotas) {
    int n;
    float soma = 0;
    
    for (n = 0; n < quantidadeNotas; n++) {
        soma += notas[n];
    }
    return soma / quantidadeNotas;
}

double calculaDesvioPadraoNotas(float notas[], int quantidadeNotas) {
    float media;
    int n;
    float somatorio = 0;
    
    media = calculaMediaNotas(notas, quantidadeNotas);
    
    for (n = 0; n < quantidadeNotas; n++) {
        somatorio += (pow((notas[n] - media), 2));
    }
    
    return sqrt((1 / (float)quantidadeNotas) * somatorio);
}

int quantidadeAcimaDaMedia(float notas[], int quantidadeNotas) {
    float media;
    int n;
    int acimaMedia = 0;
    
    media = calculaMediaNotas(notas, quantidadeNotas);
    
    for (n = 0; n < quantidadeNotas; n++) {
        if (notas[n] > media)
            acimaMedia += 1;
    }
    
    return acimaMedia;
}

int quantidadeReprovados(float notas[], int quantidadeNotas) {
    int n;
    int reprovados = 0;
    
    for (n = 0; n < quantidadeNotas; n++) {
        if (notas[n] < NOTA_MINIMA_APROVACAO)
            reprovados += 1;
    }
    
    return reprovados;
}

/*
 * Programa que lê as notas de um conjunto de participantes de um concurso e retorna
 * a maior nota, a menor nota, a média das notas, o desvio padrão, a  quantidade de alunos acima das media
 * e a quantidade de alinos reprovados (nota abaixo de 70 - as notas podem ser de 0 à 100);
 */
int main(int argc, char** argv) {
    int quantidadeParticipantes;
    
    scanf("%d", &quantidadeParticipantes);
    
    /* 
     * Essa variável deve ser declarada após a leitura da quantidade de participantes
     * para definir o tamanho do vetor que armazenará as notas;
     */
    float notas[quantidadeParticipantes];
    
    leNotas(notas, quantidadeParticipantes);
    
    imprimeDadosConcurso(notas, quantidadeParticipantes);

    return (EXIT_SUCCESS);
}

void leNotas(float notas[], int quantidadeNotas) {
    int n;
    
    for (n = 0; n < quantidadeNotas; n++) {
        scanf("%f", &notas[n]);
    }
}

void imprimeDadosConcurso(float notas[], int quantidadeNotas) {
    printf("MENOR:%.0f, MAIOR:%.0f, MEDIA:%.2f, STD:%.2lf, ACIMA_MEDIA_CONC:%d, REPROV:%d",
            menorNota(notas, quantidadeNotas), maiorNota(notas, quantidadeNotas), calculaMediaNotas(notas, quantidadeNotas),
            calculaDesvioPadraoNotas(notas, quantidadeNotas), quantidadeAcimaDaMedia(notas, quantidadeNotas),
            quantidadeReprovados(notas, quantidadeNotas));
}