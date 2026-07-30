/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio6.c
 * Author: Caio Costa Lopes
 *
 * Created on 30 de julho de 2026, 16:27
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Calcule a média parcil de um aluno recebendo duas notas e dia se o mesmo está
 * aprovado (média maior ou igual a 7), em recuperação (média maiorou igual a 5 e menor que 7) ou
 * reprovado (média menor que 5);
 */
int main(int argc, char** argv) {
    float nota1, nota2, media;
    
    scanf("%f %f", &nota1, &nota2);
    
    media = (nota1 + nota2) / 2;
    
    printf("%.1f - ", media);
    if (media >= 7)
        printf("Aprovado");
    else if (media >= 5)
        printf("De Recuperacao");
    else
        printf("Reprovado");
    return (EXIT_SUCCESS);
}

