/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio5.c
 * Author: Caio
 *
 * Created on 30 de julho de 2026, 15:43
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Programa que mostra qual de dois numeros é o maior (e se iguais, mostra que são iguais); 
 */
int main(int argc, char** argv) {
    int numero1, numero2;
    
    scanf("%d %d", &numero1, &numero2);
    
    if(numero1 > numero2)
        printf("N1 = %d", numero1);
    else if(numero1 < numero2)
        printf("N2 = %d", numero2);
    else
        printf("N1 = N2");

    return (EXIT_SUCCESS);
}

