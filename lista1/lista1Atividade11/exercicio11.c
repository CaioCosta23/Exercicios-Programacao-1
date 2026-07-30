/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio11.c
 * Author: Caio Costa Lopes
 *
 * Created on 30 de julho de 2026, 17:47
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Programa que recebe um valor representando um mês e escreve na saída o nome do mês por extenso;
 */
int main(int argc, char** argv) {
    int mes;
    
    scanf("%d", &mes);
    
    switch(mes) {
        case 1:
            printf("Jan.");
            break;
        case 2:
            printf("Fev.");
            break;
        case 3:
            printf("Mar.");
            break;
        case 4:
            printf("Abr.");
            break;
        case 5:
            printf("Mai.");
            break;
        case 6:
            printf("Jun.");
            break;
        case 7:
            printf("Jul.");
            break;
        case 8:
            printf("Ago.");
            break;
        case 9:
            printf("Set.");
            break;
        case 10:
            printf("Out");
            break;
        case 11:
            printf("Nov.");
            break;
        case 12:
            printf("Dez.");
            break;
        default:
            printf("Invalido.");
            break;
    }

    return (EXIT_SUCCESS);
}

