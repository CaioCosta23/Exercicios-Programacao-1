/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio7.c
 * Author: Caio Costa Lopes
 *
 * Created on 6 de agosto de 2026, 20:16
 */

#include <stdio.h>
#include <stdlib.h>

#define NAO_POSSUI_RAZAO 0 
#define POSSUI_RAZAO 1

#define INDICE_INICIAL 0

void leNumeros(int numeros[], int quantidadeNumeros);
void imprimeRelacaoProgressaoAritimetica(int numeros[], int quantidadeNumeros);

// Funções que são utilizadas dentro de outras SEMPRE DEVEM VIR PRIMEIRO QUE A PRINCIPAL QUE A UTILIZA!
int obtemRazao(int numero1, int numero2) {
    return numero2 - numero1;
}

int verificaRazao(int numeros[], int quantidadeNumeros){
    int n;
    int razao;
    
    // Primeira diferença (razão) usada como base para verificar as outras entre os outros números;
    razao = obtemRazao(numeros[INDICE_INICIAL], numeros[INDICE_INICIAL + 1]);
    
    // Começa a partir do 2 porque a primeira razão já foi calculada (para se usar como base de comparação com as outras que estão pro vir);
    for(n = 2; n < quantidadeNumeros; n++) {
        if (obtemRazao(numeros[n - 1], numeros[n]) != razao)
            return NAO_POSSUI_RAZAO;
    }
    return POSSUI_RAZAO;
}

/*
 * Programa que lê um valor que representa a quantidade de números na seqência a serem lidos e, em seguida,
 * os lê e informa se essa sequência forma uma progressão aritimétia ou não;
 */
int main(int argc, char** argv) {
    int quantidadeNumeros;
    
    scanf("%d", &quantidadeNumeros);
    
    int numeros[quantidadeNumeros];
    
    leNumeros(numeros, quantidadeNumeros);
    imprimeRelacaoProgressaoAritimetica(numeros, quantidadeNumeros);

    return (EXIT_SUCCESS);
}


void leNumeros(int numeros[], int quantidadeNumeros) {
    int n;
    
    for(n = 0; n < quantidadeNumeros; n++) {
        scanf("%d", &numeros[n]);
    }
}
void imprimeRelacaoProgressaoAritimetica(int numeros[], int quantidadeNumeros) {
    if (verificaRazao(numeros, quantidadeNumeros) && (quantidadeNumeros > 1))
        printf("RESP:%d", obtemRazao(numeros[INDICE_INICIAL], numeros[INDICE_INICIAL + 1]));
    else
        printf("NAO");
}