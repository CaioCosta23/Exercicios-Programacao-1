/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio15.c
 * Author: Caio Costa Lopes
 *
 * Created on 30 de julho de 2026, 22:05
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Informa se a casa da dezena (opção 1) ou da dezena (opção 2) ou da centena (opção 3) de um número de 0 à 999999
 * é par ou ímpar;
 */
int main(int argc, char** argv) {
    int numero, casaNumerica;
    int valorCasaNumerica = 0;
    
    scanf("%d %d", &numero, &casaNumerica);
    
    
    // Coleta o resto da divisão (e se necessário, divide por dés para coletar do numero da casa numérica);
    if (casaNumerica == 1) {
        valorCasaNumerica = numero % 10;
    }else if (casaNumerica == 2) {
        if (numero < 10) 
            valorCasaNumerica = 0;
        else
            valorCasaNumerica = (numero % 100) / 10;
    }else if (casaNumerica == 3) {
        if (numero < 100)
            valorCasaNumerica = 0;
        else
            valorCasaNumerica = (numero % 1000) / 100;
    }
    
    if (valorCasaNumerica % 2 == 0)
        printf("PAR");
    else
        printf("IMPAR");

    return (EXIT_SUCCESS);
}

