/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exerc1.c
 * Author: Caio Costa Lopes
 *
 * Created on 29 de julho de 2026, 17:23
 */

#include <stdio.h>
#include <stdlib.h>

#include <math.h>

/*
 * Programa que leia 2 números e retorne a soma de suas raízes quadradas;
 */
int main(int argc, char** argv) {
    int numero1, numero2;
    
    scanf("%d %d", &numero1, &numero2);
    
    printf("%.2lf", (sqrt(numero1) + sqrt(numero2)));

    return (EXIT_SUCCESS);
}

