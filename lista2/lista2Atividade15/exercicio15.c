/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio15.c
 * Author: Caio Cost Lopes
 *
 * Created on 3 de agosto de 2026, 16:33
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Programa que lê uma sequência de números e imprime a na tela a quantidade d números negativos,
 * a quantidade de números positivos, a soma dos números negativos e a soma dos números positivos digitados
 * (nessa respectiva seqência); 
 */
int main(int argc, char** argv) {
    int numero;
    int contagemNegativos = 0, somaNegativos = 0, contagemPositivos = 0, somaPositivos = 0;
    
    while(scanf("%d", & numero) == 1) {
        if (numero < 0){
            contagemNegativos += 1;
            somaNegativos = somaNegativos + numero;
        }else if (numero > 0) {
            contagemPositivos += 1;
            somaPositivos = somaPositivos + numero;
        }
    }
    
    printf("%d %d %d %d", contagemNegativos, contagemPositivos, somaNegativos, somaPositivos);
        

    return (EXIT_SUCCESS);
}

