/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exerc2.c
 * Author: Caio Costa Lopes
 *
 * Created on 29 de julho de 2026, 21:52
 */

#include <stdio.h>
#include <stdlib.h>

/*
 *Programa que calcula o perímetro de um retângulo; 
 */
int main(int argc, char** argv) {
    float comprimento, altura;
    
    scanf("%f %f", &comprimento, &altura);
    
    printf("%.2f", ((comprimento * 2) + (altura * 2)));

    return (EXIT_SUCCESS);
}

