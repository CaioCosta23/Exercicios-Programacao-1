/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio3.c
 * Author: Caio Costa Lopes
 *
 * Created on 31 de julho de 2026, 22:32
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Programa que lê um quantidade de números (inseridas pelo usuário) e que contabilize qual o maior valor digitado
 * qual o menor valor digitado, a quantidade de valores pares digitados, a quantidade de valores ímpares digitados e
 * a média dos valores;
 */
int main(int argc, char** argv) {
    int quantidade, valor, n, maior, menor;
    int pares = 0, impares = 0, soma = 0;
    
    scanf("%d", &quantidade);
    
    for(n = 0; n < quantidade; n++) {
        scanf("%d", &valor);
        
        if ((n == 0)) {
            maior = valor;
            menor = valor;
        }
        
        if (maior < valor)
            maior = valor;
        
        if (menor > valor)
            menor = valor;
        
        if (valor % 2 == 0)
            pares += 1;
        else
            impares += 1;
        
        soma = soma + valor;
    }
    
    printf("%d %d %d %d %.6f", maior, menor, pares, impares, ((float)soma / (float)quantidade));

    return (EXIT_SUCCESS);
}

