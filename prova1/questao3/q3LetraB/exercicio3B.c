/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio3B.c
 * Author: Caio Costa Lopes
 *
 * Created on 7 de agosto de 2026, 15:21
 */

#include <stdio.h>
#include <stdlib.h>

#define QUANTIDADE_CARACTERES_SENHA_VALIDA 6

int verificaLetraMaiuscula(char caractere) {
    return ((caractere >= 'A') && (caractere <= 'Z'));
}

int verificaLetraMinuscula(char caractere) {
    return ((caractere >= 'a') && (caractere <= 'z'));
}

int verificaLetra(char caractere) {
    return ((verificaLetraMinuscula(caractere)) || (verificaLetraMaiuscula(caractere)));
}

int verificaAlgarismo(char caractere) {
    return ((caractere >= '0') && (caractere <= '9'));
}

void verificaTipoSenha();

/*
 * Programa que lê uma determinada quantidade de senhas e que verifica se a senha é FORTE, MÉDIA, FRACA ou INVÁLIDA.
 * Senha FORTE: possui números, letra maiúsculas, minúsculas e caracteres especiais;
 * Senha MÉDIA: possui números letra maiúsculas e minúsculas;
 * Senha FRACA: senha que não é FORTE nem MÉDIA nem INVÁLIDA;
 * Senha INVÁLIDA: senha que possui menos de 6 caracteres;
 */
int main(int argc, char** argv) {
    
    verificaTipoSenha();
    
    return (EXIT_SUCCESS);
}


void verificaTipoSenha(){
    int numeroSenhas, quantidadeCaracteres, s;
    char caractereSenha;
    
    int letraMaiuscula, letraMinuscula, numero, especial;
    
    scanf("%d\n", &numeroSenhas);
    
    for (s = 0; s < numeroSenhas; s++) {
        quantidadeCaracteres = 0;
        
        letraMaiuscula = 0;
        letraMinuscula = 0;
        numero = 0;
        especial = 0;
        
        do{
            scanf("%c", &caractereSenha);
            
            if (caractereSenha == '\n')
                break;
            
            if (verificaLetra(caractereSenha)) {
                if (verificaLetraMinuscula(caractereSenha))
                    letraMinuscula = 1;
                else
                    letraMaiuscula = 1;
            }else if (verificaAlgarismo(caractereSenha)){
                numero = 1;
            }else {
                especial = 1;
            }
            
            quantidadeCaracteres++;
        }while(1);
        
        if (quantidadeCaracteres < QUANTIDADE_CARACTERES_SENHA_VALIDA){
            printf("INVALIDA\n");
        }else {
            if ((letraMinuscula) && (letraMaiuscula) && (numero)){
                if (especial)
                    printf("FORTE\n");
                else
                    printf("MEDIA\n");
            }else{
                printf("FRACA\n");
            }
        }
    }
}

