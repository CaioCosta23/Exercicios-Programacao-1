/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio4.c
 * Author: archer
 *
 * Created on 31 de julho de 2026, 22:48
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Programa que lê valores (indefinidamente, até que se digite o valor 0) e que retorna o maior valor digitado e a média a cada rodada;
 */
int main(int argc, char** argv) {
    int valor, maior;
    int contagem = 0, soma = 0;
    float media;
    
    while(1) {
        scanf("%d", &valor);
        
        if (valor == 0)
            break;
        
        if ((contagem == 0) || (maior < valor))
            maior = valor;
        
        contagem += 1;
        soma = soma + valor;
        
        printf("%d %.6f\n", maior, ((float)soma / (float)contagem));
    }

    return (EXIT_SUCCESS);
}

