/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio9.c
 * Author: Caio Costa Lopes
 *
 * Created on 30 de julho de 2026, 17:20
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Programa que lê uma letra e mostra sua versão maiúscula e seu código ASCII.
 *
 * Caso seja digitado um caractere que não é uma letra indicar com uma mensagem de que "Nao e letra!"
 * e caso seja letra mas nao seja minúscula, indicar com uma mensagem de que "A letra deve ser minuscula!";
 */
int main(int argc, char** argv) {
    char letra;
    
    scanf("%c", &letra);
    
    if ((letra >= 'a') && (letra <= 'z'))
        // 32 caracteres é a distância entre uma letra minúscuça e seu equivalente maiúsculo na tabela ASCII;
        printf("%c(%d)", (letra - 32), (letra - 32));
    else if ((letra >= 'A') && (letra <= 'Z'))
        printf("A letra deve ser minuscula!");
    else
        printf("Nao e letra!");
    
    return (EXIT_SUCCESS);
}

