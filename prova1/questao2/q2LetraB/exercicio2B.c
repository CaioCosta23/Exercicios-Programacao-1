/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio2B.c
 * Author: archer
 *
 * Created on 7 de agosto de 2026, 14:16
 */

#include <stdio.h>
#include <stdlib.h>

#include <math.h>

/*
  * Programa que recebe 6 valores (a, b, c, d, e, f) e em seguida 4 valores (ix, sx, iy, sy), com esses 4 últimos
 * indicando os limites de inferiror (começando com "i") e superior (começando com "s"), onde será
 * calculado um determinado polinômio com a fórmula ax² + by² + cxy + dx + ey + f.
 * 
 * Com isso devemos indicar qual o X e qual o Y do menor valor encontrado com o cálculo desse polinômio;
 */
int main(int argc, char** argv) {
    int a, b, c, d, e, f, ix, sx, iy, sy, x, y, menorX, menorY;
    double polinomio, menorValor;
    
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    scanf("%d %d %d %d", &ix, &sx, &iy, &sy);
    
    for(x = ix; x <= sx; x++){
        for(y = iy; y <= sy; y++) {
            polinomio = (a * (pow(x, 2))) + (b * (pow(y, 2))) + (c * x * y) + (d * x) + (e * y) + f;
            
            if (((x == ix) && (y == iy)) || (polinomio < menorValor)){
                menorValor = polinomio;
                menorX = x;
                menorY = y;
            }
        }
    }
    
    printf("%d %d\n", menorX, menorY);

    return (EXIT_SUCCESS);
}

