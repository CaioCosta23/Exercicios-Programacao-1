/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio4.c
 * Author: Caio Costa Lopes
 *
 * Created on 30 de julho de 2026, 12:41
 */

#include <stdio.h>
#include <stdlib.h>

#include <math.h>

// Valor definido previamente pelo exercício;
#define PI 3.141592

/*
 * Programa que calcula a área de um círculo e o raio de um circulo com metade desta área;
 */
int main(int argc, char** argv) {
    // Por causa do nível de precisão imposto nos testes, essa variável deve ser 'float';
    float raio;
    double area = 0, raioMetadeArea = 0;
    
    scanf("%f", &raio);
    
    // Aqui devemos multiplicar raio por raio por causa do nível de precisão das casas decimais dos testes;
    area = PI * (raio * raio);
    
    // Neste caso devemos usar a raíz quadrada (função 'sqrt(numero)') para tira a potência do raio;
    raioMetadeArea = sqrt((area / 2) / PI);
    
    printf("%.2f %.2lf", area, raioMetadeArea);

    return (EXIT_SUCCESS);
}

