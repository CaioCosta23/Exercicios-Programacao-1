/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   exercicio3.c
 * Author: Caio Costa Lopes
 *
 * Created on 6 de agosto de 2026, 00:05
 */

#include <stdio.h>
#include <stdlib.h>

#define ANO_INICIAL 1

#define MES_INICIAL_ANO 1
#define MES_FINAL_ANO 12

#define DIA_INICIAL_MES 1

#define JANEIRO 1
#define FEVEREIRO 2
#define MARCO 3
#define ABRIL 4
#define MAIO 5
#define JUNHO 6
#define JULHO 7
#define AGOSTO 8
#define SETEMBRO 9
#define OUTUBRO 10
#define NOVEMBRO 11
#define DEZEMBRO 12

#define MES_28_DIAS 28
#define MES_29_DIAS 29
#define MES_30_DIAS 30
#define MES_31_DIAS 31


typedef struct {
    int dia, mes, ano;
}Data;

Data leData();
Data alteraData(Data data);
void imprimeData();


int dataAnoBissexto(Data data) {
    return (((data.ano % 4 == 0) && (data.ano % 100 != 0)) || ((data.ano % 100 == 0) && (data.ano % 400 == 0)));
}

int quantidadeDiasMes(Data data) {
    if (data.mes == FEVEREIRO) {
        if (!(dataAnoBissexto(data)))
            return MES_28_DIAS;
        else
            return MES_29_DIAS;
    }else if ((data.mes == ABRIL) || (data.mes == JUNHO) || (data.mes == SETEMBRO) || (data.mes == NOVEMBRO)){
        return MES_30_DIAS;
    }else {
        return MES_31_DIAS;
    }
}

int verificaAnoValido(int ano) {
    return (ano >= ANO_INICIAL);
}

// Verifica se o mês é menor que o mês inicial de um ano (que é janeiro - mês 1);
int verificaMesMenorInicial(int mes) {
    return (mes < MES_INICIAL_ANO);
}

// Verifica se o mês é maior que o mês final de um ano (que é dezembro - mês 12);
int verificaMesMaiorFinal(int mes) {
    return (mes > MES_FINAL_ANO);
}

int verificaMesValido(int mes) {
    return ((!(verificaMesMenorInicial(mes))) && (!(verificaMesMaiorFinal(mes))));
}

// Verifica se o dia é menor que o dia inicial de um mês (que é o dia 1);
int verificaDiaMenorInicial(int dia) {
    return (dia < DIA_INICIAL_MES);
}

// Verifica se o dia é maior que o dia final de um mês (que depende do mês);
int verificaDiaMaiorFinal(Data data) {
    return (data.dia > quantidadeDiasMes(data));
}

int verificaDiaValido(Data data) {
    return ((!(verificaDiaMenorInicial(data.dia))) && (!(verificaDiaMaiorFinal(data))));
}

int verificaDataValida(Data data) {
    return ((verificaAnoValido(data.ano)) && (verificaMesValido(data.mes)) && (verificaDiaValido(data)));
}

/*
 * Programa que analisa se uma data é de um ano bissexto ou não;
 * 
 * OBS: Caso a data esteja errada, deve-se corriji-lá para uma data válida;
 */
int main(int argc, char** argv) {
    int quantidadeDatas, d;
    Data data;
    
    scanf("%d", &quantidadeDatas);
    
    for (d = 0; d < quantidadeDatas; d++) {
        data = leData();
        
        if (!(verificaDataValida(data)))
            data = alteraData(data);
        
        imprimeData(data);
        
        if (dataAnoBissexto(data))
            printf("Bisexto\n");
        else
            printf("Normal\n");
    }
    return (EXIT_SUCCESS);
}


Data leData() {
    Data data;
    
    scanf("%d %d %d", &data.dia, &data.mes, &data.ano);
    
    return data;
}

Data alteraData(Data data) {
    if (!(verificaAnoValido(data.ano))){
        data.ano = 1;
    }
    
    if (verificaMesMenorInicial(data.mes)){
        data.mes = MES_INICIAL_ANO;
    }
    
    if (verificaMesMaiorFinal(data.mes)){
        data.mes = MES_FINAL_ANO;
    }
    
    if (verificaDiaMenorInicial(data.dia)){
        data.dia = DIA_INICIAL_MES;
    }
    
    if (verificaDiaMaiorFinal(data)){
        data.dia = quantidadeDiasMes(data);
    }
    
    return data;
}

void imprimeData(Data data) {
    printf("'%02d/%02d/%04d':", data.dia, data.mes, data.ano);
}