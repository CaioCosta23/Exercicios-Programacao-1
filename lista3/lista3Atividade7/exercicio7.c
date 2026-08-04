/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio7.c
 * Author: Caio Costa Lopes
 *
 * Created on 4 de agosto de 2026, 14:52
 */

#include <stdio.h>
#include <stdlib.h>

int area(int xInferior, int yInferior, int xSuperior, int ySuperior){
    int lado = 0, altura = 0;
    
    if ((xInferior < xSuperior) && (yInferior < ySuperior)) {
        lado = xSuperior - xInferior;
        altura = ySuperior - yInferior;
    }else if((xInferior > xSuperior) && (yInferior < ySuperior)) {
        lado = xInferior - xSuperior;
        altura = ySuperior - yInferior;
    }else if((xInferior > xSuperior) && (yInferior > ySuperior)) {
        lado = xInferior - xSuperior;
        altura = yInferior - ySuperior;
    }else {
        lado = xSuperior - xInferior;
        altura = yInferior - ySuperior;
    }
    
    return (lado * altura);
}

int areaTotal(int xInferior1, int yInferior1, int xSuperior1, int ySuperior1, int xInferior2, int yInferior2, int xSuperior2, int ySuperior2) {
    int total;
    
    total = area(xInferior1, yInferior1, xSuperior1, ySuperior1) + area(xInferior2, yInferior2, xSuperior2, ySuperior2);
    
    // Estes "if/else"s tratam os casos de sobreposição de um retângulo sobre o outro;
    if (((xInferior1 < xInferior2) && (yInferior1 < yInferior2) && (xInferior1 < xSuperior2) && (yInferior1 < ySuperior2)) &&
        ((xSuperior1 > xInferior2) && (ySuperior1 > yInferior2) && (xSuperior1< xSuperior2) && (ySuperior1 < ySuperior2))) {
        total = total - area(xInferior2, yInferior2, xSuperior1, ySuperior1);
        
    }else if (((xInferior1 > xInferior2) && (yInferior1 < yInferior2) && (xInferior1 < xSuperior2) && (yInferior1 < ySuperior2)) &&
              ((xSuperior1 > xInferior2) && (ySuperior1 > yInferior2) && (xSuperior1 > xSuperior2) && (ySuperior1 < ySuperior2))) {
                    total = total - area(xInferior1, yInferior2, xSuperior2, ySuperior1);
                    
    }else if (((xInferior1 < xInferior2) && (yInferior1 > yInferior2) && (xInferior1 < xSuperior2) && (yInferior1 < ySuperior2)) &&
              ((xSuperior1 > xInferior2) && (ySuperior1 > yInferior2) && (xSuperior1 > xSuperior2) && (ySuperior1 < ySuperior2))) {
                    total = total - area(xInferior2, yInferior1, xSuperior1, ySuperior2);
                    
    }else if (((xInferior1 > xInferior2) && (yInferior1 > yInferior2) && (xInferior1 < xSuperior2) && (yInferior1 < ySuperior2)) &&
              ((xSuperior1 > xInferior2) && (ySuperior1 > yInferior2) && (xSuperior1 > xSuperior2) && (ySuperior1 > ySuperior2))) {
                    total = total - area(xInferior1, yInferior1, xSuperior2, ySuperior2);
                    
    }else if (((xInferior1 == xInferior2) && (yInferior1 < yInferior2) && (xInferior1 < xSuperior2) && (yInferior1 < ySuperior2)) &&
              ((xSuperior1 > xInferior2) && (ySuperior1 > yInferior2) && (xSuperior1 == xSuperior2) && (ySuperior1 < ySuperior2))) {
                    total = total - area(xInferior2, yInferior2, xSuperior1, ySuperior1);
                    
    }else if (((xInferior1 < xInferior2) && (yInferior1 == yInferior2) && (xInferior1 < xSuperior2) && (yInferior1 < ySuperior2)) &&
              ((xSuperior1 > xInferior2) && (ySuperior1 > yInferior2) && (xSuperior1 < xSuperior2) && (ySuperior1 == ySuperior2))) {
                    total = total - area(xInferior2, yInferior1, xSuperior1, ySuperior2);
                    
    }else if (((xInferior1 == xInferior2) && (yInferior1 > yInferior2) && (xInferior1 < xSuperior2) && (yInferior1 < ySuperior2)) &&
              ((xSuperior1 > xInferior2) && (ySuperior1 > yInferior2) && (xSuperior1 == xSuperior2) && (ySuperior1 > ySuperior2))) {
                    total = total - area(xInferior1, yInferior1, xSuperior2, ySuperior2);
                    
    }else if (((xInferior1 > xInferior2) && (yInferior1 == yInferior2) && (xInferior1 < xSuperior2) && (yInferior1 < ySuperior2)) &&
              ((xSuperior1 > xInferior2) && (ySuperior1 > yInferior2) && (xSuperior1 > xSuperior2) && (ySuperior1 == ySuperior2))) {
                    total = total - area(xInferior1, yInferior1, xSuperior2, ySuperior2);
                    
    }else if (((xInferior1 > xInferior2) && (yInferior1 > yInferior2) && (xInferior1 < xSuperior2) && (yInferior1 < ySuperior2)) &&
              ((xSuperior1 > xInferior2) && (ySuperior1 > yInferior2) && (xSuperior1 < xSuperior2) && (ySuperior1 == ySuperior2))) {
                    total = total - area(xSuperior1, yInferior1, xSuperior1, ySuperior2);
                    
    }else if (((xInferior1 == xInferior2) && (yInferior1 < yInferior2) && (xInferior1 < xSuperior2) && (yInferior1 < ySuperior2)) &&
              ((xSuperior1 > xInferior2) && (ySuperior1 > yInferior2) && (xSuperior1 < xSuperior2) && (ySuperior1 < ySuperior2))) {
                    total = total - area(xInferior2, yInferior2, xSuperior1, ySuperior1);
                    
    }else if (((xInferior1 > xInferior2) && (yInferior1 < yInferior2) && (xInferior1 < xSuperior2) && (yInferior1 < ySuperior2)) &&
              ((xSuperior1 > xInferior2) && (ySuperior1 > yInferior2) && (xSuperior1 == xSuperior2) && (ySuperior1 < ySuperior2))) {
                    total = total - area(xInferior1, yInferior2, xSuperior2, ySuperior1);
                    
    }else if (((xInferior1 < xInferior2) && (yInferior1 < yInferior2) && (xInferior1 < xSuperior2) && (yInferior1 < ySuperior2)) &&
              ((xSuperior1 > xInferior2) && (ySuperior1 > yInferior2) && (xSuperior1 == xSuperior2) && (ySuperior1 < ySuperior2))) {
                    total = total - area(xInferior2, yInferior2, xSuperior1, ySuperior1);
                    
    }
    return total;
    
    /*
     * A título de visualização de todos esses casos, será disponibilizada na pasta da atividade um arquivo com imagens/desenhos das
     * possibilidades de sobreposição de um retângulo sobre o outro (justificando todas as condicionais acima);
     */
}

/*
 * Programa que cálcula a area ocupada por dois retângulos (Deverá ser feito usando o conceito de funções e subprogramas);
 */
int main(int argc, char** argv) {
    int xInferior1, yInferior1, xSuperior1, ySuperior1, xInferior2, yInferior2, xSuperior2, ySuperior2;
    
    scanf("%d %d %d %d", &xInferior1, &yInferior1, &xSuperior1, &ySuperior1);
    scanf("%d %d %d %d", &xInferior2, &yInferior2, &xSuperior2, &ySuperior2);
    
    printf("RESP:%d", areaTotal(xInferior1, yInferior1, xSuperior1, ySuperior1, xInferior2, yInferior2, xSuperior2, ySuperior2));
    
    return (EXIT_SUCCESS);
}

