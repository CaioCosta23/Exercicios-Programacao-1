/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio12.c
 * Author: Caio Costa Lopes
 *
 * Created on 30 de julho de 2026, 18:21
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Programa que coloca 3 valores em ordem crescente;
 * 
 */
int main(int argc, char** argv) {
    int numero1, numero2, numero3, auxiliarNumero;
    short int  posicaoNumero1 = 1, posicaoNumero2 = 2, posicaoNumero3 = 3;
    short int auxiliarPosicao;
    
    scanf("%d %d %d", &numero1, &numero2, &numero3);
    
    // O melhor passo à passo é ir reorganizando as posições de trás para frente (uma vez que a ordem crescente é a saída desejada);
    if (numero1 > numero3){
        auxiliarNumero = numero1;
        numero1 = numero3;
        numero3 = auxiliarNumero;
        
        auxiliarPosicao = posicaoNumero1;
        posicaoNumero1 = posicaoNumero3;
        posicaoNumero3 = auxiliarPosicao;
    }
    
    if (numero1 > numero2) {
        auxiliarNumero = numero1;
        numero1 = numero2;
        numero2 = auxiliarNumero;
        
        auxiliarPosicao = posicaoNumero1;
        posicaoNumero1 = posicaoNumero2;
        posicaoNumero2 = auxiliarPosicao;
    }
    
    if (numero2 > numero3) {
        auxiliarNumero = numero2;
        numero2 = numero3;
        numero3 = auxiliarNumero;
        
        auxiliarPosicao = posicaoNumero2;
        posicaoNumero2 = posicaoNumero3;
        posicaoNumero3 = auxiliarPosicao;
    }
    
    printf("N%d = %d, N%d = %d, N%d = %d", posicaoNumero1, numero1, posicaoNumero2, numero2, posicaoNumero3, numero3);

    return (EXIT_SUCCESS);
}

