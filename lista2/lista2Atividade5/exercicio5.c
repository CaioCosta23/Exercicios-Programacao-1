/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio5.c
 * Author: archer
 *
 * Created on 31 de julho de 2026, 23:02
 */

#include <stdio.h>
#include <stdlib.h>

#include <math.h>

/*
 * Programa que calcula o valor de PI através de um somatório;
 * 
 * Fórmula: PI = raiz quadrada de um somatório de k até n (onde k se inicia em 1) de 6 / k elevado a 2; 
 */
int main(int argc, char** argv) {
    int numero, k;
    double pi = 0;
    
    scanf("%d", &numero);
    
    for (k = 1; k <= numero; k++) {
        pi = pi +(float)6 / (float)(pow(k, 2));
    }
    
    printf("%.6lf",sqrt(pi));

    return (EXIT_SUCCESS);
}

