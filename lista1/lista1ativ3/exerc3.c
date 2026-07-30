/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exerc3.c
 * Author: Caio Costa Lopes
 *
 * Created on 30 de julho de 2026, 12:12
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Programa que calcula o perímetro de um retângulo (com suas entradas dadas em coordenada x, y);
 * 
 * Exemplo: 0 15 20 25 (Coordenadas x e y do canto inferior esquerdo e coordenadas x e y do canto superior direito);
 */
int main(int argc, char** argv) {
    float x1, y1, x2, y2, perimetro;
    
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    
    printf("%.2f", (((x2 - x1) * 2) + ((y2 - y1) * 2)));
    
    return (EXIT_SUCCESS);
}

