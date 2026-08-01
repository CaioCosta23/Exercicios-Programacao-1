/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio6.c
 * Author: Caio Costa Lopes
 *
 * Created on 1 de agosto de 2026, 10:46
 */

#include <stdio.h>
#include <stdlib.h>

#include <math.h>

/*
 * Programa que calcula somatórios.
 * 
 * Opção 1: 1/1 + 3/2 + 5/3 + 7/4 ... 99/50
 * Opção 2: 2¹/50 + 2²/49 + 2³/48 + 2⁴/47 ... 2⁵⁰/1
 * Opção 3: 1/1 + 2/4 + 3/9 + 4/16 ... 10/100
 */
int main(int argc, char** argv) {
    int opcao, i;
    double denominador;
    double somatorio = 0;
    
    scanf("%d", &opcao);
    
    if (opcao == 1){
        int numerador = 1;
        
        denominador = 1;
        for(i = 1; i <= 50; i++) {
            somatorio = somatorio + (numerador / denominador);
            
            numerador += 2;
            denominador += 1;
        }
    }else if (opcao == 2){
        denominador = 50;
        for(i = 1; i <= 50; i++) {
            somatorio = somatorio + (pow(2, i) / denominador);
            
            denominador -= 1;
        }
    }else if (opcao == 3) {
        for(i = 1; i <= 10; i++) {
            somatorio = somatorio + (i / pow(i, 2));
        }
    }
    
    printf("%.6lf", somatorio);
    
    return (EXIT_SUCCESS);
}

