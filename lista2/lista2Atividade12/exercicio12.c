/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio12.c
 * Author: Caio Costa Lopes
 *
 * Created on 1 de agosto de 2026, 12:53
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    char caractere;
    short int contagem = 0;
    
    
    while(1) {
        scanf("%c", &caractere);
        
        if (contagem == 0)
            printf("RESP:");
        
        if (caractere == ' ')
            printf("_");
        else
            printf("%c", caractere);
        
        if ((caractere == '.') || (caractere == '!') || (caractere == '?'))
            break;
        
        contagem++;
    }

    return (EXIT_SUCCESS);
}

