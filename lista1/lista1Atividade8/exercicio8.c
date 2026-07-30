/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio8.c
 * Author: Caio Costa Lopes
 *
 * Created on 30 de julho de 2026, 17:07
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Programa que mostra se uma letra é ou não uma vogal;
 */
int main(int argc, char** argv) {
    char letra;
    
    scanf("%c", &letra);
    
    if ((letra == 'A') || (letra == 'a') || (letra == 'E') || (letra == 'e') || (letra == 'I') || 
        (letra == 'i') || (letra == 'O') || (letra == 'o') || (letra == 'U') || (letra == 'U'))
        printf("Vogal");
    else
        printf("Nao vogal");

    return (EXIT_SUCCESS);
}

