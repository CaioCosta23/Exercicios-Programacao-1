/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio7.c
 * Author: Caio Costa Lopes
 *
 * Created on 30 de julho de 2026, 16:43
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Converte uma Temperatura de Celsius ("C" ou "c") para Fahrenheit e de Fahrenheit ("F" ou "f") para Celcius;
 * 
 * Entradas: Temperatura e inicial do tipo de medida de temperatura ("C" ou "c" para Celsius e "F" ou "f" para fahrenheit");
 */
int main(int argc, char** argv) {
    float temperatura;
    char tipoMedida;
    
    scanf("%f %c", &temperatura, &tipoMedida);
    
    if ((tipoMedida == 'C') || (tipoMedida == 'c')) {
        printf ("%.2f (F)", ((9.0 / 5.0) * temperatura + 32));
    } else if ((tipoMedida == 'F') || (tipoMedida == 'f')) {
        printf ("%.2f (C)", ((5.0 / 9.0) * (temperatura - 32)));
    }
    return (EXIT_SUCCESS);
}

