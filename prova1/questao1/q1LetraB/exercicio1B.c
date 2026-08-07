/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio1B.c
 * Author: Caio Costa Lopes
 *
 * Created on 7 de agosto de 2026, 13:31
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Programa que lê um número e imprime quantos dos seus digitos são ímpares
 * (o número possui no mínimo 1 e no máximo 5 dígitos);
 */
int main(int argc, char** argv) {
    int numero;
    short int quantidadeImpares;
    
    scanf("%d", &numero);
    
    while(numero != 0){
        if ((numero % 10) % 2 == 1)
            quantidadeImpares += 1;
        
        numero = numero / 10;
    }
    
    printf("%hd\n", quantidadeImpares);

    return (EXIT_SUCCESS);
}

