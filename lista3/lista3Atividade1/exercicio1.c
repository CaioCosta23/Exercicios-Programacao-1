/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio1.c
 * Author: Caio Costa Lopes
 *
 * Created on 3 de agosto de 2026, 21:53
 */

#include <stdio.h>
#include <stdlib.h>

float soma(float numero1, float numero2);
float subtracao(float numero1, float numero2);
float multiplicacao(float numero1, float numero2);
float divisao(float numero1, float numero2);


/*
 * Programa que realiza as quatro operações aritiméicas fundamentais através de funções;
 */
int main(int argc, char** argv) {
    float numero1, numero2;
    
    while(scanf("%f %f", &numero1, &numero2) == 2) {
        float resultado;
        
        resultado = soma(numero1, numero2);
        printf("%.2f", resultado);
        
        resultado = subtracao(numero1, numero2);
        printf(" %.2f", resultado);
        
        resultado = divisao(numero1, numero2);
        printf(" %.2f", resultado);
        
        resultado = multiplicacao(numero1, numero2);
        printf(" %.2f\n", resultado);
    }

    return (EXIT_SUCCESS);
}

float soma(float numero1, float numero2){
    return numero1 + numero2;
}

float subtracao(float numero1, float numero2){
    return numero1 - numero2;
}

float multiplicacao(float numero1, float numero2){
    return numero1 * numero2;
}

float divisao(float numero1, float numero2){
    return numero1 / numero2;
}

