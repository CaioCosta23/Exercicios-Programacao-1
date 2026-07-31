/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio13.c
 * Author: Caio Costa Lopes
 *
 * Created on 30 de julho de 2026, 19:19
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Programa que recebe como entrada uma quantidade de pessoas e uma quantidade de itens e
 * simula a distribuição dos itens (de maneira "igual") e busca ver quem foi a última pessoa
 * a receber um item (mesmo que alguns fiquem com mais ou com menos por causa de um numero não
 * múltiplo de itens por pessoa);
 */
int main(int argc, char** argv) {
    int numeroPessoas, quantidadeItens, recebedorUltimoItem;
    
    scanf("%d %d", &numeroPessoas, &quantidadeItens);
    
    /* Dividira a quantidade de itens pela de pessoas o que dará a distribuição como uma 
     * espécie de "lista circular";
     */
    recebedorUltimoItem = (quantidadeItens % numeroPessoas);
    
    // Caso o valor seja multiplo um do outro, o recebedor foi a útima pessoa da "lista";
    if (recebedorUltimoItem == 0)
        recebedorUltimoItem = numeroPessoas;
    
    printf("RESP:%d", recebedorUltimoItem);

    return (EXIT_SUCCESS);
}

