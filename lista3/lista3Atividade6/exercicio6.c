/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio6.c
 * Author: Caio Costa Lopes
 *
 * Created on 4 de agosto de 2026, 14:28
 */

#include <stdio.h>
#include <stdlib.h>

int palindromo(int numero) {
    int copiaNumero = numero, palindromo = 0;
    
    while(copiaNumero > 0) {
        /* 
         * Pega o valor do último registro do palíndromo, multiplica ele por 10 (para que os valores se desloquem para a esquerda
         * e em seguida pega o último algarismo do número atual (resto da divisão por 10) e adiciona ao valor atual do palíndromo
         * (na última casa decimal - como unidade);
         * 
         * Exemplo: 2026
         * 0 * 10 = 0 | 2026 % 10 = 6 | 0 + 6 = 6 
         * 6 * 10 = 60 | 202 % 10 = 2 | 60 + 2 = 62... e assim sucessivamente; 
         */
        palindromo = (palindromo * 10) + (copiaNumero % 10);
        /*
         * Aqui retiramos a última únidade do valor da cópia do número para que o cálculo acima
         * tenha prosseguimento correto (2026 / 10 = 202... e assim sucessivamente;
         */
        copiaNumero = copiaNumero / 10;
    }
    
    return (palindromo == numero);
}

/*
 * Programa que verifica se um conjunto de numeros e um palindromo ou não;
 */
int main(int argc, char** argv) {
    int numero;
    
    while(scanf("%d", &numero) == 1){
        palindromo(numero) ? printf("S\n") : printf("N\n");
    }

    return (EXIT_SUCCESS);
}

