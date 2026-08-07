/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio2A.c
 * Author: archer
 *
 * Created on 7 de agosto de 2026, 13:49
 */

#include <stdio.h>
#include <stdlib.h>

#include <math.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int a, b, c, d, e, f, x, y, ix, sx, iy, sy, maiorX, maiorY;
    double maiorValor, polinomio;
    
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    scanf("%d %d %d %d", &ix, &sx, &iy, &sy);
    
    for (x = ix; x <= sx; x++){
        for(y = iy; y <= sy; y++) {
            polinomio = (a * (pow(x, 2))) + (b * (pow(y, 2))) + (c * x * y) + (d * x) + (e * y) + f;
            
            if (((x == ix) && (y == iy)) || (polinomio > maiorValor)){
                maiorValor = polinomio;
                maiorX = x;
                maiorY = y;
            }
        }
    }
    
    printf("%d %d\n", maiorX, maiorY);

    return (EXIT_SUCCESS);
}

