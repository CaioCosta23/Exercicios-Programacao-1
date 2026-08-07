/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio3A.c
 * Author: Caio Costa Lopes
 *
 * Created on 7 de agosto de 2026, 14:28
 */

#include <stdio.h>
#include <stdlib.h>

#define QUANTIDADE_CARACTERES_SENHA_VALIDA 6

int verificaLetraMinuscula(char caractere) {
    return ((caractere >= 'a') && (caractere <= 'z'));
}

int verificaLetraMaiuscula(char caractere) {
    return ((caractere >= 'A') && (caractere <= 'Z'));
}

int verificaLetra(char caractere) {
    return ((verificaLetraMaiuscula(caractere)) || (verificaLetraMinuscula(caractere)));
}

int verificaAlgarismo(char caractere) {
    return ((caractere >= '0') && (caractere <= '9'));
}

int verificaEspecial(char caractere) {
    return ((!(verificaLetra(caractere))) && (!(verificaAlgarismo(caractere))));
}

void verificaTipoSenha();

/*
 * 
 */
int main(int argc, char** argv) {
    
    verificaTipoSenha();

    return (EXIT_SUCCESS);
}


void verificaTipoSenha(){
    int numeroSenhas, s, quantidadeCaracteres;
    char caractereSenha;
    // Variáveis lógicas que verificam o tipo da senha;
    int numero, letraMaiuscula, letraMinuscula, especial;
    
    scanf("%d\n", &numeroSenhas);
    
    for (s = 0; s < numeroSenhas; s++) {
        quantidadeCaracteres = 0;
        
        numero = 0;
        letraMaiuscula = 0;
        letraMinuscula = 0;
        especial = 0;
        
        do{
            scanf("%c", &caractereSenha);
            
            if (caractereSenha == '\n')
                break;
            
            if (verificaAlgarismo(caractereSenha))
                numero = 1;
            
            if (verificaLetra(caractereSenha)){
                if (verificaLetraMinuscula(caractereSenha))
                    letraMinuscula = 1;
                else
                    letraMaiuscula = 1;
            }
            
            if (verificaEspecial(caractereSenha))
                especial = 1;
            
            quantidadeCaracteres++;
        }while(1);
        
        if (quantidadeCaracteres < QUANTIDADE_CARACTERES_SENHA_VALIDA){
            printf("INVALIDA\n");
        }else {
            if ((letraMinuscula) && (letraMaiuscula) && (especial)){
                if (numero)
                    printf("FORTE\n");
                else
                    printf("MEDIA\n");
            }else {
                printf("FRACA\n");
            }
        }
        
    }
}