/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio13.c
 * Author: Caio Costa Lopes
 *
 * Created on 3 de agosto de 2026, 16:08
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Programa que tranforma letras minúsculas em maiúsculas e termina ao se encontrar um "." ou "!" ou "?".
 */
int main(int argc, char** argv) {
    char caractere;
    
    while(1){
        scanf("%c", &caractere);
        
        if ((caractere >= 'a') && (caractere <= 'z'))
            printf("%c", (caractere - 32));
        else
            printf("%c", caractere);
        
        if ((caractere == '.') || (caractere == '!') || (caractere == '?'))
            break;
    }

    return (EXIT_SUCCESS);
}

