/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio10.c
 * Author: Caio Costa Lopes
 *
 * Created on 30 de julho de 2026, 17:39
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Programa que mostra se um número é par ou ímpar;
 */
int main(int argc, char** argv) {
    int numero;
    
    scanf("%d", &numero);
    
    if (numero % 2 == 0)
        printf("Par");
    else
        printf("Impar");

    return (EXIT_SUCCESS);
}

