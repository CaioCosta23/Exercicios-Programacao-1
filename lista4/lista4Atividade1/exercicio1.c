/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio1.c
 * Author: Caio Costa Lopes
 *
 * Created on 5 de agosto de 2026, 13:10
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int codigo, quantidade;
    float preco;
}Produto;

Produto leProduto();
int produtoFaltante(Produto produto);
int produtoMaisCaro(Produto produto, Produto atualMaisCaro);
int produtoMaisBarato(Produto produto, Produto atualMaisBarato);
void imprimeProduto(Produto produto);


/*
 * Programa que imprime os dados de produtos;
 * 
 * O produto deve ter quantidade, código e preço, sendo que se deve resgistrar na saída se o produto está ou não em falta;
 * O  código deve ler inicialmente a quantidade de produtos a ser registrado;
 * A saída do programa deve indicar (em ordem de registro) qual os produtos que estçao em falta, o mais caro e o mais barato;
 */
int main(int argc, char** argv) {
    int p, quantidadeProdutos;
    Produto produto, maisCaro, maisBarato;
    
    scanf("%d", &quantidadeProdutos);
    
    for(p = 0; p < quantidadeProdutos; p++) {
        produto = leProduto();
    
        if (produtoFaltante(produto)){
            printf("FALTA:");
            imprimeProduto(produto);
        }
        
        if (p == 0){
            maisCaro = produto;
            maisBarato = produto;
        }
        
        if (produtoMaisCaro(produto, maisCaro)){
            maisCaro = produto;
        }
        
        if (produtoMaisBarato(produto, maisBarato)){
            maisBarato = produto;
        }
    }
    
    printf("MAIOR:");
    imprimeProduto(maisCaro);
    printf("MENOR:");
    imprimeProduto(maisBarato);
    
    return (EXIT_SUCCESS);
}

Produto leProduto(){
    Produto produto;
    
    scanf("%d;%f;%d", &produto.codigo, &produto.preco, &produto.quantidade);
    
    return produto;
}
int produtoFaltante(Produto produto){
    return (produto.quantidade == 0);
}

int produtoMaisCaro(Produto produto, Produto atualMaisCaro) {
    return (produto.preco > atualMaisCaro.preco);
}
int produtoMaisBarato(Produto produto, Produto atualMaisBarato){
    return (produto.preco < atualMaisBarato.preco);
}
void imprimeProduto(Produto produto){
    printf("COD %d, PRE %.2f, QTD %d\n", produto.codigo, produto.preco, produto.quantidade);
}
