/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio16.c
 * Author: Caio Costa Lopes
 *
 * Created on 3 de agosto de 2026, 16:49
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Programa que recebe duas sequêcias e verifica qual o menor valor da primeira sequência e, em seguida,
 * procura a primeira e a última posição em que o menor número da primeira sequência aparece na segunda sequência;
 * 
 * OBS: Se o menor número da primeira sequência não aparecer na segunda sequência, considere o tamanho da mesma 
 * como sendo a primeira e última posições de ocorrência desse número;
 */
int main(int argc, char** argv) {
    int numero, menorValorPrimeiraSequencia, primeiraPosicao, ultimaPosicao;
    int contagem = 0;
    
    while(scanf("%d", &numero) == 1) {
        if ((contagem == 0) || (menorValorPrimeiraSequencia > numero))
            menorValorPrimeiraSequencia = numero;
        
        contagem++;
    }
    
    // Limpeza de "buffer" do programa (consome tudo que não foi lido antes, até o '\n';
    scanf("%*[^\n]");
    // Consome o '\n' restante do buffer;
    scanf("%*c");
    
    contagem = 0;
    int menorValorAchado = 0;
    
    while(scanf("%d", &numero) == 1) {
        if (numero == menorValorPrimeiraSequencia) {
            if (!(menorValorAchado)){
                // "Flag" que indica que o menor valor da primeira sequência foi achado na segunda;
                menorValorAchado = 1;
                primeiraPosicao = contagem;
            }
                
            ultimaPosicao = contagem;
        }
        
        contagem++;
    }
    
    if (!(menorValorAchado)){
        primeiraPosicao = contagem;
        ultimaPosicao = contagem;
    }
    
    printf("%d %d %d", menorValorPrimeiraSequencia, primeiraPosicao, ultimaPosicao);
        

    return (EXIT_SUCCESS);
}

