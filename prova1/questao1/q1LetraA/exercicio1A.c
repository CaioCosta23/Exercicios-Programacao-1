/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio1A.c
 * Author: Caio Costa Lopes
 *
 * Created on 7 de agosto de 2026, 13:12
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Programa que lê valores (de no máximo 5 digítos e indica quantos são pares;
 */
int main(int argc, char** argv) {
    int numero;
    short int quantidadePares;
    
    scanf("%d", &numero);
    
    if (numero != 0)
        quantidadePares = 0;
    else
        quantidadePares = 1;
    
    while(numero != 0) {
        if ((numero % 10) % 2 == 0)
            quantidadePares += 1;
        
        numero = numero / 10;
    }
    
    printf("%hd\n", quantidadePares);
    
    return (EXIT_SUCCESS);
}

