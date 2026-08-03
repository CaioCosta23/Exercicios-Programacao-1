/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio14.c
 * Author: Caio Costa Lopes
 *
 * Created on 3 de agosto de 2026, 16:21
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Programa que leia uma sequência de caracteres e elimine os espaços, com o programa terminando ao digitar
 * um caratere "." ou "!" ou "?";
 */
int main(int argc, char** argv) {
    char caractere;
    short int contagem = 0;
    
    while(1){
        scanf("%c", &caractere);
        
        if (contagem == 0)
            printf("RESP:");
        
        if (caractere != ' ')
            printf("%c", caractere);
        
        if ((caractere == '.') || (caractere == '!') || (caractere == '?'))
            break;
        
        contagem++;
    }

    return (EXIT_SUCCESS);
}

